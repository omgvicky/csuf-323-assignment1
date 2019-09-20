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
	for (int i = 0; i < 18; i++) {
		if (input == dataMatrix[0][i])
			return true;
	}
	return false;
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
