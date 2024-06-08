#include<iostream>
#include<algorithm>
using namespace std;

bool func(string a, string b)
{
	return a.length()<b.length();
}

int main()
{
	// int (*fp)(int,int) = [] (int a, int b){ return a+b; };
	auto fp = [] (int a, int b){ return a+b; };
	
	cout << fp(10,12) << endl;
	cout << fp(44,32) << endl;
	return 0;
}
