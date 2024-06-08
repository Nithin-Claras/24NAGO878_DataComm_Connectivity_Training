#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main()
{
	FILE *fp = fopen("data.txt", "w");
	ofstream outfile("names.txt");
	int x = 234;
	
	fputc('A' , fp);
	fputc(' ' , fp);
	
	fputs("Sir" , fp);
	fprintf(fp, "%d", x);
	
	outfile << 'M' << "Ma" << x << endl;
	
	fclose(fp);
	outfile.close();
	
	return 0;
}
