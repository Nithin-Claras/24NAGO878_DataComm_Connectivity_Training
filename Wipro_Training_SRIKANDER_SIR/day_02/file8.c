#include <iostream>
#include <string>

#include <cstring>

using namespace std;

int main()
{
	string s1;
	string s2;
	cout << "Enter two names :";
	cin >> s1 >> s2;
	
	cout << ((s1 == s2) ? "Equal" : "Not Equal") << endl;
	
	cout << "Greater string is : " << (s1 > s2 ? s1 : s2) << endl;
	
	string s3 = s1 + s2;
	cout << s3 << endl;
}
