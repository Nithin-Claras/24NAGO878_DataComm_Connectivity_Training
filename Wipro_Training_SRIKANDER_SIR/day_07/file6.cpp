#include<iostream>
#include<list>
#include<algorithm>
#include<vector>

using namespace std;

class Integer
{
	int value;
public:
	Integer(int p_value) : value(p_value) { //cout << "Constructor \n"; 
	    
	}
	Integer(const Integer& old) {
		//cout << "Copy Constructor \n";
		value = old.value;
	}
	Integer& operator =(const Integer& rhs) {
		value = rhs.value;
		cout << "Operator = \n";
		return *this;
	}
	bool operator <(const Integer& rhs) const { return value < rhs.value; }
	bool operator ==(const Integer& rhs) const { return value == rhs.value; }
	friend ostream& operator << (ostream& out, const Integer& e);
};
ostream& operator << (ostream& out, const Integer& e)
{
	out << e.value;
	return out;
}

int main()
{
	//list<Integer> lst={12,23,34,45,55,56,78};
	vector<Integer> lst;
	int ele;
	//lst.reserve(10);
	cout << "--------------\n";
	//lst.push_back(44);
	//lst.push_front(77);
	for (int i=0; i<5; i++)
	{
		cin >> ele;
		lst.push_back(ele);
	}
	cout <<"----------------\n";
	auto it=find(lst.begin(),lst.end(),34);
	lst.insert(it,25);
	
	//it = lst.end();
	it = lst.begin();
	while(it != lst.end())
	{
		cout << *it << ' ';
		it++;
	}
	cout << endl;
}
