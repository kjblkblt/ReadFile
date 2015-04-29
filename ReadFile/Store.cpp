#include <iostream>;
#include <map>;
#include "Store.h"
using namespace std;

Store::Store()
{
}
Store::~Store()
{
}
int Store::storeNumber()
{
	return _storeNum;
}
void Store::setStoreNumber(int s)
{
	_storeNum = s;
}
void Store::setFiscalMonth(string month)
{
	_fiscalMonth = month;
}
string Store::getFiscalMonth()
{
	return _fiscalMonth;
}

void Store::setTotalPoints(int t)
{
	_totalPoints = t;
}

int Store::getTotalPoints()
{
	return _totalPoints;
}

void Store::setTotalRank(int rank)
{
	_totalRank = rank;
}

int Store::getTotalRank()
{
	return _totalRank;
}

void Store::setTotServ2Trgt(double val)
{
	_totServ2Trgt = val;
}
double Store::getTotServ2Trgt()
{
	return _totServ2Trgt;
}
void Store::setTotServ2TrgtRank(int rank)
{
	_totServ2TrgtRank = rank;
}
double Store::getTotServ2TrgtRank()
{
	return _totServ2TrgtRank;
}	
void Store::setRenewRev(double renewrev)
{
	_renewRev = renewrev;
}
double Store::getRenewRev()
{
	return _renewRev;
}
void Store::setRevRank(int RevRank)
{
	_renewRevRank = RevRank;
}
int Store::getRevRank()
{
	return _renewRevRank;
}
void Store::setNPS(double NPS)
{
	_nps = NPS;
}
double Store::getNPS()
{
	return _nps;
}
void Store::setNPSRank(int NPSRank)
{
	_npsRank = NPSRank;
}
int Store::getNPSRank()
{
	return _npsRank;
}
void Store::setTT(double TT)
{
	_tt = TT;
}
double Store::getTT()
{
	return _tt;
}
void Store::set_TTRank(int TTRank)
{
	_ttRank = TTRank;
}
int Store::get_TTRank()
{
	return _ttRank;
}
void Store::setUtilization(double Comb_Util)
{
	_utilization = Comb_Util;
}
double Store::getUtilization()
{
	return _utilization;
}
void Store::setATUtilization(double ATUtil)
{
	_atUtilization = ATUtil;
}
double Store::getATUtilization()
{
	return _atUtilization;
}
void Store::setCertified(double cert)
{
	_certified = cert;
}
double Store::getCertified()
{
	return _certified;
}


void Store::printInfo()
{
	std::cout << "Store " << _storeNum << endl;
	std::cout << "-------------------------" << endl;
	std::cout << "Fiscal Month: " << _fiscalMonth << endl;
	std::cout << "Total Points: " << _totalPoints << endl;
	std::cout << "Total Rank: " << _totalRank << endl;
	std::cout << "TotalServe2Target: " << _totServ2Trgt << "%" << endl;
	std::cout << "TotalServe2TargetRank: " << _totServ2TrgtRank << endl;
	std::cout << "Renew Revenue: " << _renewRev << "%" << endl;
	std::cout << "Renew Revenue Rank: " << _renewRevRank << endl;
	std::cout << "NPS: " << _nps << "%" << endl;
	std::cout << "NPS Rank: " << _npsRank << endl;
	std::cout << "Utilization: " << _utilization << "%" << endl;
	std::cout << "AT Utilization: " << _atUtilization << "%" << endl;
	std::cout << "Turn Time: " << _tt << " days" << endl;
	std::cout << "Turn Time Rank: " << _ttRank << endl;
	std::cout << "Certified: " << _certified << "%" << endl;

	std::cout << "-------------------------" << endl;

}