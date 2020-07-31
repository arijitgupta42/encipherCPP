#ifndef VIGNERE_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define VIGNERE_H

#include<iostream>
#include<fstream>
#include<cctype>
#include<string>

using namespace std;

void Vignere(char file1[20],char file2[20])
{
    ifstream infile;
    ofstream outfile;

    char key[10];
    
    cout << "\nEnter the key\n";
	cin >> key;  

    infile.open (file1);   //opens the file to be encrypted
    outfile.open (file2); //opens the output file

    char c;

    while (!infile.eof()) { //while not the end of the file
		
		int j =0;
				
		infile >> c;
		
		int a;
		a = key[j];
		a += 1;
		a -= 'a';
		c += a;
	
		if(c > 'z'){
			c -=26;
		}
		
		outfile << c;
		
        j = (j + 1) % sizeof(key);
    }
 
    
      
        
          
    outfile << "\n\n"; //aesthetic purposes
    

    
    infile.close();	 //closes the original file
    outfile.close();	//closes the file encryption
}

#endif




 
