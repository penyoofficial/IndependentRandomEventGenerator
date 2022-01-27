//Copyright (c) Penyo. All rights reserved. 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char userInput[64];
void Event1Interaction(), Event2Interaction(), Event3Interaction(), Event4Interaction(), Event5Interaction();

void Menu(int state)
{
	if (state)
		system("cls");
	printf("��������Ҫ�����¼�����ţ�Ȼ�󰴻س�����\n1. ��Ӳ��\n2. ��ɫ��\n3. ���˿���\n4. ����˫ɫ�����\n5. �������֤����\n");
	gets(userInput);
	switch (userInput[0])
	{
	case '1':Event1Interaction();
	case '2':Event2Interaction();
	case '3':Event3Interaction();
	case '4':Event4Interaction();
	case '5':Event5Interaction();
	case 'i':system("cls"); printf("Copyright (c) Penyo. All rights reserved.\n"); system("pause"); Menu(1);
	default: system("cls"); printf("�Ƿ�������\n"); system("pause"); Menu(1);
	}
}

int main()
{
	system("cls");
	printf("��ӭʹ�ö�������¼���������\n");
	Menu(0);
}

void Seed()
{
	static long long fakeStd = -65536, fakeI = 1;
	switch (fakeStd % 3)
	{
	case 0:srand(fakeStd++ + 133 * fakeI++); break;
	case 1:case -1:srand(fakeStd++ + 266 * fakeI++); break;
	case 2:case -2:srand(fakeStd++ + 400 * fakeI++);
	}
}

void Event1()
{
	Seed();
	switch (rand() % 2)
	{
	case 0:printf("����"); break;
	case 1:printf("����");
	}
	printf("\t");
}

void Event1Interaction()
{
	system("cls");
	printf("��������Ҫ�׵�ö����Ȼ���ٰ��س���\n");
	gets(userInput);
	if (atoi(userInput) > 0 && atoi(userInput) < 65536)
		printf("�����\n");
	else
	{
		system("cls");
		printf("�Ƿ�������\n");
		system("pause");
		Event1Interaction();
	}
	for (int i = 0; i < atoi(userInput); i++)
		Event1();
	printf("\n\n�Ƿ�Ҫ�ٴν��и��������Y�����س�����\n����Ҫ���������棬ֱ�Ӱ��س������ɡ�\n");
	gets(userInput);
	switch (userInput[0])
	{
	case 'Y':case 'y':Event1Interaction();
	default:Menu(1);
	}
}

void Event2()
{
	Seed();
	switch (rand() % 6 + 1)
	{
	case 1:printf("һ��"); break;
	case 2:printf("����"); break;
	case 3:printf("����"); break;
	case 4:printf("�ĵ�"); break;
	case 5:printf("���"); break;
	case 6:printf("����");
	}
	printf("\t");
}

void Event2Interaction()
{
	system("cls");
	printf("��������Ҫ����������Ȼ���ٰ��س���\n");
	gets(userInput);
	if (atoi(userInput) > 0 && atoi(userInput) < 65536)
		printf("�����\n");
	else
	{
		system("cls");
		printf("�Ƿ�������\n");
		system("pause");
		Event2Interaction();
	}
	for (int i = 0; i < atoi(userInput); i++)
		Event2();
	printf("\n\n�Ƿ�Ҫ�ٴν��и��������Y�����س�����\n����Ҫ���������棬ֱ�Ӱ��س������ɡ�\n");
	gets(userInput);
	switch (userInput[0])
	{
	case 'Y':case 'y':Event2Interaction();
	default:Menu(1);
	}
}

void Event3()
{
	Seed();
	int cardSuitCode = rand() % 4 + 1, cardPowerCode = rand() % 15 + 1;
	char cardSuit[5], cardPower[5];
	switch (cardSuitCode)
	{
	case 1:strcpy(cardSuit, "����"); break;
	case 2:strcpy(cardSuit, "����"); break;
	case 3:strcpy(cardSuit, "÷��"); break;
	case 4:strcpy(cardSuit, "����");
	}
	switch (cardPowerCode)
	{
	case 1:strcpy(cardPower, "A"); break;
	case 2:strcpy(cardPower, "2"); break;
	case 3:strcpy(cardPower, "3"); break;
	case 4:strcpy(cardPower, "4"); break;
	case 5:strcpy(cardPower, "5"); break;
	case 6:strcpy(cardPower, "6"); break;
	case 7:strcpy(cardPower, "7"); break;
	case 8:strcpy(cardPower, "8"); break;
	case 9:strcpy(cardPower, "9"); break;
	case 10:strcpy(cardPower, "10"); break;
	case 11:strcpy(cardPower, "J"); break;
	case 12:strcpy(cardPower, "Q"); break;
	case 13:strcpy(cardPower, "K"); break;
	case 14:strcpy(cardPower, "С��"); break;
	case 15:strcpy(cardPower, "����");
	}
	if (cardPowerCode < 14)
		printf("%s%s\t", cardSuit, cardPower);
	else
		printf("%s\t", cardPower);
}

void Event3Interaction()
{
	system("cls");
	printf("��������Ҫ���������Ȼ���ٰ��س���\n");
	gets(userInput);
	if (atoi(userInput) > 0 && atoi(userInput) < 65536)
		printf("�����\n");
	else
	{
		system("cls");
		printf("�Ƿ�������\n");
		system("pause");
		Event3Interaction();
	}
	for (int i = 0; i < atoi(userInput); i++)
		Event3();
	printf("\n\n�Ƿ�Ҫ�ٴν��и��������Y�����س�����\n����Ҫ���������棬ֱ�Ӱ��س������ɡ�\n");
	gets(userInput);
	switch (userInput[0])
	{
	case 'Y':case 'y':Event3Interaction();
	default:Menu(1);
	}
}

