#ifndef KEY_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define KEY_H

#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;

void Key(char file1[20],char file2[20])
{
    ifstream infile;
    ofstream outfile;

    char d[100];
    
    cout << "\nEnter the keyword\n";
    
    cin >> d;

    infile.open (file1);   //opens the file to be encrypted
    outfile.open (file2); //opens the output file

    char c;

    while (!infile.eof()) { //while not the end of the file
    
        infile >> c;
           
            for(int j = 0; d[j] != '\0'; j++) {

                if(c == d[j]) {
                    
                    c += 3;
                    break;

                }

            }
            
            if(c > 'z') {
                c -=26;
            }

            outfile << c ;
        
            
    }

    outfile << "\n\n"; //aesthetic purposes
    
    infile.close();	 //closes the original file
    outfile.close();	//closes the file encryption

}

#endif
