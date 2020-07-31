#ifndef DEZIGZAG_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define DEZIGZAG_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;


void DeZigZag(char file1[20],char file2[20])
{

    ifstream infile;
    ofstream outfile;

    infile.open (file1);	//opens the file to be encrypted
    outfile.open (file2); //opens the output file

    char c[100];

    while (!infile.eof()) {	//while not the end of the file
    
        infile.getline(c,100);
    
        int n = 0;
        
        for (int i = 0; c[i] != '\0'; i++)
            n++;

        int m = ((n+1)/2);
	    
        for (int j = 0, k = m; j < m; j++, k++)
            outfile << c[j] << c[k];

    }

    outfile << "\n\n";    //aesthetic purposes

    infile.close();	 //closes the original file
    outfile.close();	//closes the file encryption

}

#endif
