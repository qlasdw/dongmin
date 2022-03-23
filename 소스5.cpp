#include <iostream>
using namespace std;

class circle {
public:
	int radius;
	circle();
	circle(int r);
	~circle();
	double getarea();
};

circle::circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

circle::circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

circle::~circle() {
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double circle::getarea() {
	return 3.14 * radius * radius;
}

int main() {
	circle donut;
	circle pizza(30);
	return 0;
}