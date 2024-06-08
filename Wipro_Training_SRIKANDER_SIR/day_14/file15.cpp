#include <iostream>
#include <deque>

using namespace std;

void display(deque<int> &dq)
{
	for(int i=0; i<dq.size(); i++)
	{
		cout << i << " : " << dq[i] <<" " << dq.at(i) << endl;
		cout << endl;
	}
}
int main()
{
	deque<int> dq;
	
	dq.push_back(12);
	dq.push_back(23);
	dq.push_back(45);
	dq.push_back(56);
	
	display( dq );
	
	return 0;
}
