#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	char c[100];
	int max = 0;;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n>>";
	for (int i = 0; i < 5; i++)
	{
		cin.getline(c, 100, ';');
		cout << i + 1 << " : " << c << endl;

		if (max < strlen(c)) {
			s = c;
		}
	}
	cout << "가장 긴 이름은" << c;

}