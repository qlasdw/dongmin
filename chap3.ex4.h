#pragma once
class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int Coffee, int Water, int Sugar);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugerCoffee();
	void show();
	void fill();
};