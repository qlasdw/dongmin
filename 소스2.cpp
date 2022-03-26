#include <iostream>
using namespace std;

int main() {
	int i = 0; int j = 0;
	cout << "두 수를 입력하라";
	cin >> i >> j;

	if (i > j)
	{
		cout << "큰 수 = " << i;
	}
	else {
		cout << "큰 수 = " << j;
	}
}