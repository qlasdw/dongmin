#include <iostream>
#include<string>
using namespace std;

class Person{
	string name;
	int size;
public:
	Person(){};
	Person(string name) { this->name = name; }
	string getName() { return name; }
	
};

class Family{
	Person *p;
	int size;
	string f;
public:
	Family(string name, int size){ this->size = size; p = new Person[size]; }
	void show(){ cout  <<  "Simpson가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++){
		cout << p[i].getName() << "\t";
	}
	}
	void setName(int size, string name){ Person a(name); p[size] = a; }
	~Family() { delete[]p; }
};


int main(){
	Family *simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart. Simpson");
	simpson->show();
	delete simpson;
}