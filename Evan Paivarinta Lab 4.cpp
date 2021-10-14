/*
Evan Paivarinta
C++ Fall 2021
Due October 13th
Lab 4: Displaying temp
Temp chart over days
*/
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
	ifstream infile;
	ofstream outfile;
	string inputFileName("C:/Users/Engineering/Source/repos/Evan Paivarinta Lab 4/temperture.dat");
	infile.open("C:/Users/Engineering/Source/repos/Evan Paivarinta Lab 4/temperture.dat");
	infile >> value1 >> value2 >> value3 >> value4 >> value5 >> value6 >> value7 >> value8 >> value9 >> value10 >> value11 >> value12 >> value13 >> value14 >> value15 >> value16 >> value17 >> value18 >> value19 >> value20 >> value21 >> value22 >> value23 >> value24;
	int temp = value1, value2, value3, value4, value5, value6, value7, value8, value9, value10, value11, value12, value13, value14, value15, value16, value17, value18, value19, value20, value21, value22, value23, value24;
	cout << temp << endl;
}
