#include <iostream>
using namespace std;
int main() {
	char c[100];
	while (true)
	{
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin >> c;
		cout << endl;
		if (strcmp("yes", c) == 0)
		{
			break;
		}
	}
	cout << "종료합니다...";
 }