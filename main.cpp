#include <iostream>
#include <fstream>	//read and write to a file
#include <string>
using namespace std;

string dataMatrix[3][18];
bool isKeyword(string input);
bool isSeparator(string input);
bool isIdentifier(string input);
bool isOperator(string input);
bool isReal(string input);
void displayData();

int main()
{
	ifstream file("data.txt");
	string line;
	int i = 0;
	int j = 0;
	
	//Check if we can open the file or not
	if (!file.is_open()) {
		cout << "error while opening the file\n";
		exit(0);
	}
	
	while (getline(file, line)) {
		if (line == "") {
			i++;
			j = 0;
		}
		else {
			dataMatrix[i][j] = line;
			j++;
		}
	}
	for (int x = 8; x < 18; x++) {
		dataMatrix[2][x] = "";
		if (x > 12)
			dataMatrix[1][x] = "";
	}
	file.close();
	file.clear();
	file.seekg(0);

	displayData();

	
	//READ IN SAMPLE FILES 
	file.open("Sample_Test.txt");
	cout << "Reading Sample\n\n" << endl;
	string input;
	while (getline(file, input)) {
		if (isKeyword(input))
			cout << "Keyword: \t" << input << endl;
		else if (isSeparator(input))
			cout << "Separator: \t" << input << endl;
		else if (isOperator(input))
			cout << "Operator: \t" << input << endl;
	}

	//SEARCH KEYWORDS

	//SEARCH OPERATORS 
	
	//SEARCH IDENTIFIERS 

	//SEARCH REAL NUMBERS 

	//SEARCH SEPERATORS 

	//SEARCH COMMENTS */

	cout << endl << endl <<  "Done" << endl << endl;
	return 0;
	system("PAUSE");
}

bool isKeyword(string input) {
	// Delcare string array of keywords
	string keyWords[18] = { "int", "float", "bool", "if", "else", "then", "endif", "while",
				"whileend", "do", "doend", "for", "forend", "input", "output",
				"and", "or", "function" };
	
	//Compare string input with the keywords
	for (int i = 0; i < 18; i++) {
		if (input == keyWords[i])
			return true;
	}
	return false
}

bool isSeparator(string input) {
	for (int i = 0; i < 12; i++) {
		if (input == dataMatrix[1][i])
			return true;
	}
	return false;
}

bool isIdentifier(char input) {

	return false;
}

bool isOperator(string input) {
	for (int i = 0; i < 8; i++) {
		if (input == dataMatrix[2][i])
			return true;
	}
	return false;
}

bool isReal(char input) {
	
	return false;
}

void displayData() {
	cout << "keywords: ";
	for (int x = 0; x < 18; x++) {
		cout << dataMatrix[0][x] << " ";
	}
	cout << endl << "separators: ";
	for (int x = 0; x < 12; x++) {
		cout << dataMatrix[1][x] << " ";
	}
	cout << endl << "operators: ";
	for (int x = 0; x < 8; x++) {
		cout << dataMatrix[2][x] << " ";
	}

	cout << endl << endl;
}
*********************************************************************************
Eric version
********************************************************************
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <type_traits>

using namespace std;

bool isKeyword(char input[]) {
	char keyWords[20][10]= {"int", "float", "bool", "if", "else", "then", "endif", "while",
				"whileend", "do", "doend", "for", "forend", "input", "output",
				"and", "or", "function", "void", "main"};
	int i, flag = 0;

	for (i = 0; i < 32; ++i) {
		if (strcmp(keyWords[i], input) == 0) {
			return true;
		}
	}

	return false;
}

int main() {
	char testChar, testWord[20], operators[] = "+-*/%=", separators[] = "'(){}[],.:;!";
	ifstream file("Example.txt");
	int i, j = 0;

	if (!file.is_open()) {
		cout << "error while opening the file\n";
		exit(0);
	}

	while (!file.eof()) 
	{
		//We get the first character of each word
		testChar = file.get();
		//Check operator
		for (i = 0; i < 6; ++i) 
		{
			if (testChar == operators[i])
				cout << testChar << " is operator\n";
		}
		//Check seprator
		for (i = 0; i < 11; ++i) 
		{
			if (testChar == separators[i])
				cout << testChar << " is separator\n";
		}
		//Check if number is real or integer??????
		if (isdigit(testChar))
		{
			cout << testChar << " is a number\n";
		}

		//If the first character is not operator nor the seperator, get all the rest of word until reach space
		if (isalnum(testChar)) 
		{
			testWord[j++] = testChar;
		}
		else if ((testChar == ' ' || testChar == '\n') && (j != 0))
		{
			//Make the rest of c string become null
			testWord[j] = '\0';
			//reset new index of testWord for next testWord
			j = 0;

			if (isKeyword(testWord))
				cout << testWord << " is keyword\n";
			else
				cout << testWord << " is indentifier\n";
		}
	}

	file.close();

	return 0;
}
