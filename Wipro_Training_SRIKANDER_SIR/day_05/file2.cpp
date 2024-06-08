/******************************************************************************
 * Operator Overloading : Making the existing operators work on user-defined datatype.
 * We cannot create new operators using operator Overloading.
 * We cannot change the precedence of operators using operator Overloading.
 * We cannot change the number of operands the operator works on.
 * Effective C++, More Effective C++ : Scott Meyers
 * +, -, *,
 * ++, -- (pre/post)
 * Relational Operators are the most widely overloaded operators.
 * , , &, &&, ||, ! can be overloaded, but should not be overloaded.
 * Operators which can be overloaded only as member functions : =, [],(), -> 
 * Operators which cant be overloaded .,::, sizeof, ?:, .*, typeid, casting operators.
 * [] overloaded in vector, string, map 
 * * (dereferencing) ,->, ++, -- overloaded in iterators
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
  // Integer &operator =(const Integer &rhs) = delete;
  Integer  operator ++()
  {
    value = value + 1;
    return *this;
  }
  Integer  operator ++(int)
  {
    Integer temp = *this;
    value = value + 1;
    return temp;
  }
  friend ostream & operator <<(ostream &out,const Integer &obj);
//   Integer(const Integer &obj) = delete;
      
};

ostream & operator <<(ostream &out,const Integer &obj)
{
    out << obj.value ;
    return out;
}
int main(){
  Integer   obj1(5);
  Integer   obj2 = obj1;
//   Integer   obj3 = 5;
  obj2 = obj1++;
  cout << obj1 << endl;     //  
  cout << obj2 << endl;     //
  return 0;
}

