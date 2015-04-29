#include "Parser.h"


void Parser::ParseSBG(string filename, map<int, Store>* stores)
{
	
	ifstream file;
	file.open(filename);

	if (file){
		string line;
		while (getline(file, line))
		{
			vector<string> items;
			splitString(line, ',', &items);

			if (items.size() >= 19 && items[0].substr(0, 5) == "Store"){
				int storeNum = stoi(items[0].substr(6));
				Store* s = &(*stores)[storeNum];
				if (s->storeNumber() != storeNum){
					s->setStoreNumber(storeNum);
				}
				s->setFiscalMonth(items[1]);
				s->setTotalPoints(stoi(items[2]));
				s->setTotalRank(stoi(items[3]));
				s->setTotServ2Trgt(stod(items[4]));
				s->setTotServ2TrgtRank(stoi(items[5]));
				s->setRenewRev(stod(items[6]));
				s->setRevRank(stoi(items[7]));
				s->setNPS(stod(items[8]));
				s->setNPSRank(stoi(items[9]));
				s->setUtilization(stod(items[10]));
				s->setATUtilization(stod(items[11]));
				s->setTT(stod(items[12]));
				s->set_TTRank(stoi(items[13]));
				s->setCertified(stod(items[14]));
			}


		}
	}
	else {
		string error = "File not found! - " + filename;
		throw exception(error.c_str());
	}
}
void Parser::ParseCA(string filename, map<int, Store>* stores)
{
	ifstream file;
	file.open(filename);

	if (file){
		string line;
		while (getline(file, line))
		{
			vector<string> items;
			splitString(line, ',', &items);

			if (items.size() >= 19 && items[0].substr(0, 5) == "Store"){
				int storeNum = stoi(items[0].substr(6));
				Store* s = &(*stores)[storeNum];
				if (s->storeNumber() != storeNum){
					s->setStoreNumber(storeNum);
				}
				s->setFiscalMonth(items[1]);
				s->setTotalPoints(stoi(items[2]));
				s->setTotalRank(stoi(items[3]));
				s->setTotServ2Trgt(stod(items[4]));
				s->setTotServ2TrgtRank(stoi(items[5]));
				s->setRenewRev(stod(items[6]));
				s->setRevRank(stoi(items[7]));
				s->setNPS(stod(items[8]));
				s->setNPSRank(stoi(items[9]));
				s->setUtilization(stod(items[10]));
				s->setATUtilization(stod(items[11]));
				s->setTT(stod(items[12]));
				s->set_TTRank(stoi(items[13]));
				s->setCertified(stod(items[14]));
			}


		}
	}
	else {
		string error = "File not found! - " + filename;
		throw exception(error.c_str());
	}
}

void Parser::ParseOA(string filename, map<int, Store>* stores)
{
}

void Parser::ParseARA(string filename, map<int, Store>* stores)
{
}

void Parser::splitString(string str, char delim, vector<string>* tokens)
{
	int start = 0, end = 0;
	while ((end = str.find(delim, start)) != string::npos) {
		tokens->push_back(str.substr(start, end - start));
		start = end + 1;
	}
	tokens->push_back(str.substr(start));
	return;
}
 