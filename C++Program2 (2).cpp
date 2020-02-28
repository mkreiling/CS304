#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;
 

int main()

{

//Declare Variables

    ifstream inFile;
	ofstream outFile;
	string firstName;
	string lastName;

 

    double currentSalary;
	double payIncrease;
	double updatedSalary;
	payIncrease = .05;
	
	//Open Input and Output File
	inFile.open("Data.txt");
	outFile.open("Output.dat.txt");
	
	//Format Output File

    outFile << showpoint << fixed << setprecision(12) << right;
	
	//Format First Row of Output

    outFile << setw(30) << "Employee " << setw(5) << "Updated Salary " << endl;
	
	//Read from Input File for Employee One

    inFile >> lastName >> firstName >> currentSalary >> payIncrease;

	//Calculate New Salary

    updatedSalary = (payIncrease * currentSalary) + currentSalary;

	//Read Ouput File for Employee One

    outFile << setw(30) << lastName + firstName << setw(5) << updatedSalary << endl;

 

	//Read from Input File for Employee Two

    inFile >> lastName >> firstName >> currentSalary >> payIncrease;

	//Calculate New Salary

    updatedSalary = (payIncrease * currentSalary) + currentSalary;

	//Read Ouput File for Employee One

    outFile << setw(30) << lastName + firstName << setw(5) << updatedSalary << endl;
	
	//Read from Input File for Employee Three

    inFile >> lastName >> firstName >> currentSalary >> payIncrease;

	//Calculate New Salary

    updatedSalary = (payIncrease * currentSalary) + currentSalary;

	// Read Output File for Employee Three

    outFile << setw(30) << lastName + firstName << setw(5) << updatedSalary << endl;

 	//Close Input and Output Files

    inFile.close();

    outFile.close();
	
	return 0;

}

