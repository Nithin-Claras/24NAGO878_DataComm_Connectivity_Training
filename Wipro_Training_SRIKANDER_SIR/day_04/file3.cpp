#include <iostream>
#include <cstring>
using namespace std;

class MyStack {
public:
    int* data;
    int topIndex = -1;  // In-class Member Initialization.
    int size;

    MyStack(int p_size) {
        cout << "Constructor\n";
        size = p_size;
        data = new int[p_size];
    }

    void push(int value) {
        data[++topIndex] = value;
    }

    // Copy constructor
    MyStack(const MyStack &old) {
        size = old.size;
        topIndex = old.topIndex;
        data = new int[size];
        memcpy(data, old.data, size * sizeof(int));
    }

    // Move constructor
    MyStack(MyStack &&old) {
        cout << "Move Constructor\n";
        size = old.size;
        topIndex = old.topIndex;
        data = old.data;
        old.data = nullptr;
    }

    // Destructor
    ~MyStack() {
        delete[] data;
    }
};

int main() {
    MyStack obj1(10);
    obj1.push(12);
    obj1.push(34);
    obj1.push(36);

    MyStack obj2 = move(obj1);
    // Move constructor is called when an argument is rvalue.
    // move(obj)

    return 0;
}
