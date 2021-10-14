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
	cout << setw(10) << "-30" << setw(10) << '0' << setw(10) << "30" << setw(10) << "60" << setw(10) << "90" << setw(10) << "120" << endl;
	//making the heading
	int spaces;
	string printStars;
	string inputFileName = ("C:/Users/Engineering/Source/repos/Evan Paivarinta Lab 4/graph.dat");
	string outputFileName = ("outgraph.dat");
	inFile.open("graph.dat");
	outFile.open("outgraph.dat");
	inFile >> value1 >> value2 >> value3 >> value4 >> value5 >> value6 >> value7 >> value8 >> value9 >> value10 >> value11 >> value12 >> value13 >> value14 >> value15 >> value16 >> value17 >> value18 >> value19 >> value20 >> value21 >> value22 >> value23 >> value24;
	//value 1
	if (value1 >= -30 && value1 < 0) {
		for (int a = -30/3; a <= value1/3; a++)
		{
			a = abs(a) + 3;
			cout << value1 << "*" << setw(19) << "|" << endl;
			break;
		}
	}
	else if (value1 >= 0 && value1 <= 120) {
		for (int a = -30/3; a <= value1; a++) {
			a = a + 3;
			cout << value1 << setw(19) << "|" << "*" << endl;
			break;
		}
	}	
	else cout << "temperture not in range" << endl;
