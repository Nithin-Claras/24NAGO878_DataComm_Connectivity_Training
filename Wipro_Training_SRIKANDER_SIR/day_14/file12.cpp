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
    shared_ptr<Integer>   ptr1 { new Integer(5) };
    shared_ptr<Integer>   ptr2 { ptr1 };
    
    if(ptr1)
        cout <<"*ptr1 =" << *ptr1 << endl;
        
    ptr1.reset();
    cout << "-------------------------- \n";
    if(ptr1)
        cout <<"*ptr1 =" << *ptr1 << endl;
    return 0;
}


