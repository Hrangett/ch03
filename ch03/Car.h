#ifndef __CAR_H__
#define __CAR_H__

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

class Car
{

private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:
	void InitMembers(char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

};
#endif // !__CAR_H__
