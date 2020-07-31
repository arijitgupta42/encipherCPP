#include<iostream>
#include<fstream>
#include<cctype>


#include "caesar.h"
#include "decaesar.h"
#include "zigzag.h"
#include "dezigzag.h"
#include "modshift.h"
#include "demodshift.h"
#include "key.h"
#include "dekey.h"
#include "vow.h"
#include "devow.h"
#include "vignere.h"
#include "devignere.h"
#include "makefile.h"
#include "showfile.h"

using namespace std;

//Class and Switch

class cipher {

public:

    void Crypto() {
		
		int ch1,ch2, ch3;
		char fileloc1[100], fileloc2[100];
		char ch;

		    cout << "\nWelcome to the Dcoder, if you wish to encrypt press 1 and to decrypt press 2\n";
		    cin >> ch1;
		    
		    switch(ch1) {
		    
		    case 1:
				cout << "\nYou have chosen to encrypt your file ,choose from the ciphers below and input the respective serial number:\n1.Caeser Cipher\n2.Zigzag Cipher\n3.Modshift Cipher\n4.Key Cipher\n5.Vowel Cipher\n6.Vignere Cipher\n";
				cin >> ch2;
				cout << "\nWhat is the location of the file you would like to encrypt?\n";
				
				cin >> fileloc1;	//gets the file location as a string

				cout << "\nWhat is the name of the file to which you would like to print the encryption?\n";
				cin >> fileloc2;    //gets the output file as a string

				switch(ch2) {

				case 1:
				    Caesar(fileloc1,fileloc2);
				    cout<<endl;
				    break; //Encrypting with Caesar
				case 2:
				    ZigZag(fileloc1,fileloc2);cout<<endl;
				    break;//Encrypting with zigzag
				case 3:
				    ModShift(fileloc1,fileloc2);cout<<endl;
				    break; //Encrypting with modshift
				case 4:
				    Key(fileloc1,fileloc2);cout<<endl;
				    break; //Encrypting with key
				case 5:
				    Vow(fileloc1,fileloc2);cout<<endl;
				    break; //Encrypting with vowel
				case 6:
					Vignere(fileloc1,fileloc2);cout<<endl;
					break; //Encrypting with Vignere
				default:
				    cout<<"\nThe given input was invalid\n";
				}
			    
			    break;


		    case 2:
			cout << "\nYou have chosen to decrypt file, please choose from the ciphers below and input the respective serial number:\n1.Caeser Cipher\n2.Zigzag Cipher\n3.Modshift Cipher\n4.Key Cipher\n5.Vowel Cipher\n6.Vignere\n";
			cin >> ch2;
			cout << "\nWhat is the location of the file you would like to decrypt?\n";
			cin >> fileloc1 ;	//gets the file location as a string

			cout << "\nWhat is the name of the file to which you would like to print the decryption?\n";
			cin >> fileloc2 ;  //gets the output file as a string

			switch(ch2) {
			case 1:
			    DeCaesar(fileloc1,fileloc2);cout<<endl;
			    break; //Decrypting with Caesar
			case 2:
			    DeZigZag(fileloc1,fileloc2);cout<<endl;
			    break; //Decrypting with zigzag
			case 3:
			    DeModShift(fileloc1,fileloc2);cout<<endl;
			    break; //Decrypting with modshift
			case 4:
			    DeKey(fileloc1,fileloc2);cout<<endl;
			    break; //Decrypting with key
			case 5:
			    DeVow(fileloc1,fileloc2);cout<<endl;
			    break; //Decrypting with vowel
			case 6:
				DeVignere(fileloc1,fileloc2);cout<<endl;
				break; //Decrypting with Vignere
			default:
			    cout<<"\nThe given input was invalid\n";
			}
			    break;
		    }
	}

};

int main()
{
    cipher C;
    char a,b,c,d,ch;

    do {
		
		cout << "Do you want to create a file that you want to encrypt/decrypt(Y/N)\n";
		cin.get(ch);

		if(ch == 'Y') {
		    makefile();
		}

		cout << "\nNow do you want to perform encryption/decryption on your file(Y/N)?\n";
		cin >> b;
		
		if(b == 'Y') {
		    C.Crypto();
		}
		
		cout << "\nDo you want to see the contents of your encrypted/decrypted file?(Y/N)\n";
    	cin >> d;

    	if(d == 'Y'){
			showfile();
    	}
		
		cout << "\nDo you want to exit Dcoder(Y/N)?\n";
		cin >> c;

    } while(c=='N');

      return 0;
}
