//This program will design a payroll class that has fields for an employee's name, id number, hourly pay rate, and number of hours worked.
//By: Robert Roden
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Payroll {
private:
    string workerName;
    int workerId;
    double hourlyWage;
    double hoursWorked;

public:
    Payroll(const string& name, int id) : workerName(name), workerId(id), hourlyWage(0.0), hoursWorked(0.0) {}

    string getWorkerName() const { return workerName; }
    int getWorkerId() const { return workerId; }
    double getHourlyWage() const { return hourlyWage; }
    double getHoursWorked() const { return hoursWorked; }

    void setHourlyWage(double wage) { hourlyWage = wage; }
    void setHoursWorked(double hours) { hoursWorked = hours; }

    double computeGrossPayment() const { return hourlyWage * hoursWorked; }
};

int main() {
    string name;
    int id;
    double wage, hoursWorked;

    cout << "Please enter the employees name: "; getline(cin, name);
    cout << "Please enter the employee's ID number: "; cin >> id;
    cout << "Please enter the hourly wage: "; cin >> wage;
    cout << "Please enter the hours worked: "; cin >> hoursWorked;

    Payroll worker(name, id);
    worker.setHourlyWage(wage);
    worker.setHoursWorked(hoursWorked);

    cout << fixed << setprecision(2);
    cout << "The gross pay is $" << worker.computeGrossPayment() << endl;

    return 0;
}
