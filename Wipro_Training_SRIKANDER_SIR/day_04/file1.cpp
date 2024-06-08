#include <iostream>
using namespace std;
class Shallow {
public:
    int* data;
    Shallow(int value) {
      cout << "Constructor \n";
      data = new int(value);
    }
    Shallow(const Shallow &old)
    {
    	data = new int(*old.data);
    }
    // Default copy constructor and assignment operator will perform shallow copy
    ~Shallow() {
        // delete data;
    }
};

int main()
{
    Shallow obj1(10);
    Shallow obj2 = obj1;  // Shallow copy
}
