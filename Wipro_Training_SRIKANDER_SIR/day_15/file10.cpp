#include <iostream>
#include <map>
#include <string>

using namespace std;

class Employee {
    friend ostream& operator<<(ostream& os, const Employee& emp); 
    friend istream& operator>>(istream& is, Employee& emp);      

public:
    int empid;
    string name;
    int salary;

    bool operator<(const Employee& other) const {
        return empid < other.empid;
    }

    bool operator==(const Employee& other) const {
        return empid == other.empid;
    }
};

ostream& operator<<(ostream& os, const Employee& emp) {
    os << "Employee ID: " << emp.empid << ", Name: " << emp.name << ", Salary: " << emp.salary << endl;
    return os;
}

istream& operator>>(istream& is, Employee& emp) {
    cout << "Enter Employee ID: ";
    is >> emp.empid;
    cout << "Enter Name: ";
    is >> emp.name;
    cout << "Enter Salary: ";
    is >> emp.salary;
    return is;
}

int main() {
    /* int e;
    map<string, int> map_marks;
    
    map_marks.insert(pair<string,int>("Abhishek", 45));
    map_marks["Jai"] = 43;

    for(auto &ele : map_marks) {
        cout << ele.first << " " << ele.second << endl;           
    } */
    
    map<char, int> freq;
    string str = "INDIA";
    
    for(char c : str)
    {
    	freq[c] = freq[c] + 1;
    }
    
    for(auto &ele : freq)
    {
    	cout << ele.first << " " << ele.second << endl;
    }

    return 0;
}


