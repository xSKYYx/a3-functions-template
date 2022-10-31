/**
* \file		assignment 3 - functions, character i / o
* \author: skyler black S0544454
* \date 10 - 31 - 2022
* \brief	read a text file one character at a time and write a "stats.txt" file
* \todo		cout how often the following types of char occurs : alphabet, numeric, control, upper / lower case, punctuation, total number of characters.
* \todo		you may need to include other libraries
* \todo:
**/
void programBanner();

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* Declare functions here */


int main() {


	ifstream file;
	char aCharacter = ' ';
	char ans;
	string filename = "";
	programBanner(); {
		cout << "Assignment 3 - file stats program "
			<< "student: skyler Black"
			<< "this program will perform character counts on an input file."
			<< "the results will be writtten to stats.txt in the current directory";
	}
	do {
		cout << "Enter a file to process: ";
		cin >> filename;

		file.open(filename.c_str());
		if (file.fail()) {
			cerr << "failed to open the file: " << filename << endl;
		}
		else {
			file.get(aCharacter);
			while (!file.eof()) {
				cout << aCharacter;
				file.get(aCharacter);
			}
			file.close();
		}

		cout << "would like to try again?\n ";
			cin >> ans;

	} while (ans == 'Y' || ans == 'y');
	cout <<"goodbye"
	return 0;
}

/* Complete function definitions below here */
