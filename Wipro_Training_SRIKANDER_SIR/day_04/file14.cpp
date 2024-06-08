#include <iostream>
#include <cstring>
using namespace std;

class Integer
{
  int value;
public:
  Integer(int p_value = 0) : value(p_value) {
  }
  Integer(const Integer &obj) : value(obj.value) {
    cout <<"Copy Constructor \n";
  }
  Integer &operator =(const Integer &rhs){
    value = rhs.value;
    cout <<"Operator = \n";
    return *this;
  }
};

int main(){
    Integer arr[] = {12,32,45,65,87};
    Integer b[5];
    cout <<"----------------\n";
    //copy(arr , arr + 5, b );
    
    memcpy(b , arr , 20);

  return 0;
}

