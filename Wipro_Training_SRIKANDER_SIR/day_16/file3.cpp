#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main()
{
	FILE *fp = fopen("data.txt", "w");
	ifstream infile("names.txt");
	char c = 0;
	char str[20] = "";
	int x = 0;
	
	while(fgets(str, 20, fp) != NULL)
	{
		printf("%s", str);
	}
	
	cout << "\n------------------------\n";
	while(infile.getline(str,20))
	{
		cout << str << endl;
	}
	
	/* infile >> c >> str >> x;
	cout << "Data Read from file \n";
	cout << c << " " << str << " " << x; */
	
	fclose(fp);
	infile.close();
	
	return 0;
}
