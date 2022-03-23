#include <iostream>
using namespace std;

class coffeemachine {
public:
	int a, b, c;
	coffeemachine(int coffee, int water, int sugar);
	void drinkespresso(), dringamericano(), dringsugarcoffee(), show(), fill();
};

coffeemachine::coffeemachine(int coffee, int water, int sugar) {
	a = coffee; b = water; c = sugar;
}


void coffeemachine::dringamericano() {
	a -= 1;
	b -= 2;
}

void coffeemachine::drinkespresso() {
	a -= 1;
	b -= 1;
}

void coffeemachine::dringsugarcoffee() {
	a -= 1;
	b -= 2;
	c -= 1;
}

void coffeemachine::fill() {
	a = 10;
	b = 10;
	c = 10;
}

void coffeemachine::show() {
	cout << "커피 머신 상태, 커피:" << a << "\t물:" << b << "\t설탕:" << c << endl;
}

int main() {
	coffeemachine java(5, 10, 3);
	java.drinkespresso();
	java.show();
	java.dringamericano();
	java.show();
	java.dringsugarcoffee();
	java.show();
	java.fill();
	java.show();
}
