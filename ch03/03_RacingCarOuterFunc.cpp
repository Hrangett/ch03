#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPE = 200,
		FUEL_STEP = 10,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];	// ������ ID
	int fuelGauge;			// �����
	int curSpeed;			// ����ӵ�

	void ShowCarState();
	void Accel();
	void Break();

};

void Car::ShowCarState()
{
	cout << "������ ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << "%s" << endl;
	cout << "����ӵ� : " << curSpeed << "km/s" << endl << endl;

}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPE)
	{
		curSpeed = CAR_CONST::MAX_SPE;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
}