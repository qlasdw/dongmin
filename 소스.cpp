#include <iostream>
using namespace std;
class rectangle {
public:
	int width;
	int height;
	int getarea();
};

int rectangle::getarea() {
	return width * height;
}

int main() {
	rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getarea() << endl;
}