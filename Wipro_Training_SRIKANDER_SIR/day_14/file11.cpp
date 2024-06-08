#include <iostream>
#include <memory>

using namespace std;

int main()
{
	auto p1 (make_unique<int>(5));
	cout << *p1 << endl;
	cout << typeid(p1).name() << endl;
}
