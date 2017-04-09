// ENGR371Console.cpp : main project file.


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
using namespace System;

int main() {

	ifstream infile;
	string getStats;
	infile.open("C:\\Users\\adamd\\Desktop\\engr371.txt", ios::in);
	int hold = 0;
	int gameNum = 0;
	int questId = 0;
	string DateTime;
	string DateTime2;
	string StartedAt;
	string StartedAt2;
	string FinishedAt;
	string FinishedAt2;
	int players = 0;
	int pause = 0;
	int success = 0;
	int teamId = 0;
	string Comment;
	string Temp;
	int extraTime = 0;
	int totalMin = 0;
	int stopper = 0;

	//times it took for teams of that size to complete
	vector<string> twoPlayers;
	vector<string> threePlayers;
	vector<string> fourPlayers;
	vector<string> fivePlayers;
	vector<string> sixPlayers;
	vector<string> sevenPlayers;



	if (infile.is_open()) {
		while (getline(infile, getStats, '(')) {
			getStats.erase(remove(getStats.begin(), getStats.end(), ','), getStats.end());
			getStats.erase(remove(getStats.begin(), getStats.end(), '\''), getStats.end());
			getStats.erase(remove(getStats.begin(), getStats.end(), ')'), getStats.end());
			//cout << getStats << endl;

			stringstream ss(getStats);
			ss >> gameNum >> questId >> DateTime >> DateTime2 >> StartedAt >> StartedAt2 >> FinishedAt >> FinishedAt2 >> players >> pause >> success >> teamId >> Temp >> extraTime >> totalMin >> stopper;


			cout << Temp << endl;







			}
		}
	else {
		cout << "file could not be opened";
	}	
	infile.close();
}
