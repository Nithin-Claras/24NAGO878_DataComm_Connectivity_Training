#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inch;

public:
    // Constructor with default arguments
    Distance(int p_feet = 0, int p_inch = 0) {
        feet = p_feet;
        inch = p_inch;
    }

    // Function to print the distance
    void printDistance() {
        cout << feet << "\'" << inch << "\"" << endl;
    }

    // Overloaded + operator
    Distance operator +(const Distance &d2) {
        Distance temp;
        temp.inch = inch + d2.inch;
        temp.feet = feet + d2.feet;

        if (temp.inch >= 12) {
            temp.inch -= 12;
            temp.feet++;
        }

        return temp;
    }
};

int main() {
    Distance d1(4, 3);
    Distance d2(12, 5);

    d1.printDistance();
    d2.printDistance();

    Distance d3 = d1 + d2; // d1.operator +(d2)
    d3.printDistance();    

    return 0;
}