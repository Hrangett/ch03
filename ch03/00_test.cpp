#define _CRT_SECURE_NO_WARNINGS
/*C ������ ����ü*/
#include <iostream>
using namespace std;

#include <stdio.h>

typedef struct human
{
	char name[20];
	int age;
	char job[10];
}Human;

void showData(Human ah)
{
	printf("�̸� : %s\n���� : %d\n���� : %s\n", ah.name, ah.age, ah.job);
}

int main()
{
	Human h1 = { "ȫ�浿",20,"�л�" };

	showData(h1);

	return 0;
}