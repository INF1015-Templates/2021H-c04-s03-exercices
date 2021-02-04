///
/// Ce projet utilise quelques librairies disponibles sur Vcpkg et permet entre autre d'en tester le bon fonctionnement.
///


#include <cstddef>
#include <cstdint>

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <span>

#include <cppitertools/range.hpp>

#include "Employee.hpp"
#include "Company.hpp"

using namespace std;
using namespace iter;


void runEmployeeExample() {
	Employee marcel1 = Employee("Marcel",50000);
	Employee marcel2("Marcel", 50000);
	Employee marcel3{"Marcel", 50000};
	//Employee marcel4 = Employee(); // Erreur si ctor par défaut pas défini
	//Employee marcel5; // Erreur si ctor par défaut pas défini
	cout << "- - - - - - - - - - - - - - - - - - - -" << "\n";
}

void runCompanyExample() {
	Company stonks("Stonks LLC", "chosson");
	stonks.getPresident().setSalary(69'420);
	stonks.addEmployee("Foo", 69);
	stonks.addEmployee("Bar", 42);
	stonks.addEmployee("Qux", 9000);
	stonks.addEmployee("Spam", 1337);
	stonks.addEmployee("Eggs", 0xDEAD);
	stonks.print();
	cout << "- - - - - - - - - - - - - - - - - - - -" << "\n";
}


int main() {
	runEmployeeExample();
	cout << "\n\n";
	runCompanyExample();
}

