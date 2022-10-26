#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	cout << "PRINT PASSWORD: ";
	ofstream fout("C://new 1.txt");
	int n;
	cin >> n;
	fout << n;
	fout.close();
	ifstream fin;
	fin.open("C://new 1.txt");
	string a;
	fin >> a;
	if (a != "79430")cout << "zak gey";
	else cout << "ZAK NE GEY!";
	return 0;
}