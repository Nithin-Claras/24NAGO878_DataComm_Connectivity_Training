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
	//	cout << "Copy Constructor \n";
		value = old.value;
	}
	Integer& operator =(const Integer& rhs) {
		value = rhs.value;
		cout << "Operator = \n";
		return *this;
	}
	bool operator >(const Integer& rhs) const { return value > rhs.value; }
	friend ostream& operator << (ostream& out, const Integer& e);
};
ostream& operator << (ostream& out, const Integer& e)
{
	out << e.value;
	return out;
}
int main()
{	
	vector<Integer>  unsortedArray{ 21,48,34,43,8,5,9,41 };
	vector<Integer>	 sortedArray;
	sortedArray.reserve(8);
	for (Integer &key : unsortedArray)
	{
		cout << key << endl;
		auto it = find_if(begin(sortedArray), end(sortedArray),
			[&](Integer ele) { return ele > key; });
		cout << "\n------------\n";
		sortedArray.insert(it, key);
		cout << "\n***********\n";
		//for (Integer &ele : sortedArray)
		//	cout << ele << ' ';
		//cout << endl;
	}
	

}


