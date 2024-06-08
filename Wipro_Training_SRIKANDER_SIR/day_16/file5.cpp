#include <iostream>
#include <fstream>
#include <stdio.h>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	ifstream infile("names.txt");
	char c = 0;
	string str;
	
	set<string> sortedNames;
	
	while(getline(infile,str))
	{
		cout << str << endl;
		sortedNames.insert(str);
	}
	
	cout << "\n-------------------------\n";
	
	/* infile >> c >> str >> x;
	cout << "Data Read from file \n";
	cout << c << " " << str << " " << x; */
	
	//fclose(fp);
	infile.close();
	
	
	cout << "\n-----------------------------\n";
	
	for (const auto& line : sortedNames)
	{
		cout << line << endl;
	}
	
	return 0;
}
