#include <iostream>
using namespace std;

class color {
	int red, green, blue;
public:
	color() { red = green = blue = 0; }
	color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setcolor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main() {
	color screencolor(255, 0, 0);
	color* p;
	p = &screencolor;
	p->show();
	color colors[3];
	p = colors;
	p[0] = { 255, 0 ,0 };
	p[1] = { 0, 255, 0 };
	p[2] = { 0, 0, 255 };

	for (int i = 0; i < 3; i++) {
		colors[i].show();
	}
}