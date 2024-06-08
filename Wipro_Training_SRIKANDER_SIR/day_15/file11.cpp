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
    
    map<string, int> marks;
    
    marks["Sir"] = 34;
    marks["Mam"] = 56;
    //marks["Sir"] = 45;
    
    marks.insert(pair<string,int>("Sir", 45));
    
    for(auto ele : marks)
    	cout << ele.first << " " << ele.second << endl;
    	
    marks.erase("Sir");
    
    for(auto ele : marks)
    	cout << ele.first << " " << ele.second << endl;

    return 0;
}


