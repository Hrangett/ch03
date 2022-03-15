#include <iostream>
using namespace std;

class FruitSeller
{
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;

	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult()
	{
		cout << "���� ��� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
public:
	void InitMenbers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
private:
	int myMoney;
	int numOfApples;
public:
	void BuyApples(FruitSeller& seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;

	}

	void ShowByuResult()
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numOfApples << endl << endl;
	}

};

int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMenbers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowByuResult();

	return 0;
}