#include <iostream>
#include <cstring>
using namespace std;

class MyStack {
public:
    int* data;
    int topIndex = -1;  
    int size;

    MyStack(int p_size) {
        cout << "Constructor\n";
        size = p_size;
        data = new int[p_size];
    }

    void push(int value) {
        data[++topIndex] = value;
    }

    MyStack(const MyStack &old) {
        size = old.size;
        topIndex = old.topIndex;
        data = new int[size];
        memcpy(data, old.data, size * sizeof(int));
    }

    ~MyStack() {
        delete[] data;
    }
};

int main() {
    MyStack obj1(10);
    obj1.push(12);
    obj1.push(34);
    obj1.push(36);

    MyStack obj2 = obj1;
    obj2.push(45);

    return 0;
}
