/******************************************************************************
 * Operator Overloading : Making the existing operators work on user-defined datatype.
 * We cannot create new operators using operator Overloading.
 * We cannot change the precedence of operators using operator Overloading.
 * We cannot change the number of operands the operator works on.
 * +, -, *,
 * ++, -- (pre/post)
*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

class Integer
{
  int value;
public:
  explicit Integer(int p_value = 0) : value(p_value) {
  }
  Integer(const Integer &obj) : value(obj.value) {
    cout <<"Copy Constructor \n";
  }
  Integer &operator =(const Integer &rhs){
    value = rhs.value;
    cout <<"Operator = \n";
    return *this;
  }
  Integer operator ++()
  {
    value = value + 1;
    return *this;
  }
  Integer operator ++(int)
  {
  	Integer temp = *this;
  	value - value + 1;
  	return temp;
  }
  friend ostream & operator <<(ostream &out, const Integer &obj);
  
};

ostream & operator <<(ostream &out, const Integer &obj)
{
	out << obj.value;
	return out;
}

int main(){
  Integer   obj1(5);
  Integer   obj2{5};
//   Integer   obj3 = 5;
  obj2 = obj1++;
  ++obj1;
  obj2++;
  
  cout << obj1 << endl;
  cout << obj2 << endl;
  return 0;
}