void Event4()
{
	Seed();
	printf("%02d - %02d - %02d - %02d - %02d - %02d | %02d\n",
		rand() % 33 + 1, rand() % 33 + 1, rand() % 33 + 1, rand() % 33 + 1, rand() % 33 + 1, rand() % 33 + 1,
		rand() % 16 + 1);
}

void Event4Interaction()
{
	system("cls");
	printf("��������Ҫ���ɵĸ�����Ȼ���ٰ��س���\n");
	gets(userInput);
	if (atoi(userInput) > 0 && atoi(userInput) < 65536)
		printf("�����\n");
	else
	{
		system("cls");
		printf("�Ƿ�������\n");
		system("pause");
		Event4Interaction();
	}
	for (int i = 0; i < atoi(userInput); i++)
		Event4();
	printf("\n�Ƿ�Ҫ�ٴν��и��������Y�����س�����\n����Ҫ���������棬ֱ�Ӱ��س������ɡ�\n");
	gets(userInput);
	switch (userInput[0])
	{
	case 'Y':case 'y':Event4Interaction();
	default:Menu(1);
	}
}

int ifleapyear(int year)
{
	if (!(year % 400))
		return 1;
	else
	{
		if (!(year % 100))
			return 0;
		else
		{
			if (!(year % 4))
				return 1;
			else
				return 0;
		}
	}
}

void Event5() //���ھ����ԣ�
{
	Seed();
	int bit1 = rand() % 6 + 1; //��һλ������
	int bit2; //�ڶ�λ��ʡ
	switch (bit1)
	{
	case 1:bit2 = rand() % 5 + 1; break;
	case 2:bit2 = rand() % 3 + 1; break;
	case 3:bit2 = rand() % 7 + 1; break;
	case 4:bit2 = rand() % 6 + 1; break;
	case 5:bit2 = rand() % 5 + 0; break;
	case 6:bit2 = rand() % 5 + 1; break;
		//case 7:bit2 = rand() % 1 + 1; break;
		//case 8:bit2 = rand() % 2 + 1;
	}
	int bit7_10 = rand() % 120 + 1900; //����λ����ʮλ��������
	int bit7 = bit7_10 / 1000;
	int bit8 = (bit7_10 - bit7_10 / 1000 * 1000) / 100;
	int bit9 = (bit7_10 - bit7 * 1000 - bit8 * 100) / 10;
	int bit10 = bit7_10 - bit7 * 1000 - bit8 * 100 - bit9 * 10;
	int bit11_12 = rand() % 12 + 1; //��ʮһλ����ʮ��λ��������
	int bit11 = bit11_12 / 10;
	int bit12 = bit11_12 - bit11 * 10;
	int bit13_14; //��ʮ��λ����ʮ��λ��������
	if (ifleapyear(bit7_10))
		bit13_14 = rand() % 29 + 1;
	else
		bit13_14 = rand() % 28 + 1;
	switch (bit11_12)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		bit13_14 = rand() % 31 + 1; break;
	case 4:case 6:case 9:case 11:
		bit13_14 = rand() % 30 + 1;
	}
	int bit13 = bit13_14 / 10;
	int bit14 = bit13_14 - bit13 * 10;
	int bit17 = rand() % 9 + 1; //��ʮ��λ��˳���루����żŮ��
	int bitArr[17] = { bit1,bit2,0,1,0,1,bit7,bit8,bit9,bit10,bit11,bit12,bit13,bit14,0,0,bit17 }; //��ʮ��λ��У����
	int checkArr[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 }, sum = 0; //checkArr��λȨֵ���飬sum���ܺ�
	for (int i = 0; i < 17; i++) //ǰ17λ��λȨֵ���
		sum += checkArr[i] * bitArr[i];
	char bit18;
	switch (sum % 11)
	{
	case 0:bit18 = '1'; break;
	case 1:bit18 = '0'; break;
	case 2:bit18 = 'X'; break;
	case 3:bit18 = '9'; break;
	case 4:bit18 = '8'; break;
	case 5:bit18 = '7'; break;
	case 6:bit18 = '6'; break;
	case 7:bit18 = '5'; break;
	case 8:bit18 = '4'; break;
	case 9:bit18 = '3'; break;
	case 10:bit18 = '2';
	}
	printf("%d%d0101%04d%02d%02d00%d%c\n", bit1, bit2, bit7_10, bit11_12, bit13_14, bit17, bit18);
}

void Event5Interaction()
{
	system("cls");
	printf("���棺��������߲�Ϊ�û�ʹ�������ɵ��κκ������ʹ������Ϊ��֪����ͬ���Э�顣\n��������Ҫ���ɵĸ�����Ȼ�󰴻س���\n");
	gets(userInput);
	if (atoi(userInput) > 0 && atoi(userInput) < 65536)
		printf("�����\n");
	else
	{
		system("cls");
		printf("�Ƿ�������\n");
		system("pause");
		Event5Interaction();
	}
	for (int i = 0; i < atoi(userInput); i++)
		Event5();
	printf("\n�Ƿ�Ҫ�ٴν��и��������Y�����س�����\n����Ҫ���������棬ֱ�Ӱ��س������ɡ�\n");
	gets(userInput);
	switch (userInput[0])
	{
	case 'Y':case 'y':Event5Interaction();
	default:Menu(1);
	}
}