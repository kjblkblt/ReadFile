#include <iostream>
#include <string>
#include <fstream>
#include "Parser.h"
using namespace std;

int main()
{
	string SBGfilename;
	string CAfilename;
	string OAfilename;
	string ARAfilename; 
	//int choice;

	cout << "Please enter your full file path and name:  ";
	cin >> SBGfilename;
	
	map<int, Store> stores;
	Parser P;
	try
	{
		P.ParseSBG(SBGfilename, &stores);
		P.ParseCA(CAfilename, &stores);
		P.ParseOA(OAfilename, &stores);
		P.ParseARA(ARAfilename, &stores);
	}
	catch (exception ex)
	{
		cout << endl << ex.what() << endl;
	}

	string storeNum;
	
	while (true)
	{
		cout << "Enter a store number to display info or (exit): ";
		cin >> storeNum;
		if (storeNum == "exit") return 0;
		stores[stoi(storeNum)].printInfo();
	}
}