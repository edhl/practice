//pointer variable referencing different variables

#include <iostream>
using namespace std;

int main() {

	int x = 25, y =50, z = 75;
	int* ptr;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	//manipulate variables using pointer
	ptr = &x;
	*ptr += 100;
	
	ptr = &y;
	*ptr += 100;
	
	ptr = &z;
	*ptr += 100;
	
	cout << "Modified variable values...\n";
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	

return 0;
}
