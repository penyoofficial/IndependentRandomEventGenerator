//Copyright (c) Penyo. All rights reserved. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define POINT_SINGLE 1 //ָ���������
#define POINT_LEVELUP 4 //ָ����������
#define MOUNT_UPPER 5 //ָ��ÿ������

struct state {
	char mode[128 - 4 * 4]; //ģʽ
	int level, score, mount, chance; //�ȼ������������������κ��Ѵ�����
}player;

void Menu(), NumSpawner(), Interactor(int a, int b);
int Calc(int a, int b);

int main()
{
	player.level = 1, player.score = 0;
	Menu();
}

void Menu() //������
{
	system("cls");
	printf("\n\
                      ��ã���ӭ���� ������Ϸ\n\
  ----------------------------------------------------------------\n\
          �����ѡ��ӡ������˺ͳ����������е���һ�����������\n\
      ս����Ϸ��ʼ����Ļ�����������������һλ����������Ҫ����\n\
      ��ȷ�Ĵ𰸣�������˿��������룬��ÿ����ֻ����� 5 �εĳ�\n\
      �Ի��ᣬ���������ֱ�ӽ�����һ�⡣\n\
          ÿ�� %d �֣��ܹ� %d �⣬�ﵽ %d �ֺ�ɽ�������������λ\n\
      ���������ս���ٴδﵽ %d �ּ���ս�ɹ���\n\
  ----------------------------------------------------------------\n\
                        ���� 1 ����ӷ�ģʽ\n\
                        ���� 2 �������ģʽ\n\
                        ���� 3 ����˷�ģʽ\n\
                        ���� 4 �������ģʽ\n\n\
                            ___________\b\b\b\b\b", POINT_SINGLE, MOUNT_UPPER, POINT_LEVELUP, POINT_LEVELUP);
	scanf("%s", player.mode);
	while ((player.mode[1] = getchar()) != '\n'); //��ջ�����
	NumSpawner();
}

void NumSpawner() //����ģ��
{
	int a, b; //������
	system("cls");
	srand(time(NULL));
	if (player.level == 1) //�ȼ���֤
		a = rand() % 10, b = rand() % 10;
	else if (player.level == 2)
		a = rand() % 90 + 10, b = rand() % 90 + 10;
	else
	{
		printf("��ս�ɹ��ˣ�\n");
		system("pause");
		exit(0);
	}
	if ((player.mode[0] == '2' && a - b < 0) || (player.mode[0] == '4' && a % b != 0)) //��Ч����֤
		NumSpawner();
	Interactor(a, b);
}

void Interactor(int a, int b) //����ģ��
{
	char chOrigin[128]; //δ������û�������
	int ch = EOF; //�Ѵ�����û�������
	system("cls");
	if (player.score >= POINT_LEVELUP) //������֤
	{
		player.level++, player.score = 0, player.mount = 0;
		NumSpawner();
	}
	if (player.score < POINT_LEVELUP && player.mount >= MOUNT_UPPER) //ʧ����֤
	{
		printf("�ú�ѧϰ�ɣ�\n");
		system("pause");
		exit(0);
	}
	if (player.chance >= 5) //�����֤
	{
		player.mount++, player.chance = 0;
		NumSpawner();
	}
	printf("\n\
                       �����������ڣ�ģʽ %c\n\
  ----------------------------------------------------------------\n\n\
                       ��ǰ�ɼ���%d �� %d ��\n\
                   �����Ѵ� %d �⣬�����Ѵ� %d ��\n\n\
  ----------------------------------------------------------------\n\
                            ", player.mode[0], player.level, player.score, player.mount, player.chance);
	switch (player.mode[0])
	{
	case '1':printf("%d + %d = ", a, b); break;
	case '2':printf("%d - %d = ", a, b); break;
	case '3':printf("%d x %d = ", a, b); break;
	case '4':printf("%d �� %d = ", a, b); break;
	case 'i':system("cls"); printf("Copyright (c) Penyo. All rights reserved.\n"); system("pause"); main(); break;
	default:Menu();
	}
	gets(chOrigin);
	if (atof(chOrigin) >= 0 && atof(chOrigin) <= 99 * 99)
		ch = atof(chOrigin);
	if (Calc(a, b) == ch) //�ӷֻ�������֤
	{
		player.score += POINT_SINGLE, player.mount++, player.chance = 0;
		NumSpawner();
	}
	else
	{
		player.chance++;
		Interactor(a, b);
	}
}

int Calc(int a, int b) //����ģ��
{
	switch (player.mode[0])
	{
	case '1':return a + b; break;
	case '2':return a - b; break;
	case '3':return a * b; break;
	case '4':return a / b;
	}
}