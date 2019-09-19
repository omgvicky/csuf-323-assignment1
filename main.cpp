#include <iostream>
#include <fstream>	//read and write to a file
using namespace std;

int main()
{
	//READ IN FILES 
	string readfile;
	cout << "Input file to read from: ";
	cin >> readfile;	//input file to read from

	//OUTPUT FILE
	ofstream myfile;
	myfile.open("Lexical Analysis");	//makes file named Lexical Analysis
	myfile << "LEXICAL ANALYSIS" << endl << endl;

	//SEARCH KEYWORDS

	//SEARCH OPERATORS 

	//SEARCH IDENTIFIERS 

	//SEARCH REAL NUMBERS 

	//SEARCH SEPERATORS 

	//SEARCH COMMENTS 

	return 0;
	system("pause");
}

 string keywords() {

	}
