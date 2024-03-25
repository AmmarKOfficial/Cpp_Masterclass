#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string name, int id, double salary) : name(name), id(id), salary(salary) {}

    int getId() const { return id; }

    virtual void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }

    virtual double calculatePay() const = 0;
};

class FullTimeEmployee : public Employee {
    double bonus;

public:
    FullTimeEmployee(string name, int id, double salary, double bonus)
        : Employee(name, id, salary), bonus(bonus) {}

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Bonus: $" << bonus << endl;
    }

    double calculatePay() const override {
        return salary + bonus;
    }
};

class PartTimeEmployee : public Employee {
    int hoursWorked;
    double hourlyRate;

public:
    PartTimeEmployee(string name, int id, double salary, int hoursWorked, double hourlyRate)
        : Employee(name, id, salary), hoursWorked(hoursWorked), hourlyRate(hourlyRate) {}

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Hourly Rate: $" << hourlyRate << endl;
    }

    double calculatePay() const override {
        return hoursWorked * hourlyRate;
    }
};

int main() {
    vector<Employee*> employees;
    int choice;

    do {
        cout << "Employee Management System" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Delete Employee" << endl;
        cout << "3. Update Employee" << endl;
        cout << "4. Display All Employees" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                // Add Employee
                string name;
                int id, hoursWorked;
                double salary, bonus, hourlyRate;

                cout << "Enter employee name: ";
                cin >> name;
                cout << "Enter employee ID: ";
                cin >> id;
                cout << "Enter employee salary: ";
                cin >> salary;
                cout << "Is the employee full-time? (1 for Yes, 0 for No): ";
                int fullTime;
                cin >> fullTime;
                if (fullTime) {
                    cout << "Enter bonus: ";
                    cin >> bonus;
                    employees.push_back(new FullTimeEmployee(name, id, salary, bonus));
                } else {
                    cout << "Enter hours worked: ";
                    cin >> hoursWorked;
                    cout << "Enter hourly rate: ";
                    cin >> hourlyRate;
                    employees.push_back(new PartTimeEmployee(name, id, salary, hoursWorked, hourlyRate));
                }
                break;
            }
            case 2: {
                // Delete Employee
                int id;
                cout << "Enter employee ID to delete: ";
                cin >> id;
                for (auto it = employees.begin(); it != employees.end(); ++it) {
                    if ((*it)->getId() == id) {
                        delete *it;
                        employees.erase(it);
                        cout << "Employee with ID " << id << " deleted successfully." << endl;
                        break;
                    }
                }
                break;
            }
            case 3: {
                // Update Employee
                cout << "Update functionality not implemented." << endl;
                break;
            }
            case 4: {
                // Display All Employees
                for (const auto& emp : employees) {
                    emp->displayDetails();
                    cout << "Total Pay: $" << emp->calculatePay() << endl;
                    cout << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } while (choice != 5);

    // Free memory
    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}
