/*
Evan Paivarinta
C++ Fall 2021
Due October 13th
Lab 4: Displaying temp
Temp chart over days
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream inFile;
	ofstream outFile;

	int value1, value2, value3, value4, value5, value6, value7, value8, value9, value10, value11, value12, value13, value14, value15, value16, value17, value18, value19, value20, value21, value22, value23, value24;
	string printHeading;
	//making the heading
	printHeading;
	{
		cout << "\t -40 \t\t -20 \t\t 0 \t\t\t 40 \t\t\t 80 \t\t\t 120" << endl;
	}
	string printStars;
	int num;
	string inputFileName = ("C:/Users/Engineering/Source/repos/Evan Paivarinta Lab 4/graph.dat");
	string outputFileName = ("outgraph.dat");
	inFile.open("graph.dat");
	outFile.open("outgraph.dat");
	if (inFile.is_open()) {
		while (getline(inFile, printStars)) {
			int num = std::stoi(printStars);
			printStars = num;
		}
		inFile.close();
	}
	else cout << "Unable to open file";



	void print_Line(num) {
		int AOK;
		int numberOfStars = num / 3;
		int numberSpace = numStars + 10;
		string maxStars = "*";
		sto

	}
	/*inFile >> value1 >> value2 >> value3 >> value4 >> value5 >> value6 >> value7 >> value8 >> value9 >> value10 >> value11 >> value12 >> value13 >> value14 >> value15 >> value16 >> value17 >> value18 >> value19 >> value20 >> value21 >> value22 >> value23 >> value24;
	if (value1 >= -30 && value1 < 0) {
		for (int a = -30; a <= value1; a++)
		{
			cout << value1 << "*" << setw(41) << "|" << endl;
			a = abs(a) + 3;
		}
	}
	else if (value1 >= 0 && value1 <= 120) {
		for (int a = -30; a <= value1; a++) {
			cout << value1 << setw(41) << "|" << "*" << endl;
			a = a + 3;

		}
	}
	else (value1 < -30 && value1 > 120);
		cout << "temperture not in range" << endl;

	if (value2 >= -30 && value2 < 0) {
		for (int b = -30; b <= value2; b++) {
			cout << value2 << "*" << setw(41) << "|" << endl;
			b = abs(b) + 3;
		}
	}
	else if (value2 >= 0 && value2 <= 120) {
		for (int b = -30; b <= value2; b++) {
			cout << value2 << setw(41) << "|" << "*" << endl;
			b = b + 3;

		}
	}
	else (value2 < -30 || value1 > 120);
		cout << "temperture not in range" << endl;

		if (value3 >= -30 && value3 < 0) {
			for (int c = -30; c <= value3; c++) {
				cout << value3 << "*" << setw(41) << "|" << endl;
				c = abs(c) + 3;
			}
		}
		else if (value3 >= 0 && value3 <= 120) {
			for (int c = -30; c <= value3; c++) {
				cout << value3 << setw(41) << "|" << "*" << endl;
				c = c + 3;

			}
		}
		else (value3 < -30 || value3 > 120);
			cout << "temperture not in range" << endl;
			if (value4 >= -30 && value4 < 0) {
				for (int d = -30; d <= value3; d++) {
					cout << value4 << "*" << setw(41) << "|" << endl;
					d = abs(d) + 3;
				}
			}
			else if (value4 >= 0 && value4 <= 120) {
				for (int d = -30; d <= value3; d++) {
					cout << value4 << setw(41) << "|" << "*" << endl;
					d = d + 3;

				}
			}
			else (value4 < -30 || value4 > 120);
			cout << "temperture not in range" << endl;
			if (value5 >= -30 && value5 < 0) {
				for (int e = -30; e <= value5; e++) {
					cout << value5 << "*" << setw(41) << "|" << endl;
					e = abs(e) + 3;
				}
			}
			else if (value5 >= 0 && value5 <= 120) {
				for (int e = -30; e <= value5; e++) {
					cout << value5 << setw(41) << "|" << "*" << endl;
					e = e + 3;

				}
			}
			else (value5 < -30 || value5 > 120);
				cout << "temperture not in range" << endl;
		if (value6 >= -30 && value6 < 0) {
					for (int f = -30; f <= value6; f++) {
						cout << value6 << "*" << setw(41) << "|" << endl;
						f = abs(f) + 3;
					}
				}
				else if (value6 >= 0 && value6 <= 120) {
					for (int f = -30;f <= value6; f++) {
						cout << value6 << setw(41) << "|" << "*" << endl;
						f = f + 3;

					}
				}
				else (value6 < -30 && value6 > 120);
					cout << "temperture not in range" << endl;
		if (value7 >= -30 && value7 <= 0) {
						for (int g = -30; g <= value7; g++) {
							cout << value7 << "*" << setw(41) << "|" << endl;
						}
					}
					else if (value7 >= 0 && value7 <= 120) {
						for (int g = -30;g <= value7; g++) {
							cout << value7 << setw(41) << "|" << "*" << endl;

						}
					}
					else (value7 < -30 && value7> 120);
					cout << "temperture not in range" << endl;
	*/
		inFile.close();
		outFile.close();
		return 0;

	}
