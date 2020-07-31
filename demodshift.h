#ifndef DEMODSHIFT_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define DEMODSHIFT_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void DeModShift(char file1[20],char file2[20])
{
    ifstream infile;
    ofstream outfile;

    int n;

    cout << "\nEnter the mod-shift\n";
    cin >> n;

    infile.open (file1);   //opens the file to be encrypted
    outfile.open (file2);  //opens the output file

    char c[100];
    
    while (!infile.eof()) {	//while not the end of the file
    
        infile.getline(c,100);
    
        for(int i=0; c[i]!='\0'; i++) {
    
            if (((c[i] - n) % n) == 0)
                c[i] -= n;
    
            if (c[i]<'a')
                c[i] += 26;
    
            outfile << c[i];
    
        }

        outfile << "\n\n";	//aesthetic purposes

    }

    infile.close();     //closes the original file
    outfile.close();    //closes the file encryption
    
}

#endif
