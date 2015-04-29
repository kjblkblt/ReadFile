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
	void set


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
	double _StoreRec2PU;
	int _SWTags;
	double _SWPercent;
	int _JOTags;
	double _JOPercent;
};