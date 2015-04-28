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
};