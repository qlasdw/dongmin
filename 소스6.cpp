#include <iostream>
using namespace std;
int main() {
	char c[100];
	while (true)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin >> c;
		cout << endl;
		if (strcmp("yes", c) == 0)
		{
			break;
		}
	}
	cout << "�����մϴ�...";
 }