//value 2
	if (value2 >= -30 && value2 < 0) {
		for (int b = -30 / 3; b <= value2 / 3; b++)
		{
			b = abs(b) + 3;
			cout << value2 << "*" << setw(16) << "|" << endl;
			break;
		}
	}
	else if (value2 >= 0 && value2 <= 120) {
		for (int b = -30 / 3; b <= value2; b++) {
			b = b + 3;
			cout << value2 << setw(16) << "|" << "*" << endl;
			
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 3
	if (value3 >= -30 && value3 < 0) {
		for (int c = -30 / 3; c <= value3 / 3; c++)
		{
			c = abs(c) + 3;
			cout << value3 << "*" << setw(16) << "|" << endl;
			break;
		}
	}
	else if (value3 >= 0 && value3 <= 120) {
		for (int  c= -30 / 3; c <= value3; c++) {
			c = c + 3;
			cout << value3 << setw(16) << "|" << "*" << endl;

			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 4 
	if (value4 >= -30 && value4 < 0) {
		for (int d = -30 / 3; d <= value4 / 3; d++)
		{
			d = abs(d) + 3;
			cout << value4 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value4 >= 0 && value4 <= 120) {
		for (int d = -30 / 3; d <= value4; d++) {
			d = d + 3;
			cout << value4 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 5
	if (value5 >= -30 && value5 < 0) {
		for (int e = -30 / 3; e <= value5 / 3; e++)
		{
			e = abs(e) + 3;
			cout << value5 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value5 >= 0 && value5 <= 120) {
		for (int e = -30 / 3; e <= value5; e++) {
			e = e + 3;
			cout << value5 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 6
	if (value6 >= -30 && value6 < 0) {
		for (int f = -30 / 3; f <= value6 / 3; f++)
		{
			f = abs(f) + 3;
			cout << value6 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value6 >= 0 && value6 <= 120) {
		for (int f = -30 / 3; f <= value6; f++) {
			f = f + 3;
			cout << value6 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 7
	if (value7 >= -30 && value7 < 0) {
		for (int g = -30 / 3; g <= value7 / 3; g++)
		{
			g = abs(g) + 3;
			cout << value7 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value7 >= 0 && value7 <= 120) {
		for (int g = -30 / 3; g <= value7; g++) {
			g = g + 3;
			cout << value7 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 8
	if (value8 >= -30 && value8 < 0) {
		for (int h = -30 / 3; h <= value8 / 3; h++)
		{
			h = abs(h) + 3;
			cout << value8 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value8 >= 0 && value8 <= 120) {
		for (int h = -30 / 3; h <= value8; h++) {
			h = h + 3;
			cout << value8 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 9 
	if (value9 >= -30 && value9 < 0) {
		for (int i = -30 / 3; i <= value9 / 3; i++)
		{
			i = abs(i) + 3;
			cout << value9 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value9 >= 0 && value9 <= 120) {
		for (int i = -30 / 3; i <= value9; i++) {
			i = i + 3;
			cout << value9 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value10
	if (value10 >= -30 && value10 < 0) {
		for (int j = -30 / 3; j <= value10 / 3; j++)
		{
			j = abs(j) + 3;
			cout << value10 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value10 >= 0 && value10 <= 120) {
		for (int j = -30 / 3; j <= value5; j++) {
			j = j + 3;
			cout << value10 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 11
	if (value11 >= -30 && value11 < 0) {
		for (int k = -30 / 3; k <= value11 / 3; k++)
		{
			k = abs(k) + 3;
			cout << value11 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value11 >= 0 && value11 <= 120) {
		for (int k = -30 / 3; k <= value11; k++) {
			k = k + 3;
			cout << value11 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value12
	if (value12 >= -30 && value12 < 0) {
		for (int l = -30 / 3; l <= value12 / 3; l++)
		{
			l = abs(l) + 3;
			cout << value12 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value12 >= 0 && value12 <= 120) {
		for (int l = -30 / 3; l <= value12; l++) {
			l = l + 3;
			cout << value12 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	// value13
	if (value13 >= -30 && value13 < 0) {
		for (int m = -30 / 3; m <= value5 / 3; m++)
		{
			m = abs(m) + 3;
			cout << value13 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value13 >= 0 && value13 <= 120) {
		for (int m = -30 / 3; m <= value13; m++) {
			m = m + 3;
			cout << value13 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value14
	if (value14 >= -30 && value14 < 0) {
		for (int n = -30 / 3; n <= value14 / 3; n++)
		{
			n = abs(n) + 3;
			cout << value14 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value14 >= 0 && value14 <= 120) {
		for (int n = -30 / 3; n <= value14; n++) {
			n = n + 3;
			cout << value14 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 15
	if (value15 >= -30 && value15 < 0) {
		for (int o = -30 / 3; o <= value15 / 3; o++)
		{
			o = abs(o) + 3;
			cout << value15 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value15 >= 0 && value15 <= 120) {
		for (int o = -30 / 3; o <= value15; o++) {
			o = o + 3;
			cout << value15 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value16
	if (value16 >= -30 && value16 < 0) {
		for (int p = -30 / 3; p <= value16 / 3; p++)
		{
			p = abs(p) + 3;
			cout << value16 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value16 >= 0 && value16 <= 120) {
		for (int p = -30 / 3; p <= value16; p++) {
			p = p + 3;
			cout << value16 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value17
	if (value17 >= -30 && value17 < 0) {
		for (int r = -30 / 3; r <= value17 / 3; r++)
		{
			r = abs(r) + 3;
			cout << value17 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value17 >= 0 && value17 <= 120) {
		for (int r = -30 / 3; r <= value17; r++) {
			r = r + 3;
			cout << value17 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 18
	if (value18 >= -30 && value18 < 0) {
		for (int q = -30 / 3; q <= value18 / 3; q++)
		{
			q = abs(q) + 3;
			cout << value18 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value18 >= 0 && value18 <= 120) {
		for (int q = -30 / 3; q <= value18; q++) {
			q = q + 3;
			cout << value18 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
// value 19 
	if (value19 >= -30 && value19 < 0) {
		for (int s = -30 / 3; s <= value19 / 3; s++)
		{
			s = abs(s) + 3;
			cout << value19 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value19 >= 0 && value19 <= 120) {
		for (int s = -30 / 3; s <= value19; s++) {
			s = s + 3;
			cout << value19 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value20
	if (value20 >= -30 && value20 < 0) {
		for (int t = -30 / 3; t <= value20 / 3; t++)
		{
			t = abs(t) + 3;
			cout << value20 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value20 >= 0 && value20 <= 120) {
		for (int t = -30 / 3; t <= value20; t++) {
			t = t + 3;
			cout << value20 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 21
	if (value21 >= -30 && value21 < 0) {
		for (int u = -30 / 3; u <= value21 / 3; u++)
		{
			u = abs(u) + 3;
			cout << value21 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value21 >= 0 && value21 <= 120) {
		for (int u = -30 / 3; u <= value21; u++) {
			u = u + 3;
			cout << value21 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value 22
	if (value22 >= -30 && value22 < 0) {
		for (int v = -30 / 3; v <= value22 / 3; v++)
		{
			v = abs(v) + 3;
			cout << value22 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value22 >= 0 && value22 <= 120) {
		for (int v = -30 / 3; v <= value22; v++) {
			v = v + 3;
			cout << value22 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//Value 23
	if (value23 >= -30 && value23 < 0) {
		for (int w = -30 / 3; w <= value23 / 3; w++)
		{
			w = abs(w) + 3;
			cout << value23 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value23 >= 0 && value23 <= 120) {
		for (int w = -30 / 3; w <= value23; w++) {
			w = w + 3;
			cout << value23 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;
	//value24
	if (value24 >= -30 && value24 < 0) {
		for (int x = -30 / 3; x <= value24 / 3; x++)
		{
			x = abs(x) + 3;
			cout << value24 << "*" << setw(18) << "|" << endl;
			break;
		}
	}
	else if (value24 >= 0 && value24 <= 120) {
		for (int x = -30 / 3; x <= value24; x++) {
			x = x + 3;
			cout << value24 << setw(18) << "|" << "*" << endl;
			break;
		}
	}
	else cout << "temperture not in range" << endl;


		inFile.close();
		outFile.close();
		return 0;

	}
