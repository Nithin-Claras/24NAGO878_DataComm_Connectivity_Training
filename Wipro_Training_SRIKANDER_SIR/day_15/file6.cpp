#include <iostream>
#include <set>
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
    Employee e;
    set<Employee> set_emp;

    for(int i = 0 ; i < 2 ; i++) {
        cin >> e;               // Overloaded >>
        set_emp.insert(e);      // Overloaded <
    }

    for(auto &elem : set_emp) {
        cout << elem;           // Overloaded <<
    }

    return 0;
}


