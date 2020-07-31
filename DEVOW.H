#ifndef DEVOW_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define DEVOW_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void DeVow(char file1[20], char file2[20]){

    ifstream infile;
    ofstream outfile;

    infile.open (file1);	//opens the file to be encrypted
    outfile.open (file2); //opens the output file

    char c[100];

    while (!infile.eof()) {	//while not the end of the file
      
        infile.getline(c,100);
    	
        for(int i=0; c[i]!='\0'; i++) {
            
            if (c[i] == 'd')
                c[i]-=2;
            
            if(c[i] == 'h')
                c[i]-=2;
            
            if(c[i] == 'l')
                c[i]-=2;
            
            if(c[i] == 'r')
                c[i]-=2;
            
            if(c[i] == 'w')
                c[i]-=2;
            
            else
                c[i]-=1;
            
            if(c[i] < 'a')
                c[i]+=26;

            outfile << c[i];

        }

        outfile << "\n\n";  //aesthetic purposes

    }

    infile.close();	 //closes the original file
    outfile.close();	//closes the file encryption

}

#endif
