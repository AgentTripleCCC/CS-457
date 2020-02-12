#include <iostream>
#include <string>

/*
	Database Project Assignment, written in C++
	CS 457, from University of Nevada, Reno
	by Curtis Chung
	Date: 2/6/2020
*/

using namespace std;

int main (int argc, char * argv[]) 
{
	string line;

	while (line != ".exit") {
		cout << "> ";
		cin >> line;
	}
	return 0;
}