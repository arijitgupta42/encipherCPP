#ifndef SHOWFILE_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define SHOWFILE_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void showfile()
{
	char filename[100], str[80];
	ifstream ifile;
	
	cout << "\nEnter the name of the file\n";
	cin >> filename;

	ifile.open(filename);
	
	while(!ifile.eof()) {
		ifile.getline(str,80);
		cout<<str;
	}
		
}

#endif
