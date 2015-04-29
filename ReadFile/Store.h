#include <string>

using namespace std;

class Store
{
public:
	Store();
	~Store();
	int storeNumber();
	void setStoreNumber(int s);
	void setFiscalMonth(string month);
	string getFiscalMonth();
	void setTotalPoints(int t);
	int getTotalPoints();
	void setTotalRank(int rank);
	int getTotalRank();
	void setTotServ2Trgt(double val);
	double getTotServ2Trgt();
	void setTotServ2TrgtRank(int rank);
	double getTotServ2TrgtRank();
	void setRenewRev(double renew);
	double getRenewRev();
	void setRevRank(int revRank);
	int getRevRank();
	void setNPS(double NPS);
	double getNPS();
	void setNPSRank(int NPSRank);
	int getNPSRank();
	void setUtilization(double P_Util);
	double getUtilization();
	void setATUtilization(double AT_Util);
	double getATUtilization();
	void setTT(double TT);
	double getTT();
	void set_TTRank(int TTRank);
	int get_TTRank();
	void setCertified(double cert);
	double getCertified();
	void setNPSKeepClient(double NPS_Keep) { _NPSKeepClient = NPS_Keep;  };
	double getNPSKeepClient() { return _NPSKeepClient; }
	void setNPSFollowUP(double NPS_Follow) { _NPSFollowUp = NPS_Follow; };
	double getNPSFollowUp() { return _NPSFollowUp; }
	void setAJUAppl(int AJU_Appl) { _AJUAppl = AJU_Appl; };
	int getAJUAppl() { return _AJUAppl; }
	void setAJUAttach(int AJU_Attach) { _AJUAttach = AJU_Attach; };
	int getAJUAttach() { return _AJUAttach; }
	void setAJUPercent(double AJUcent) { _AJUPercent = AJUcent; };
	double getAJUPercent() { return _AJUPercent; }
	void setAJUTT(double AJU_TT) { _AJUTT = AJU_TT; };
	double getAJUTT(){ return _AJUTT; }
	void setAJUCost(double AJUCost) { _AJUCost = AJUCost; };
	double getAJUCost() { return _AJUCost; }
	void setOverallC2S(double C2S) { _Create2Ship = C2S; };
	double getOverallC2S(){ return _Create2Ship; }
	void setServiceC2S(double ServiceC2S) { _ServiceC2S = ServiceC2S; };
	double getServiceC2S() { return _ServiceC2S; }
	void setDTVC2S(double DTVC2S) { _DTVC2S = DTVC2S; };
	double getDTVC2S() { return _DTVC2S; }
	void setUPSC2S(double USPC2S) { _UPSC2S = USPC2S; };
	double getUPSC2S() { return _UPSC2S; }
	void setRec2PU(double Rec2PU) { _Rec2PU = Rec2PU; };
	double getRec2PU() { return _Rec2PU; }
	void setStoreComp2PU(double StoreComp2PU) { _StoreComp2PU = StoreComp2PU; };
	double getStoreComp2PU() { return _StoreComp2PU; }
	void setSWTags(int SWTags) { _SWTags = SWTags; };
	int getSWTags() { return _SWTags; }
	void setSWPercent(double SWPercent) { _SWPercent = SWPercent; };
	double getSWPercent() { return _SWPercent; }
	void setJOTags(int JOTags) { _JOTags = JOTags; };
	int getJOTags(){ return _JOTags; }
	void setJOPercent(double JOPercent) { _JOPercent = JOPercent; };
	double getPercent() { return _JOPercent; }
	void printInfo();
private:
	int _storeNum;
	string _fiscalMonth;
	int _totalPoints;
	int _totalRank;
	double _totServ2Trgt;
	int _totServ2TrgtRank;
	double _renewRev;
	int _renewRevRank;
	double _nps;
	int _npsRank;
	double _utilization;
	double _atUtilization;
	double _tt;
	int _ttRank;
	double _certified;
	double _NPSKeepClient;
	double _NPSFollowUp;
	int _AJUAppl;
	int _AJUAttach;
	double _AJUPercent;
	double _AJUTT;
	double _AJUCost;
	double _Create2Ship;
	double _ServiceC2S;
	double _DTVC2S;
	double _UPSC2S;
	double _Rec2PU;
	double _StoreComp2PU;
	int _SWTags;
	double _SWPercent;
	int _JOTags;
	double _JOPercent;
};