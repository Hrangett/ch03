#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
	char gamerID[ID_LEN];	// ������ ID
	int fuelGauge;			// �����
	int curSpeed;			// ����ӵ�
};

void ShowCarState(const Car& car)
{
	cout << "������ ID :" << car.gamerID << endl;
	cout << "���ᷮ :" << car.fuelGauge << "%" << endl;
	cout << "���� �ӵ� :" << car.curSpeed << "km/s" << endl;

}

void Accel(Car& car)
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}
}

void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}
	car.curSpeed -= BRK_STEP;
}

int main()
{
	Car run99 = { "run99",100,0 };
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	cout << "\n";
	Break(run99);
	ShowCarState(run99);
	cout << endl;
	Car sped77 = { "sped77",100,0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);

	return 0;
}