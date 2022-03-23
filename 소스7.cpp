#include <iostream>
using namespace std;

class account {
public:
	string name;
	int a, b;
	account(string name, int i, int i2);
	int deposit(int money);
	int withdraw(int money);
	int in();
	string getowner();
};

account::account(string name2, int i, int i2) {
	name = name;
	a = i;
	b = i2;
}

int account::deposit(int money) {
	b += money;
	return b;
}

int account::withdraw(int money) {
	b -= money;
	return b;
}

int account::in() {
	return b;
}

string account::getowner() {
	return name;
}


int main() {
	account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.in() << endl;
	int money = a.withdraw(20000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.in() << endl;
}

