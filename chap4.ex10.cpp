#include <iostream>
using namespace std;

class person {
	string name2;
public:
	person() {}
	person(string name) { name2 = name; }
	string getname() { return name2; }
	void setname(string name) { name2 = name; }
};

class family {
	person* p;
	string familyname;
	int size2;
public:
	family(string name, int size);
	void show();
	void setname(int index, string name) { p[index].setname(name); }
	~family();
};

family::family(string name, int size) {
	p = new person[size];
	familyname = name;
	size2 = size;
}

void family::show() {
	cout << familyname << "가족은 다음과 같이 " << size2 << "명 입니다.\t" << endl;
	for (int i = 0; i < size2; i++) {
		cout << p[i].getname() << "\t";
	}
	
}

family::~family() {
	delete[]p;
}

int main() {
	family* simpson = new family("Simpson", 3);
	simpson->setname(0, "Mr. Simpson");
	simpson->setname(1, "Mrs. Simpson");
	simpson->setname(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}