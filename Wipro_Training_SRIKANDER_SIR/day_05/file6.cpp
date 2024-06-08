#include<iostream>
using namespace std;

class TestConst
{
	const int constDataMember = 5;
public:
	TestConst();
	TestConst(int value);
	void display();
	
};
TestConst::TestConst() : constDataMember(5)
{
}
TestConst::TestConst(int value) : constDataMember(value) // constructor initializer
{
}
void TestConst::display()
{
	cout << constDataMember << endl;
}
int main()
{
	TestConst t1;
	TestConst t2 = TestConst(6);
	TestConst t3 = TestConst(4);
	
	t1.display();
	t2.display();
	t3.display();
}
