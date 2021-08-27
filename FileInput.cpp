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
	fstream inputStream;

	inputStream.open("player.txt");

	int numOfScores = 0;
	inputStream >> numOfScores;
	for (int i = 0; i < numOfScores; i++)
	{
		string name = { 0 };
		int score = 0;
		inputStream >> name;
		inputStream >> score;
		cout << name << ", " << score << endl;
	}
	inputStream.close();
	return 0;
}