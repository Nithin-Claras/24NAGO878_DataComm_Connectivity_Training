#include <iostream>
#include <memory>
#include <cstring>

using namespace std;

class MyString
{
	char *ptr;
public:
	MyString(const char *str)
	{
		cout << "Constructor \n";
		ptr = new char(strlen(str) + 1);
		strcpy(ptr, str);
	}
	~MyString()
	{
		cout << "Destructor \n";
		delete [] ptr;
	}
	void display() const
	{
		cout << ptr << endl;
	}
};

int main()
{
	unique_ptr<MyString> s1 (new MyString("Nithin"));
	s1->display();
}
