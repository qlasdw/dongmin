#include <iostream>

using namespace std;

#include "chap3.ex4.h"

CoffeeMachine::CoffeeMachine(int Coffee, int Water, int Sugar)
{
	coffee = Coffee;
	water = Water;
	sugar = Sugar;
}
void CoffeeMachine::drinkEspresso()
{
	coffee = coffee - 1;
	water = water - 1;
}
void CoffeeMachine::drinkAmericano()
{
	coffee = coffee - 1;
	water = water - 2;
}
void CoffeeMachine::drinkSugerCoffee()
{
	coffee = coffee - 1;
	water = water - 2;
	sugar = sugar - 1;
}
void CoffeeMachine::show()
{
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << "\t��:" << water << "\t����:" << sugar << endl;
}
void CoffeeMachine::fill()
{
	coffee = 10;
	water = 10;
	sugar = 10;
}
