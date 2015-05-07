#include <iostream>;
#include <map>;
#include "Store.h"
using namespace std;

/**Comparators!**/
bool Store::RevenueComparator(const Store& c1, const Store& c2)
{
	return c1._renewRev > c2._renewRev;
}
bool Store::NPSComparator(const Store& c1, const Store& c2)
{
	return c1._nps > c2._nps;
}
bool Store::StoreComparator(const Store& c1, const Store& c2)
{
	return c1._totalRank > c2._totalRank;
}

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


void Store::printSBG()
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

//OA file print
void Store::printOA()
{
	std::cout << "Store " << _storeNum << endl;
	std::cout << "-------------------------" << endl;
	std::cout << "NPS Keeping Client Informed: " << _NPSKeepClient << "%"<< endl;
	std::cout << "NPS Client Follow Up: " << _NPSFollowUp << "%" << endl;
	std::cout << "AJU Applicable Suspects: " << _AJUAppl << endl;
	std::cout << "AJU Attached Suspects: " << _AJUAttach << endl;
	std::cout << "AJU % Connected: " << _AJUPercent << "%" << endl;
	std::cout << "AJU Turn Time: " << _AJUTT << " Days" << endl;
	std::cout << "Cost Of Each Suspect On AJU: $" << _AJUCost << endl;
	std::cout << "Create to Ship Turn Time: " << _Create2Ship << " Days" << endl;
	std::cout << "Service: Create to Ship Turn Time : " << _ServiceC2S << " Days" << endl;
	std::cout << "DTV: Create to Ship Turn Time: " << _DTVC2S << " Days" << endl;
	std::cout << "UPS: Create to Ship Turn Time: " << _UPSC2S << " Days" << endl;
	std::cout << "Receive to Pick Up Turn Time: " << _Rec2PU << " Days" << endl;
	std::cout << "In-Store Complete to Pick Up Turn Time: " << _StoreComp2PU << " Days" << endl;
	std::cout << "Store Warranty Service Orders: " << _SWTags << endl;
	std::cout << "Store Warranty Service Orders (Percentage): " << _SWPercent << "%" << endl;
	std::cout << "Junk Out Service Orders: " << _JOTags << endl;
	std::cout << "Junk Out Service Orders (Percentage): " << _JOPercent << endl;

	std::cout << "-------------------------" << endl;
}

//CA
void Store::printCA()
{
	std::cout << "Store " << _storeNum << endl;
	std::cout << "-------------------------" << endl;
	std::cout << "NPS Troubleshooting: " << _NPSTrouble << "%" << endl;
	std::cout << "NPS Demonstration: " << _NPSDemo << "%" << endl;
	std::cout << "NPS Agent Knowledge: " << _NPSKnow << "%" << endl;
	std::cout << "NOVA Usage: " << _NOVAUse << "%" << endl;
	std::cout << "Total Renew Revenue:  $" << _TotRenew << endl;
	std::cout << "Renew Revenue Monthly Goal:  $" << _TotRenewGoal << endl;
	std::cout << "Renew Revenue Monthly Percent to Goal: " << _TotRenewPercent << "%" << endl;
	std::cout << "Renew Revenue Mix (Class 81): " << _Renew81Mix << "%" << endl;
	std::cout << "Renew Revenue Mix (Class 404) : " << _Renew404Mix << "%" << endl;
	std::cout << "Ship to Client (Take Rate): " << _Ship2CTake << endl;
	std::cout << "Ship to Client (Eligible): " << _Ship2CElig << endl;
	std::cout << "Back Up to Tech Support Attach: " << _DBU2GSTS << "%" << endl;
	std::cout << "Services New PC Attach: " << _NewPCAttach << "%" << endl;
	std::cout << "Tech Support Attach to New PC: " << _GSTSAttach << "%" << endl;
	std::cout << "Set Up New PC Attach: " << _SetupAttach << "%" << endl;
	std::cout << "Restore New PC Attach: " << _RestoreAttach << "%" << endl;
	std::cout << "Total Services New PC Attach: " << _TotServAttach << "%" << endl;

	std::cout << "-------------------------" << endl;
}

//ARA
void Store::printARA()
{
	std::cout << "Store " << _storeNum << endl;
	std::cout << "-------------------------" << endl;
	std::cout << "NPS Turn Time: " << _NPSTT << "%" << endl;
	std::cout << "NPS Service Quality: " << _NPSServQual << "%" << endl;
	std::cout << "In Store Turn Time: " << _InstoreTT << " Days" << endl;
	std::cout << "Renew Turn Time: " << _RenewTT << "Days" << endl;
	std::cout << "New PC Turn Time: " << _NewTT << " Days" << endl;
	std::cout << "Service Orders Older than 2 days: " << _SOOlder2 << " Service Orders" << endl;
	std::cout << "Service Orders Older than 7 days:  " << _SOOlder7 << " Service Orders" << endl;
	std::cout << "HP Parts to Store Turn Time: " << _HP2StoreTT << " Days" << endl;
	std::cout << "HP Parts to Store Completed: " << _HP2StoreCmplt << endl;
	std::cout << "HP Parts to Store Sent to Service: " << _HP2StoreServ << endl;
	std::cout << "HP Parts to Store Success Rate: " << _HP2StoreSucc << "%" << endl;
	std::cout << "GSP Phone Screen Replacements: " << _GSPPhoneScreen << endl;
	std::cout << "Total Completed Service Orders: " << _TotalTags << endl;
	std::cout << "Average Completed Service Orders Per Day: " << _CmpltsPerDay << endl;
	std::cout << "GSP Service Orders: " << _GSPSO << "%" << endl;
	std::cout << "COD Service Orders: " << _CODSO << "%" << endl;
	std::cout << "Tech Support Service Orders: " << _GSTSSO << "%" << endl;
	std::cout << "Store Identified Redo's: " << _StoreRedo << "%" << endl;
	std::cout << "Total Number of Redo's: " << _Redo << endl;
	std::cout << "Geek Squad Tech Support Redo: " << _GSTSRedo << "%" << endl;
	std::cout << "Other Redo's: " << _OtherRedo << "%" << endl;
	std::cout << "Client Identified Redo's: " << _ClientRedo << "%" << endl;

	std::cout << "-------------------------" << endl;
}