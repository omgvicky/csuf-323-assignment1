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
	
	
	//for each token, ask what it is, then call method
	string input;
	while(file is not empty){
		input = current token;
		if isSeparator()
			find string that or char[] that lies between separators;
		
	}

	//SEARCH KEYWORDS

	//SEARCH OPERATORS 

	//SEARCH IDENTIFIERS 

	//SEARCH REAL NUMBERS 

	//SEARCH SEPERATORS 

	//SEARCH COMMENTS 

	return 0;
	system("pause");
}

 bool isKeywords() {

	}

 bool isSeparator() {

	}

 bool isIdentifier() {

	}

 bool isOperator() {

	}

 bool isReal() {

	}
