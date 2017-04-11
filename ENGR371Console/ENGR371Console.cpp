// ENGR371Console.cpp : main project file.


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <numeric>
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
	string Temp = "0000";
	int extraTime = 0;
	int totalMin = 0;
	int stopper = 0;

	//times it took for teams of that size to complete
	vector<int> twoPlayers;
	vector<int> threePlayers;
	vector<int> fourPlayers;
	vector<int> fivePlayers;
	vector<int> sixPlayers;
	vector<int> sevenPlayers;



	if (infile.is_open()) {
		while (getline(infile, getStats, '(')) {
			getStats.erase(remove(getStats.begin(), getStats.end(), ','), getStats.end());
			getStats.erase(remove(getStats.begin(), getStats.end(), '\''), getStats.end());
			getStats.erase(remove(getStats.begin(), getStats.end(), ')'), getStats.end());
			//cout << getStats << endl;

			stringstream ss(getStats);
			ss >> gameNum >> questId >> DateTime >> DateTime2 >> StartedAt >> StartedAt2 >> FinishedAt >> FinishedAt2 >> players >> pause >> success >> teamId >> Temp >> extraTime >> totalMin >> stopper;

			Temp.erase(remove(Temp.begin(), Temp.end(), ':'), Temp.end());
			
			int upper,lower,total;

			stringstream toInt(Temp.substr(0,2));
			stringstream toInt2(Temp.substr(2, 4));
			toInt >> upper;
			toInt2 >> lower;
			total = (upper * 60) + lower;
			
			if (players == 2) {
				twoPlayers.push_back(total);
			}
			if (players == 3) {
				threePlayers.push_back(total);
			}
			if (players == 4) {
				fourPlayers.push_back(total);
			}
			if (players == 5) {
				fivePlayers.push_back(total);
			}
			if (players == 6) {
				sixPlayers.push_back(total);
			}
			if (players == 7) {
				sevenPlayers.push_back(total);
			}


			}
		}
	else {
		cout << "file could not be opened";
	}	
	infile.close();

	sort(twoPlayers.begin(), twoPlayers.end());
	sort(threePlayers.begin(), threePlayers.end());
	sort(fourPlayers.begin(), fourPlayers.end());
	sort(fivePlayers.begin(), fivePlayers.end());
	sort(sixPlayers.begin(), sixPlayers.end());
	sort(sevenPlayers.begin(), sevenPlayers.end());


	cout << "##Times for Two Player Teams##" << endl;
	for (int i = 0; i < twoPlayers.size(); i++) {
		cout << twoPlayers[i] << endl;
	}
	float average2 = accumulate(twoPlayers.begin(), twoPlayers.end(), 0.0) / twoPlayers.size();
	cout << "Average Time for Two Player team is: " << average2 << endl;

	cout << "##Times for Three Player Teams##" << endl;
	for (int i = 0; i < threePlayers.size(); i++) {
		cout << threePlayers[i] << endl;
	}
	float average3 = accumulate(threePlayers.begin(), threePlayers.end(), 0.0) / threePlayers.size();
	cout << "Average Time for Three Player team is: " << average3 << endl;

	cout << "##Times for Four Player Teams##" << endl;
	for (int i = 0; i < fourPlayers.size(); i++) {
		cout << fourPlayers[i] << endl;
	}
	float average4 = accumulate(fourPlayers.begin(), fourPlayers.end(), 0.0) / fourPlayers.size();
	cout << "Average Time for Four Player team is: " << average4 << endl;

	cout << "##Times for Five Player Teams##" << endl;
	for (int i = 0; i < fivePlayers.size(); i++) {
		cout << fivePlayers[i] << endl;
	}
	float average5 = accumulate(fivePlayers.begin(), fivePlayers.end(), 0.0) / fivePlayers.size();
	cout << "Average Time for Five Player team is: " << average5 << endl;

	cout << "##Times for Six Player Teams##" << endl;
	for (int i = 0; i < sixPlayers.size(); i++) {
		cout << sixPlayers[i] << endl;
	}
	float average6 = accumulate(sixPlayers.begin(), sixPlayers.end(), 0.0) / sixPlayers.size();
	cout << "Average Time for Six Player team is: " << average6 << endl;

	cout << "##Times for Seven Player Teams##" << endl;
	for (int i = 0; i < sevenPlayers.size(); i++) {
		cout << sevenPlayers[i] << endl;
	}
	float average7 = accumulate(sevenPlayers.begin(), sevenPlayers.end(), 0.0) / sevenPlayers.size();
	cout << "Average Time for Seven Player team is: " << average7 << endl;


}
