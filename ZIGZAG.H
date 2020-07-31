#ifndef ZIGZAG_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define ZIGZAG_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void ZigZag(char file1[20],char file2[20])
{
    ifstream infile;
    ofstream outfile;

    infile.open (file1);	//opens the file to be encrypted
    outfile.open (file2); //opens the output file

    char c[100];

    while (!infile.eof()) {	//while not the end of the file
    
        infile.getline(c,100);
    
        for(int i = 0; c[i] != '\0'; i += 2)
            outfile << c[i];
        
        for(int j = 1; c[j] != '\0'; j += 2)
            outfile << c[j];
    }

    infile.close();	 //closes the original file
    outfile.close();	//closes the file encryption

    outfile << "\n\n";	//aesthetic purposes

}

#endif
