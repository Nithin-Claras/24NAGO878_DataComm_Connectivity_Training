#include <iostream>
#include <fstream>
#include <stdio.h>
#include <list>
#include <algorithm>

using namespace std;

void readNameFromFile(ifstream& infile, list<string>& names)
{
	string str;
	while (getline(infile,str))
	{
		names.push_back(str);
	}
}

int main()
{
	ifstream f1("names.txt");
	ifstream f2("names2.txt");
	
	string str;
	
	list<string> lst1;
	list<string> lst2;
	
	readNameFromFile(f1, lst1);
	readNameFromFile(f2, lst2);
	
	lst1.sort();
	lst2.sort();
	
	lst1.merge(lst2);
	cout << "\n -------------------------- \n";
	
	for (const auto& ele : lst1)
	{
		cout << ele << endl;
	}
	
	f1.close();
	f2.close();
	
	return 0;
}
