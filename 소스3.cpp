#include <iostream>
using namespace std;

int main() {
	double i[5];
	double max = 0;
	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int n = 0; n < 5; n++) {
		cin >> i[n];
		if (i[n] > max)
		{
			max = i[n];
				
		}
		
	}
	cout << "���� ū�� = " << max;
}