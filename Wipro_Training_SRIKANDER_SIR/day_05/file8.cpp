#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	stack<int>	s;
	cout << "Size of Stack  : " << s.size() << endl;
	cout << "Is Stack Empty : " << s.empty() << endl;

	s.push(34);
	s.push(78);
	s.emplace(56);
	cout << endl << "After inserting some elements " << endl;
	cout << "Size of Stack  : " << s.size() << endl;
	cout << "Is Stack Empty : " << s.empty() << endl;
	
	//s.pop();
	cout << endl << "After Removing elements " << endl;
	cout << "Size of Stack  : " << s.size() << endl;
	cout << "Is Stack Empty : " << s.empty() << endl;

	cout << "The top element of Stack : " << s.top() << endl;
	
	queue<int>  q;

	q.push(12);
	q.push(23);
	q.push(45);

	cout << q.size() << endl;
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
}

