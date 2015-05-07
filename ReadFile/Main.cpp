#include <iostream>
#include "Printer.h"
#include <string>
#include <fstream>
#include "Parser.h"
using namespace std;


int requestStoreNumber();
string requestFileName();

int main()
{
	string storeNum;
	string SBGfilename;
	string CAfilename;
	string OAfilename;
	string ARAfilename; 
	int choice;

	cout << "Please enter your full file path and file name for the Service Business Guide scorecard:  " << endl;
	cin >> SBGfilename;
	cout << "Please enter your full file path and file name for the Consultation Agent scorecard:  " << endl;
	cin >> CAfilename;
	cout << "Please enter your full file path and file name for the Operations Agent scorecard:  " << endl;
	cin >> OAfilename;
	cout << "Please enter your full file path and file name for the Advanced Repair Agent scorecard:  " << endl;
	cin >> ARAfilename;
	system("cls");

	

	
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
	Printer p;
	while (true)
	{
		//display menu
		cout << "    Chose which file you would like to see?" << endl;
		cout << " 1. Services Budiness Guide (Overal scorecard for quick refrence)." << endl;
		cout << " 2. Consultation Agent Report." << endl;
		cout << " 3. Operations Agent Report." << endl;
		cout << " 4. Advanced Repair Agent Report." << endl;
		cout << " 5. Output: Rank, Revenue, NPS, and Turn Time for all store to file. " << endl;
		cout << " 6. End Program...Goodbye!" << endl;
		cin >> choice;

		Store s;
		switch (choice)
		{
		case 1:
			s = stores[requestStoreNumber()];
			s.printSBG();
			break;
		case 2:
			s = stores[requestStoreNumber()];
			s.printCA();
			break;
		case 3:
			s = stores[requestStoreNumber()];
			s.printOA();
			break;
		case 4:
			s = stores[requestStoreNumber()];
			s.printARA();
			break;
		case 5:
			p.sortAndPrint(requestFileName(), &stores);
			break;
		case 6:
			exit (0);
		}
	}
}

int requestStoreNumber()
{
	cout << "Please enter a store number. " << endl;
	int num;
	cin >> num;
	return num;
}

string requestFileName()
{
	cout << "Please enter a file name for output. " << endl;
	string filename;
	cin >> filename;
	return filename;
}

/*while (true)
{
	cout << "Enter a store number to display info or (exit): ";
	cin >> storeNum;
	if (storeNum == "exit") return 0;
	stores[stoi(storeNum)].printInfo();
}*/