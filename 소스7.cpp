#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	char c[100];
	int max = 0;;

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n>>";
	for (int i = 0; i < 5; i++)
	{
		cin.getline(c, 100, ';');
		cout << i + 1 << " : " << c << endl;

		if (max < strlen(c)) {
			s = c;
		}
	}
	cout << "���� �� �̸���" << c;

}