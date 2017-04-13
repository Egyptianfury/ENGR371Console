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
	//infile.open("C:\\Users\\adamd\\Desktop\\engr371.txt", ios::in);
	infile.open("C:\\Users\\adamd\\Desktop\\amaze_data2.txt", ios::in);
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
	double cg1 = 0.00 , cg2 = 0.00 , cg3 = 0.00 , cg4 = 0.00 , cg5 = 0.00 , cg6 = 0.00; 
	double cg7 = 0.00 , cg8 = 0.00 , cg9 = 0.00 , cg10 = 0.00 , cg11 = 0.00;
	double cg12 = 0.00 , cg13 = 0.00 , cg14 = 0.00, cg15 = 0.00, cg16 = 0.00, cg17 = 0.00, cg18 = 0.00;


	//times it took for teams of that size to complete
	vector<int> twoPlayers;
	vector<int> threePlayers;
	vector<int> fourPlayers;
	vector<int> fivePlayers;
	vector<int> sixPlayers;
	vector<int> sevenPlayers;

	vector<int> twoPlayers2;
	vector<int> threePlayers2;
	vector<int> fourPlayers2;
	vector<int> fivePlayers2;
	vector<int> sixPlayers2;
	vector<int> sevenPlayers2;

	vector<int> twoPlayers3;
	vector<int> threePlayers3;
	vector<int> fourPlayers3;
	vector<int> fivePlayers3;
	vector<int> sixPlayers3;
	vector<int> sevenPlayers3;


		while (getline(infile, getStats, '(')) {
			getStats.erase(remove(getStats.begin(), getStats.end(), ','), getStats.end());
			getStats.erase(remove(getStats.begin(), getStats.end(), '\''), getStats.end());
			getStats.erase(remove(getStats.begin(), getStats.end(), ')'), getStats.end());

			stringstream ss(getStats);
			ss >> gameNum >> questId >> DateTime >> DateTime2 >> StartedAt >> StartedAt2 >> FinishedAt >> FinishedAt2 >> players >> pause >> success >> teamId >> Temp >> extraTime >> totalMin >> stopper;

			Temp.erase(remove(Temp.begin(), Temp.end(), ':'), Temp.end());

			int upper, lower, total;

			stringstream toInt(Temp.substr(0, 2));
			stringstream toInt2(Temp.substr(2, 4));
			toInt >> upper;
			toInt2 >> lower;
			total = (upper * 60) + lower;




			if (questId == 1) {
				switch (players) {
				case 2: cg1++;
					if (2700 - total < 2699) {
						twoPlayers.push_back(2700 - total);
					}
					break;
				case 3: cg2++;
					if (2700 - total < 2699) {
						threePlayers.push_back(2700 - total);
					}
					break;
				case 4: cg3++;
					if (2700 - total < 2699) {
						fourPlayers.push_back(2700 - total);
					}
					break;
				case 5: cg4++;
					if (2700 - total < 2699) {
						fivePlayers.push_back(2700 - total);
					}
					break;
				case 6: cg5++;
					if (2700 - total < 2699) {
						sixPlayers.push_back(2700 - total);
					}
					break;
				case 7: cg6++;
					if (2700 - total < 2699) {
						sevenPlayers.push_back(2700 - total);
					}
					break;
				}
			}

			if (questId == 2) {
				switch (players) {
				case 2: cg7++;
					if (2700 - total < 2699) {
						twoPlayers2.push_back(2700 - total);
					}
					break;
				case 3: cg8++;
					if (2700 - total < 2699) {
						threePlayers2.push_back(2700 - total);
					}
					break;
				case 4: cg9++;
					if (2700 - total < 2699) {
						fourPlayers2.push_back(2700 - total);
					}
					break;
				case 5: cg10++;
					if (2700 - total < 2699) {
						fivePlayers2.push_back(2700 - total);
					}
					break;
				case 6: cg11++;
					if (2700 - total < 2699) {
						sixPlayers2.push_back(2700 - total);
					}
					break;
				case 7: cg12++;
					if (2700 - total < 2699) {
						sevenPlayers2.push_back(2700 - total);
					}
					break;
				}
			}
			if (questId == 3) {
				switch (players) {
				case 2: cg13++;
					if (2700 - total < 2699) {
						twoPlayers3.push_back(2700 - total);
					}
					break;
				case 3: cg14++;
					if (2700 - total < 2699) {
						threePlayers3.push_back(2700 - total);
					}
					break;
				case 4: cg15++;
					if (2700 - total < 2699) {
						fourPlayers3.push_back(2700 - total);
					}
					break;
				case 5: cg16++;
					if (2700 - total < 2699) {
						fivePlayers3.push_back(2700 - total);
					}
					break;
				case 6: cg17++;
					if (2700 - total < 2699) {
						sixPlayers3.push_back(2700 - total);
					}
					break;
				case 7: cg18++;
					if (2700 - total < 2699) {
						sevenPlayers3.push_back(2700 - total);
					}
					break;
				}
			}
		}

			//////////////////////////////////////////////////////////////////////////////////
			cout << "****Totals for Game #1****" << endl;
			cout << "##Times for Two Player Teams##" << endl;
			for (int i = 0; i < twoPlayers.size(); i++) {
				cout << twoPlayers[i] << endl;
			}
			double average2 = accumulate(twoPlayers.begin(), twoPlayers.end(), 0.0) / twoPlayers.size();
			cout << "Average Time for Two Player team is: " << average2 / 60 << " Minutes" << endl;

			cout << "##Times for Three Player Teams##" << endl;
			for (int i = 0; i < threePlayers.size(); i++) {
				cout << threePlayers[i] << endl;
			}
			double average3 = accumulate(threePlayers.begin(), threePlayers.end(), 0.0) / threePlayers.size();
			cout << "Average Time for Three Player team is: " << average3 / 60 << " Minutes" << endl;

			cout << "##Times for Four Player Teams##" << endl;
			for (int i = 0; i < fourPlayers.size(); i++) {
				cout << fourPlayers[i] << endl;
			}
			double average4 = accumulate(fourPlayers.begin(), fourPlayers.end(), 0.0) / fourPlayers.size();
			cout << "Average Time for Four Player team is: " << average4 / 60 << " Minutes" << endl;

			cout << "##Times for Five Player Teams##" << endl;
			for (int i = 0; i < fivePlayers.size(); i++) {
				cout << fivePlayers[i] << endl;
			}
			double average5 = accumulate(fivePlayers.begin(), fivePlayers.end(), 0.0) / fivePlayers.size();
			cout << "Average Time for Five Player team is: " << average5 / 60 << " Minutes" << endl;

			cout << "##Times for Six Player Teams##" << endl;
			for (int i = 0; i < sixPlayers.size(); i++) {
				cout << sixPlayers[i] << endl;
			}
			double average6 = accumulate(sixPlayers.begin(), sixPlayers.end(), 0.0) / sixPlayers.size();
			cout << "Average Time for Six Player team is: " << average6 / 60 << " Minutes" << endl;

			cout << "##Times for Seven Player Teams##" << endl;
			for (int i = 0; i < sevenPlayers.size(); i++) {
				cout << sevenPlayers[i] << endl;
			}
			double average7 = accumulate(sevenPlayers.begin(), sevenPlayers.end(), 0.0) / sevenPlayers.size();
			cout << "Average Time for Seven Player team is: " << average7 / 60 << " Minutes" << endl;


			cout << "Sucess Rate for each Team Size : " << endl;
			cout << (twoPlayers.size() / cg1) * 100.00 << " %" << endl;
			cout << (threePlayers.size() / cg2) * 100.00 << "%" << endl;
			cout << (fourPlayers.size() / cg3) * 100.00 << "%" << endl;
			cout << (fivePlayers.size() / cg4) * 100.00 << "%" << endl;
			cout << (sixPlayers.size() / cg5) * 100.00 << "%" << endl;
			cout << (sevenPlayers.size() / cg6) * 100.00 << "%" << endl;



			/////////////////////////////////////////////////////////////////////////
			putchar('\n\n\n');
			cout << "****Totals for Game #2****" << endl;
			cout << "##Times for Two Player Teams##" << endl;
			for (int i = 0; i < twoPlayers2.size(); i++) {
				cout << twoPlayers2[i] << endl;
			}
			double average8 = accumulate(twoPlayers2.begin(), twoPlayers2.end(), 0.0) / twoPlayers2.size();
			cout << "Average Time for Two Player team is: " << average8 / 60 << " Minutes" << endl;

			cout << "##Times for Three Player Teams##" << endl;
			for (int i = 0; i < threePlayers2.size(); i++) {
				cout << threePlayers2[i] << endl;
			}
			double average9 = accumulate(threePlayers2.begin(), threePlayers2.end(), 0.0) / threePlayers2.size();
			cout << "Average Time for Three Player team is: " << average9 / 60 << " Minutes" << endl;

			cout << "##Times for Four Player Teams##" << endl;
			for (int i = 0; i < fourPlayers2.size(); i++) {
				cout << fourPlayers2[i] << endl;
			}
			double average10 = accumulate(fourPlayers2.begin(), fourPlayers2.end(), 0.0) / fourPlayers2.size();
			cout << "Average Time for Four Player team is: " << average10 / 60 << " Minutes" << endl;

			cout << "##Times for Five Player Teams##" << endl;
			for (int i = 0; i < fivePlayers2.size(); i++) {
				cout << fivePlayers2[i] << endl;
			}
			double average11 = accumulate(fivePlayers2.begin(), fivePlayers2.end(), 0.0) / fivePlayers2.size();
			cout << "Average Time for Five Player team is: " << average11 / 60 << " Minutes" << endl;

			cout << "##Times for Six Player Teams##" << endl;
			for (int i = 0; i < sixPlayers2.size(); i++) {
				cout << sixPlayers2[i] << endl;
			}
			double average12 = accumulate(sixPlayers2.begin(), sixPlayers2.end(), 0.0) / sixPlayers2.size();
			cout << "Average Time for Six Player team is: " << average12 / 60 << " Minutes" << endl;

			cout << "##Times for Seven Player Teams##" << endl;
			for (int i = 0; i < sevenPlayers2.size(); i++) {
				cout << sevenPlayers2[i] << endl;
			}
			double average13 = accumulate(sevenPlayers2.begin(), sevenPlayers2.end(), 0.0) / sevenPlayers2.size();
			cout << "Average Time for Seven Player team is: " << average13 / 60 << " Minutes" << endl;

			cout << "Sucess Rate for each Team Size : " << endl;
			cout << (twoPlayers2.size() / cg7) * 100.00 << " %" << endl;
			cout << (threePlayers2.size() / cg8) * 100.00 << "%" << endl;
			cout << (fourPlayers2.size() / cg9) * 100.00 << "%" << endl;
			cout << (fivePlayers2.size() / cg10) * 100.00 << "%" << endl;
			cout << (sixPlayers2.size() / cg11) * 100.00 << "%" << endl;
			cout << (sevenPlayers2.size() / cg12) * 100.00 << "%" << endl;


			/////////////////////////////////////////////////////////////////////////////////////////
			putchar('\n\n\n');
			cout << "****Totals for Game #3****" << endl;
			cout << "##Times for Two Player Teams##" << endl;
			for (int i = 0; i < twoPlayers3.size(); i++) {
				cout << twoPlayers3[i] << endl;
			}
			double average14 = accumulate(twoPlayers3.begin(), twoPlayers3.end(), 0.0) / twoPlayers3.size();
			cout << "Average Time for Two Player team is: " << average14 / 60 << " Minutes" << endl;

			cout << "##Times for Three Player Teams##" << endl;
			for (int i = 0; i < threePlayers3.size(); i++) {
				cout << threePlayers3[i] << endl;
			}
			double average15 = accumulate(threePlayers3.begin(), threePlayers3.end(), 0.0) / threePlayers3.size();
			cout << "Average Time for Three Player team is: " << average15 / 60 << " Minutes" << endl;

			cout << "##Times for Four Player Teams##" << endl;
			for (int i = 0; i < fourPlayers3.size(); i++) {
				cout << fourPlayers3[i] << endl;
			}
			double average16 = accumulate(fourPlayers3.begin(), fourPlayers3.end(), 0.0) / fourPlayers3.size();
			cout << "Average Time for Four Player team is: " << average16 / 60 << " Minutes" << endl;

			cout << "##Times for Five Player Teams##" << endl;
			for (int i = 0; i < fivePlayers.size(); i++) {
				cout << fivePlayers[i] << endl;
			}
			double average17 = accumulate(fivePlayers3.begin(), fivePlayers3.end(), 0.0) / fivePlayers3.size();
			cout << "Average Time for Five Player team is: " << average17 / 60 << " Minutes" << endl;

			cout << "##Times for Six Player Teams##" << endl;
			for (int i = 0; i < sixPlayers3.size(); i++) {
				cout << sixPlayers3[i] << endl;
			}
			double average18 = accumulate(sixPlayers3.begin(), sixPlayers3.end(), 0.0) / sixPlayers3.size();
			cout << "Average Time for Six Player team is: " << average18 / 60 << " Minutes" << endl;

			cout << "##Times for Seven Player Teams##" << endl;
			for (int i = 0; i < sevenPlayers3.size(); i++) {
				cout << sevenPlayers3[i] << endl;
			}
			double average19 = accumulate(sevenPlayers3.begin(), sevenPlayers3.end(), 0.0) / sevenPlayers3.size();
			cout << "Average Time for Seven Player team is: " << average19 / 60 << " Minutes" << endl;

			cout << "Sucess Rate for each Team Size : " << endl;
			cout << (twoPlayers3.size() / cg13) * 100.00 << "%" << endl;
			cout << (threePlayers3.size() / cg14) * 100.00 << "%" << endl;
			cout << (fourPlayers3.size() / cg15) * 100.00 << "%" << endl;
			cout << (fivePlayers3.size() / cg16) * 100.00 << "%" << endl;
			cout << ((sixPlayers3.size() / cg17) *100.00) << "%" << endl;
			cout << (sevenPlayers3.size() / cg18) * 100.00 << "%" << endl;
	}
