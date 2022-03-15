#define _CRT_SECURE_NO_WARNINGS
/*C 형식의 구조체*/
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
	printf("이름 : %s\n나이 : %d\n직업 : %s\n", ah.name, ah.age, ah.job);
}

int main()
{
	Human h1 = { "홍길동",20,"학생" };

	showData(h1);

	return 0;
}