#ifndef  VOW_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define  VOW_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void Vow(char file1[20],char file2[20])
{
    ifstream infile;
    ofstream outfile;

    infile.open (file1);	//opens the file to be encrypted
    outfile.open (file2); //opens the output file

    char c[100];

    while (!infile.eof()) {	//while not the end of the file
    
        infile.getline(c,100);
    	
        for(int i = 0; c[i] != '\0'; i++) {

            if(c[i]=='a')
                c[i]+=2;
            
            if(c[i]=='e')
                c[i]+=2;
            
            if(c[i]=='i')
                c[i]+=2;
            
            if(c[i]=='o')
                c[i]+=2;

    	    if(c[i]=='u')
                c[i]+=2;

            else
                c[i]+=1;

            if(c[i] > 'z')
                c[i]-=26;
            
            outfile << c[i];

        }

    }


    outfile << "\n\n"; //aesthetic purposes

    infile.close();	 //closes the original file
    outfile.close();	//closes the file encryption

}


#endif
