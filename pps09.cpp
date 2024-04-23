#include <iostream>
using namespace std;

class employee
{
protected:
    int eno;
    string name;
    int salary;

public:
    // Virtual function for getting employee details
    virtual void get_emp()
    {
        cout << "Emp no: ";
    }

    // Virtual function for getting employee salary
    virtual void get_salary()
    {
        cout << "\n\nOutput:\n";
        cout << "Employee No: " << eno;
        cout << "\nEmployee name: " << name;
        cout << "\nSalary: " << salary;
    }

    // Friend function declaration
    friend void print_salary(employee *);

    // Virtual destructor
    virtual ~employee() {}
};

// Friend function definition
void print_salary(employee *e)
{
    e->get_salary();
}

class emp_details : public employee
{
public:
    // Override get_emp to input employee details
    void get_emp() override
    {
        cout << "Input:\n";
        cout << "Employee no: ";
        cin >> eno;
        cout << "Employee name: ";
        cin >> name;
        cout << "Salary: ";
        cin >> salary;
    }

    // Override get_salary to output employee details
    void get_salary() override
    {
        cout << "\n\nOutput:\n";
        cout << "Employee No: " << eno;
        cout << "\nEmployee name: " << name;
        cout << "\nSalary: " << salary;
    }

    // Override destructor to add custom logic
    ~emp_details() override
    {
        if (salary < 40000)
        {
            cout << "\nMinimum Pay Scale for employee is: " << 40000;
        }
        else
        {
            cout << "\nValid Pay Scale";
        }
    }
};

int main()
{
    // Using base class pointer for polymorphism
    employee *e = new emp_details();
    e->get_emp();
    print_salary(e);
    delete e;
}
