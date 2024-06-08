#include <iostream>
#include <memory>
#include <vector>
using namespace std;
class Integer
{
    int num;
    public : 
        Integer(int p_num = 0) : num(p_num)
        {
            cout << "Constructor \n";
        }
        Integer(const Integer &old) : num(old.num)
        {
            cout << "Copy Constructor \n";
        }
        Integer(Integer &&rhs){
            cout <<"Move Constructor \n";
            num = rhs.num;
        }
        Integer & operator = (Integer &&rhs){
            cout <<"Move Assignment \n";
            num = rhs.num;
            return *this;
        }
        ~Integer()
        {
            cout << "Destructor \n";
        }
    friend istream& operator >>(istream& in, Integer& obj);
    friend ostream& operator <<(ostream& out, const Integer& obj);
};
istream& operator >>(istream& in, Integer& obj)
{
    cin >> obj.num;
    return in;
}
ostream& operator <<(ostream& out, const Integer& obj)
{
    cout << obj.num;
    return out;
}
int main()
{
    unique_ptr<Integer>   ptr1 { new Integer(5) };
    unique_ptr<Integer>   ptr2 { move(ptr1) }; // copy constructor is deleted (not available)
    // unique_ptr<Integer>   ptr2;
    
    //ptr2 = ptr1;    // operator = is deleted.
    
    // ptr2 = move(ptr1);  // move assignment operator.
    if(ptr1)
        cout <<"*ptr1 =" << *ptr1 << endl;
        
    // if(ptr2)
    //     cout <<"*ptr2 =" << *ptr2 << endl;
    return 0;
}


