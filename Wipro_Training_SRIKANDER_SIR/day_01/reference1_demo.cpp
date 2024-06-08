//demo for modify the value of object through ref
#include <iostream>
using namespace std;
int main(){
	int x = 5;
	int &refx = x;
	
	cout << x <<" " << refx <<endl;
	
	refx = 10;
	cout << x <<" " << refx <<endl;
	
	x = 20;
	cout << x <<" " << refx <<endl;
}
