// ConsoleApplication1.cpp : Defines the entry point for the console application.
// here i just added some more code
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int const fnameSize = 7;
	char fname[fnameSize];
	cout << "This program parses a NMEA file by looking for GGL strings\n";
	cout << "-> give me the filename (max " << fnameSize-1 << "chars):";
	cin >> fname; // cin reads only 3 chars...so if more are typed in, its not a problem
	/*try {
		cin >> fname;
	}
	catch (int e) {
		cout << e;
		cout << "\nfailed to read filename\n";
		return 0;
	}*/
	cout << sizeof(fname); // returns always 3 ...because fname[3]

	cout << (sizeof(fname) < 5 ? "\n <5" : "\n >5");

	/*if (sizeof(fname) >= 3) { 
		exception ee = exception("filename is too long\n");
		cout << ee.what();
		return 0;
	}*/

	cout << "\nfilename:" << fname;
	cin >> new char; 
    return 0;
}

