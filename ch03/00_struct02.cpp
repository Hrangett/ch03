#define _CRT_SECURE_NO_WARNINGS
/* C++ ������ ����ü */
#include <stdio.h>
#include <iostream>
using namespace std;

/*
	//�Ʒ��� ���� ������ ����ü�� CLASS�� �Ѵ�.
typedef struct human
{
	char name[20];
	int age;
	char job[10];

	void showData()//����ü ������ �ɹ��Լ��̱⶧���� ����ü�� ���� �ʿ� ����
	{
		printf("�̸� : %s\n���� : %d\n���� : %s\n", name, age, job);
	}

}Human;



int main()
{
	Human h1 = { "ȫ�浿",20,"�л�" };
	h1.showData();
	//showData(h1);

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
/* C++ ������ ����ü */
#include <stdio.h>
#include <iostream>
using namespace std;

//�Ʒ��� ���� ������ ����ü�� CLASS�� �Ѵ�.
class human
{
// class�� �⺻�Ӽ� ����, ĸ��ȭ.
// �ܺ� �Լ����� ���ٰ����ϵ���, class�� ������ public���� ���� ������������ ��� private�� defult
public :	
	//�Ӽ� :: �ɹ����� private defult
	char name[20];
	int age;
	char job[10];
	
	/*
		//Ŭ���� ����� Ŭ���� ��� ���� �ɹ��Լ�, �� �����ڰ� �ڵ� �����ȴ�.
		//�̴� �ܺ��Լ����� ���� ���޹��� �� �ʱ�ȭ �ϴ� �뵵�� ���ȴ�.

		void human(char a, int b, char c)
		{
			name = name;
			age = b;
			job = c;
		}

	
	*/

	//�ɹ��Լ� :: public defult
	void showData()//����ü ������ �ɹ��Լ��̱⶧���� ����ü�� ���� �ʿ� ����
	{
		cout << "�̸� : " << name << "\n" << "���� : " << age << "\n" << "���� : " << job << "\n" << endl;
		printf("�̸� : %s\n���� : %d\n���� : %s\n", name, age, job);
	}

};
//��ü���� ���� :: dhlqndptjsms zmffotmdp aksemfdjens aoaqjustndp gkaqnfh wjqrms gkf tn djqtek. rkqtqusrud qnfrk!?
//�ܺο����� Ŭ������ ������ �ɹ������� ���� ������ �Ұ����ϴ�.

int main()
{
	human h1{ "ȫ�浿", 30, "�л�" }; // �̰��� ��ü�����̶� �Ѵ�. human type(�ڷ���)�� class�� h1�̶�� ��ü�� �����Ѵ�. ���������� ���ٰ� ���� ��.
	//Ŭ������ �ɹ������� ���������� ������ �� ����.
	h1.showData();

	return 0;
}