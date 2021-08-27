/*
* Project		: File Input
* Title			: FileInput.cpp
* Author		: Nelson Wong
* Description	: Practice File Input
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string firstName, lastName;
	int score = 0;
	fstream inputStream;

	inputStream.open("playerInfo.txt");
	inputStream >> firstName >> lastName;
	inputStream >> score;

	cout << "Full Name: " << firstName << " " << lastName << endl;
	cout << "Score: " << score << endl;

	inputStream.close();
	return 0;
}