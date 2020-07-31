#ifndef MAKEFILE_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define MAKEFILE_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void makefile(){
	
	char filename[100],str[1000];
	ofstream ofile;
	
	cout<<"\nEnter the name of the file"<<endl;
	cin >> filename;
	
	ofile.open(filename);

	cout<<"\nEnter the text you want to encrypt in the file"<<endl;
	cin >> str;
	
	ofile << str;
	
}

#endif
