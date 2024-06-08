#include <iostream>
#include <algorithm>
using namespace std;

class Distance {
    int feet;
    int inch;

public:
    Distance(int p_feet = 0, int p_inch = 0) {
        feet = p_feet;
        inch = p_inch;
    }

    void printDistance() const {
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

    // Overloaded - operator
    Distance operator -(const Distance &d2) {
        Distance temp;
        temp.feet = feet - d2.feet;
        temp.inch = inch - d2.inch;

        if (temp.inch < 0) {
            temp.inch += 12;
            temp.feet--;
        }

        if (temp.feet < 0) {
            temp.feet = 0;
            temp.inch = 0;
        }

        return temp;
    }
    
    bool operator <(const Distance &d) const
    {
    	return (feet * 12 + inch) < (d.feet * 12 + d.inch);
    }
};

int main() {
    Distance arr[] = {
    	Distance(34,5),
    	Distance(4,56),
    	Distance(3,7)
    };
    
    sort(begin(arr), end(arr));
    for (const auto &d : arr) {
    	d.printDistance();
    }
    auto ptr = max_element(begin(arr), end(arr));
    
    ptr->printDistance();
    return 0;
}
