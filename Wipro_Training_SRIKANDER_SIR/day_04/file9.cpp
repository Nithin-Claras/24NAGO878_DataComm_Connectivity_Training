#include <iostream>
#include <algorithm>
using namespace std;

class Distance {
public:
    int feet;
    int inch;

    Distance(int p_feet = 0, int p_inch = 0) {
        feet = p_feet;
        inch = p_inch;
    }

    void printDistance() const {
        cout << feet << "\'" << inch << "\"" << endl;
    }

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
    friend ostream & operator <<(ostream &out, const Distance &d);
    friend bool operator <(const Distance &d1, const Distance &d2);
    friend istream & operator >>(istream &in,Distance &d);
};

bool operator <(const Distance &d1, const Distance &d2)
{
	return (d1.feet * 12 + d1.inch) < (d2.feet * 12 + d2.inch);
}

ostream & operator <<(ostream &out, const Distance &d)
{
	out << d.feet <<"\'"<<d.inch<<"\'"<<endl;
	return out;
}

istream & operator >>(istream &in,Distance &d)
{
	in >> d.feet >> d.inch;
	return in;
}
    
/* void operator <<(ostream &out, const Distance &d)
{
    	cout << d.feet <<"\'" <<d.inch<<"\'"<<endl;
} */

int main() {
    Distance arr[] = {
    	Distance{34,5},
    	Distance{7},
    	Distance{3,7}
    };
    
    sort(begin(arr), end(arr));
    for (const auto &d : arr) {
    	d.printDistance();
    }
    auto ptr = max_element(begin(arr), end(arr));
    
    ptr->printDistance();
    return 0;
}
