///
/// Classe d'employé dans une compagnie.
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <string>

#include "Employee.hpp"

using namespace std;


//Employee::Employee() {
//	name_ = "";
//	salary_ = 0.0;
//	cout << "Employee()" << endl;
//}

Employee::Employee(const string& name, double salary)
: name_(name),
  salary_(salary) {
	cout << "Employee(const string&, double)" << endl;
}

Employee::~Employee() {
	cout << "~Employee()" << endl;
}

const string& Employee::getName() const {
	return name_;
}

double Employee::getSalary() const {
	return salary_;
}

void Employee::setSalary(double salary) {
	salary_ = salary;
}

