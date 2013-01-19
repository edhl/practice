//storing address of variable into a pointer

#include <iostream>
using namespace std;

int main() {

	int x = 25;
	int* ptr;
	
	ptr = &x;
	cout << "The value in x i " << x << endl;
	cout << "The address of x is " << ptr << endl;

return 0;
}
