#include <iostream>
using namespace std;

int main() {
	char c[100];
	int count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";
	cin.getline(c, 100);

	for (int i = 0; i <= sizeof(c); i++)
	{
		if (c[i] == 'x')
		{
			count++;
		}
	}
	cout << "x�� ������" << count;
}