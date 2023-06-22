#include "logic.h"

string outputUsers() {
	string fileToUsers = "Users.";

	ifstream fin(fileToUsers, ifstream::app);

	if (!fin.is_open()) {
		cout << "Error - 1 Problem file is users!!! Waiting...";
		Sleep(1000);
		outputUsers();
	}
	else {
		string examinationOfEmpty;
		fin >> examinationOfEmpty;
		if (examinationOfEmpty == "") {

		}





	}


}

void addUserForFile() {
	string fileToUsers = "Users.";
	string newUserName = "";
	ofstream fout(fileToUsers, ifstream::app); 

	cout << "¬ведите им€ нового пользовател€: ";
	cin >> newUserName;

	fout 


}