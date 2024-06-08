#include <iostream>
#include <fstream>
#include <stdio.h>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	ifstream infile("names.txt");
	char c = 0;
	string str;
	
	
	list<string> lines;
	
	while(getline(infile,str))
	{
		//cout << str << endl;
		lines.push_back(str);
	}
	
	
	
	/* infile >> c >> str >> x;
	cout << "Data Read from file \n";
	cout << c << " " << str << " " << x; */
	
	//fclose(fp);
	infile.close();
	
	lines.sort();
	
	cout << "\n-----------------------------\n";
	
	for (const auto& line : lines)
	{
		cout << line << endl;
	}
	
	return 0;
}
