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
void Parser::ParseOA(string filename, map<int, Store>* stores)
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
				s->setNPSKeepClient(stod(items[1]));
				s->setNPSFollowUP(stod(items[2]));
				s->setAJUAppl(stoi(items[3]));
				s->setAJUAttach(stoi(items[4]));
				s->setAJUPercent(stod(items[5]));
				s->setAJUTT(stod(items[6]));
				s->setAJUCost(stod(items[7]));
				s->setOverallC2S(stod(items[8]));
				s->setServiceC2S(stod(items[9]));
				s->setDTVC2S(stod(items[10]));
				s->setUPSC2S(stod(items[11]));
				s->setRec2PU(stod(items[12]));
				s->setStoreComp2PU(stod(items[13]));
				s->setSWTags(stoi(items[14]));
				s->setSWPercent(stod(items[15]));
				s->setJOTags(stoi(items[16]));
				s->setJOPercent(stod(items[17]));
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
				s->setNPSTrouble(stod(items[1]));
				s->setNPSDemo(stod(items[2]));
				s->setNPSKnow(stod(items[3]));
				s->setNOVAUse(stod(items[4]));
				s->setTotRenew(stod(items[5]));
				s->setTotRenewGoal(stod(items[6]));
				s->setTotRenewPercent(stod(items[7]));
				s->setRenew81Mix(stod(items[8]));
				s->setRenew404Mix(stod(items[9]));
				s->setShip2CTake(stod(items[10]));
				s->setShip2CElig(stoi(items[11]));
				s->setDBU2GSTS(stod(items[12]));
				s->setNewPCAttach(stod(items[13]));
				s->setGSTSAttach(stod(items[14]));
				s->setSetupAttach(stod(items[15]));
				s->setRestoreAttach(stod(items[16]));
				s->setTotServAttach(stod(items[17]));
			}
		}
	}
	else {
		string error = "File not found! - " + filename;
		throw exception(error.c_str());
	}
}

void Parser::ParseARA(string filename, map<int, Store>* stores)
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
				s->setNPSTT(stod(items[1]));
				s->setNPSServQual(stod(items[2]));
				s->setRenewTT(stod(items[3]));
				s->setNewTT(stod(items[4]));
				s->setSOOlder2(stoi(items[5]));
				s->setSOOlder7(stoi(items[6]));
				s->setHP2StoreTT(stod(items[7]));
				s->setHP2StoreCmplt(stoi(items[8]));
				s->setHP2StoreServ(stoi(items[9]));
				s->setHP2StoreSucc(stod(items[10]));
				s->setGSPPhone(stod(items[11]));
				s->setTotalTags(stoi(items[12]));
				s->setCmpltsPerDay(stod(items[13]));
				s->setGSPSO(stod(items[14]));
				s->setCODSO(stod(items[15]));
				s->setGSTSSO(stod(items[16]));
				s->setStoreRedo(stod(items[17]));
				s->setOtherRedo(stod(items[18]));
				s->setClientRedo(stod(items[19]));
				s->setAgentRedo(stod(items[20]));
			}
		}
	}
	else {
		string error = "File not found! - " + filename;
		throw exception(error.c_str());
	}
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
 