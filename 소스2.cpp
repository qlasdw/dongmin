#include <iostream>
using namespace std;

class circle {
public:
	int radius;
	circle();
	circle(int r);
	double getarea();
};

circle::circle() : circle(1){}

circle::circle(int r)
{
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}

double circle::getarea() {
	return 3.14 * radius * radius;
}

int main() {
	circle donut;
	double area = donut.getarea();
	cout << "donut ������ " << area << endl;

	circle pizza(30);
	area = pizza.getarea();
	cout << "pizza ������ " << area << endl;
}