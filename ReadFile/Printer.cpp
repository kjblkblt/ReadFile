#include "Printer.h"


void Printer::sortAndPrint(string filename, map<int, Store>* stores)
{
	vector<pair<int, Store> > pairList(stores->begin(), stores->end());
	vector<Store> storeList;
	for (int i = 0; i < pairList.size(); i++)
	{
		storeList.push_back(pairList[i].second);
	}
	

	cout << "How would you like to sort? " << endl;
	cout << "1. Revenue" << endl;
	cout << "2. NPS" << endl;
	int option;
	cin >> option;

	switch (option)
	{
	case 1:
		sort(storeList.begin(), storeList.end(), Store::RevenueComparator);
		break;
	case 2:
		sort(storeList.begin(), storeList.end(), Store::NPSComparator);
		break;
	default:
		sort(storeList.begin(), storeList.end(), Store::StoreComparator);
		break;
	}
	print(&storeList, filename);
}

void Printer::print(vector<Store>* list, string filename)
{
	ofstream file;
	file.open(filename);
	file << "Store,  Rank, Revenue, NPS, Turn Time" << endl;
	for (int i = 0; i < list->size(); i++)
	{
		Store s = (*list)[i];
		file << s.storeNumber() << ",";
		file << s.getTotalRank() << ",";
		file << s.getRevRank() << ",";
		file << s.getNPSRank() << ",";
		file << s.get_TTRank() << endl;


	}
	file.close();
}