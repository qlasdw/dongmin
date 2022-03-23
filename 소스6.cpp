#include <iostream>
using namespace std;
 
class tower {
public:
	int i;
	tower();
	tower(int a);
	int getheight();
};

tower::tower() {
	i = 1;
}

tower::tower(int a) {
	i = a;
}

int tower::getheight() {
	return i;
}

int main() {
	tower mytower;
	tower seoultower(100);
	cout << "높이는 " << mytower.getheight() << "미터" << endl;
	cout << "높이는 " << seoultower.getheight() << "미터" << endl;
}