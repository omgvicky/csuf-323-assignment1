#include <iostream>
#include <fstream>	//read and write to a file
#include <string>
using namespace std;

bool isKeywords(char input);
bool isSeparator(char input);
bool isIdentifier(char input);
bool isOperator(char input);
bool isReal(char input)
void displayData(string data[3][18]);

int main()
{

	
	string data[3][18];
	ifstream datafile("data.txt");
	string line;
	int i = 0;
	int j = 0;
	while (getline(datafile, line)) {
		if (line == "") {
			i++;
			j = 0;
		}
		else {
			data[i][j] = line;
			j++;
		}
	}

	for (int x = 8; x < 18; x++) {
		data[2][x] = "";
		if (x > 12)
			data[1][x] = "";
	}


	displayData(data);

	/*
	cout << "keywords: ";
	for (int x = 0; x < 18; x++) {
		cout << data[0][x] << " ";
	}
	cout << endl << "separators: ";
	for (int x = 0; x < 12; x++) {
		cout << data[1][x] << " ";
	}
	cout << endl << "operators: ";
	for (int x = 0; x < 8; x++) {
		cout << data[2][x] << " ";
	}

	cout << endl << endl;*/


	/*
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

	while (file is not empty) {
		input = current token;
		if isSeparator()
			find string that or char[] that lies between separators;

	}

	//SEARCH KEYWORDS

	//SEARCH OPERATORS 

	//SEARCH IDENTIFIERS 

	//SEARCH REAL NUMBERS 

	//SEARCH SEPERATORS 

	//SEARCH COMMENTS */

	return 0;
	system("PAUSE");
}

bool isKeywords(char input) {
	if (input == '(' || input == ')' || input == '{' || input == '}' || input == '[' || input == ']')
		return true;
	return false;
}

bool isSeparator(char input) {

	return false;
}

bool isIdentifier(char input) {

	return false;
}

bool isOperator(char input) {

	return false;
}

bool isReal(char input) {
	
	return false;
}

void displayData(string data[3][18]) {
	cout << "keywords: ";
	for (int x = 0; x < 18; x++) {
		cout << data[0][x] << " ";
	}
	cout << endl << "separators: ";
	for (int x = 0; x < 12; x++) {
		cout << data[1][x] << " ";
	}
	cout << endl << "operators: ";
	for (int x = 0; x < 8; x++) {
		cout << data[2][x] << " ";
	}

	cout << endl << endl;
}
