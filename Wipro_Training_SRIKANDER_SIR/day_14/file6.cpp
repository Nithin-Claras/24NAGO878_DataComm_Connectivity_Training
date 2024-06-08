#include <iostream>
#include <memory>

using namespace std;

int main()
{
	//auto_ptr<int> ptr (new int(5));
	unique_ptr<int> ptr1 (new int(5)); // Memory deallocated automatically
	int *ptr = new int(5);
	
	//unique_ptr<int> ptr2;
	
	//ptr2 = ptr1; // More than one pointer can not point
	// transfer the ownership
	//ptr2 = move(ptr1); 
	cout << *ptr << endl;
	
	return 0;
}
