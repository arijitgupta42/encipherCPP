#ifndef CAESAR_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define CAESAR_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void Caesar(char file1[20],char file2[20]) {
    
    ifstream infile;
    ofstream outfile;

    int n;

    cout << "\nEnter the rot\n";
    cin >> n;

    infile.open (file1);    //opens the file to be encrypted
    outfile.open (file2);   //opens the output file

    char c;

    while (!infile.eof()) {	//while not the end of the file

		infile >> c;
		    
        c += n ;
    
        if (c > 'z')
            c -= 26;

        outfile << c;

    }

    outfile << "\n\n";  //aesthetic purposes

    infile.close();	 //closes the original file
    outfile.close();	//closes the file encryption

}


#endif
