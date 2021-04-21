#include "employee.h"	
#include <iostream>
#include <string>
using namespace std;

int main() {

	// Create an object of Employee class
	Employee emp1(1, "Rahul", "Sharma");

	// Print attribute values
	emp1.displayDetails();

	// Another employee object
	Employee emp2;
	emp2.id = 2;
	emp2.firstName = "Yajat";
	emp2.lastName = "Agrawal";

	emp2.displayDetails();

	return 0;
}