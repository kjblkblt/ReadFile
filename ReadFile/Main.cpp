#include <iostream>
#include <string>
#include <fstream>
#include "Parser.h"
using namespace std;

int main()
{
	string SBGfilename;
	cout << "Please enter your full file path and name:  ";
	cin >> SBGfilename;
	map<int, Store> stores;
	Parser P;
	try
	{
		P.ParseSBG(SBGfilename, &stores);
		
	
	}
	catch (exception ex)
	{
		cout << endl << "File not found! Timmy" << endl;
	}

	string storeNum;
	
	while (true)
	{
		cout << "Enter a store number to display info or (exit): ";
		cin >> storeNum;
		if (storeNum == "exit") return 0;
		stores[stoi(storeNum)].printInfo();
	}

	//Display something
	//SBGfilename.open;
	//if (!SBGfilename)
	//{
	//	cout << "File open error!" << endl;
	//	return 0;
	//}
	//getline(SBGfilename, input);
	//while (SBGfilename)
	//{
	//
	//}


	//cout >> _renewRevRank;
}