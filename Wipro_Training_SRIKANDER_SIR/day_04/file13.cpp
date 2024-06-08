#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
  	char	*str;
public :
    MyString( )
    {
        str = nullptr;
    }
    MyString(const char *p_str)
    {
        int len = strlen(p_str);
        str = new char[len + 1];
        strcpy(str , p_str);
    }
    ~MyString() { 
        cout <<"Destructor " << this << endl;
        if(str != nullptr){
            cout << "Releasing Memory \n";
            delete [] str;
        }
        else
            cout <<"pointer was null \n";
    }
    MyString(const MyString &old)
    {
        int len = strlen(old.str);
        str = new char[len + 1];
        strcpy(str , old.str);
    }
    char *get_str(){ return str; }
    MyString & operator=(const MyString &old)
    {
        cout <<"Operator = \n";
        if(this != &old)
        {
            this->~MyString();            
            int len = strlen(old.str);
            cout <<"Copying from old to new \n";
            str = new char[len + 1];
            strcpy(str , old.str);
        }
        return *this;
    }
    MyString & operator=( MyString &&old)
    {
        cout <<"Move Operator = \n";
        this->~MyString();            
        str = old.str;
        old.str = nullptr;
        return *this;
    }
    MyString operator +(const MyString &rhs) const
    {
        cout <<"Operator + \n";
        MyString temp;
        cout <<"&temp = " << &temp << endl;
        int len = strlen(str) + strlen(rhs.str);
        temp.str = new char[len + 1];
        strcpy(temp.str , str);
        strcat(temp.str, rhs.str);
        return temp;
    }
};
ostream &operator <<(ostream &out,MyString &s)
{
    out << s.get_str();
    return out;
}
int main(){
  MyString	s1 = "Abhishek ";
  MyString  s2 = "Sharma";
  MyString s3;
  s3 = s1 + s2; 
  cout << "End of Program \n";
  return 0;
}

