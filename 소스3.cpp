#include <iostream>
using namespace std;

int main() {
	double i[5];
	double max = 0;
	cout << "5 개의 실수를 입력하라>>";
	for (int n = 0; n < 5; n++) {
		cin >> i[n];
		if (i[n] > max)
		{
			max = i[n];
				
		}
		
	}
	cout << "제일 큰수 = " << max;
}