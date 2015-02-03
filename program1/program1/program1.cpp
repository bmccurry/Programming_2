// program1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string players[5];
	double batting[5];
	double slugging[5];
	for (int i = 0; i < 5; i++)
	{
		players[i] = "";
		batting[i] = 0.0;
		slugging[i] = 0.0;		
	}
	string response = "";
	while (response != "Exit")
	{	
		cout << "Do you want to Add, Clear, or Exit? ";
		cin >> response;
		cin.sync();
		if (response == "Add")
		{
			string name;
			int code = 1;
			double atBat = 0;
			double singles = 0;
			double doubles = 0;
			double triples = 0;
			double homeRuns = 0;

			cout << "Player name: ";
			getline(cin, name);
			cout << "Player team code (1,2,3,4,5): ";
			cin >> code;
			cout << "Times at bat: ";
			cin >> atBat;
			cout << "Singles: ";
			cin >> singles;
			cout << "Doubles: ";
			cin >> doubles;
			cout << "Triples: ";
			cin >> triples;
			cout << "Home runs: ";
			cin >> homeRuns;

			double hits = singles + doubles + triples + homeRuns;
			double batAvg = hits / atBat;
			double slugPerc = hits / 4 / atBat;
			players[code] = name;
			batting[code] = batAvg;
			slugging[code] = slugPerc;

			cout << name << " has a " << batAvg << " batting average." << endl
				<< "And a " << slugPerc << " slugging percentage." << endl;
		}
		else if (response == "Clear")
		{
			for (int i = 0; i < 5; i++)
			{
				players[i] = "";
				batting[i] = 0.0;
				slugging[i] = 0.0;
			}
			cout << "All players removed." << endl;
		}
	}
	double largest = 0.0;
	int largeIndex = 0;
	for (int i = 0; i < 5; i++)
	{
		if (batting[i] > largest)
		{
			largest = batting[i];
			largeIndex = i;
		}
	}
	cout << "Best Player: " << players[largeIndex] << endl
		<< "Batting average: " << batting[largeIndex] << endl
		<< "Slugging percentage: " << batting[largeIndex] << endl;
	getchar();
}
