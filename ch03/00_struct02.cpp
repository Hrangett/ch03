#define _CRT_SECURE_NO_WARNINGS
/* C++ 형식의 구조체 */
#include <stdio.h>
#include <iostream>
using namespace std;

/*
	//아래와 같은 형태의 구조체를 CLASS라 한다.
typedef struct human
{
	char name[20];
	int age;
	char job[10];

	void showData()//구조체 변수의 맴버함수이기때문에 구조체를 받을 필요 없다
	{
		printf("이름 : %s\n나이 : %d\n직업 : %s\n", name, age, job);
	}

}Human;



int main()
{
	Human h1 = { "홍길동",20,"학생" };
	h1.showData();
	//showData(h1);

	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
/* C++ 형식의 구조체 */
#include <stdio.h>
#include <iostream>
using namespace std;

//아래와 같은 형태의 구조체를 CLASS라 한다.
class human
{
// class의 기본속성 은닉, 캡슐화.
// 외부 함수에서 접근가능하도록, class의 범위를 public으로 정의 정의하지않을 경우 private가 defult
public :	
	//속성 :: 맴버변수 private defult
	char name[20];
	int age;
	char job[10];
	
	/*
		//클래스 선언시 클래스 명과 같은 맴버함수, 즉 생성자가 자동 생성된다.
		//이는 외부함수에서 값을 전달받을 때 초기화 하는 용도로 사용된다.

		void human(char a, int b, char c)
		{
			name = name;
			age = b;
			job = c;
		}

	
	*/

	//맴버함수 :: public defult
	void showData()//구조체 변수의 맴버함수이기때문에 구조체를 받을 필요 없다
	{
		cout << "이름 : " << name << "\n" << "나이 : " << age << "\n" << "직업 : " << job << "\n" << endl;
		printf("이름 : %s\n나이 : %d\n직업 : %s\n", name, age, job);
	}

};
//객체지향 은닉 :: dhlqndptjsms zmffotmdp aksemfdjens aoaqjustndp gkaqnfh wjqrms gkf tn djqtek. rkqtqusrud qnfrk!?
//외부에서는 클래스에 만들어둔 맴버변수엔 직접 접근이 불가능하다.

int main()
{
	human h1{ "홍길동", 30, "학생" }; // 이것을 객체생성이라 한다. human type(자료형)의 class를 h1이라는 객체로 정의한다. 변수생성과 같다고 보면 됨.
	//클래스의 맴버변수엔 직접적으로 접근할 수 없다.
	h1.showData();

	return 0;
}