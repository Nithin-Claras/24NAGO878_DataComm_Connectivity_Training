#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream infile("names.txt");
	char c = 0;
	string str;
	cout << "\n-------------------------\n";
	
	vector<string> lines;
	
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
	
	sort(lines.begin(), lines.end());
	
	cout << "\n-----------------------------\n";
	
	for (const auto& line : lines)
	{
		cout << line << endl;
	}
	
	return 0;
}
