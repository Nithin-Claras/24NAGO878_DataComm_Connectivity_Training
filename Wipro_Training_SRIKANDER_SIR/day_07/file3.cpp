#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
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
	vector<Integer>  unsorted{ 21,48,34,3, 12, 23,45,43,21};
    vector<Integer>  sorted;
    
    while(unsorted.empty() == false){
        auto it = min_element(begin(unsorted), end(unsorted));
        sorted.push_back(*it);
        unsorted.erase(it);
        cout <<"-----------------\n";
    }
    for(auto ele : sorted)
        cout << ele <<' ';
    
}





