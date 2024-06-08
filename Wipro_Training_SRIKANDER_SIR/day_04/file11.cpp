#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
	char *str;
public:
	MyString( )
	{
		str = nullptr;	
	}
	MyString(const char *p_str)
	{
		int len = strlen(p_str);
		str = new char[len+1];
		strcpy(str, p_str);
	}
	
	MyString(const MyString &other)
	{
		int len = strlen(other.str);
		str = new char[len + 1];
		strcpy(str, other.str);
	}
	char *get_str()
	{
		return str;
	}
	~MyString()
	{
		delete[] str;
	}
	MyString & operator=(const MyString &other) 
	{
		if (this == &other)
		{
			return *this;
		}
		
		delete[] str;
		
		int len = strlen(other.str);
		str = new char[len + 1];
		strcpy(str, other.str);
		
		return *this;
	}
};

ostream &operator <<(ostream &out,MyString &s)
{
	out << s.get_str();
	return out;
}

int main()
{
	MyString s1 = "Arsh";
	MyString s2 = s1;
	
	cout << s1<<" " << s2 << endl;
	
	s2 = s1;
	
	return 0;
}
