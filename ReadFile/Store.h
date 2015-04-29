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
	double getJOPercent() { return _JOPercent; }
	void setNPSTrouble(double NPSTrouble) { _NPSTrouble = NPSTrouble; };
	double getNPSTrouble() { return _NPSTrouble; }
	void setNPSDemo(double NPSDemo) { _NPSDemo = NPSDemo; };
	double getNPSDemo() { return _NPSDemo; }
	void setNPSKnow(double NPSKnow) { _NPSKnow = NPSKnow; };
	double getNPSKnow(){ return _NPSKnow; }
	void setNOVAUse(double NOVAUse) { _NOVAUse = NOVAUse; };
	double getNOVAUse(){ return _NOVAUse; }
	void setTotRenew(double TotRenew) { _TotRenew = TotRenew; };
	double getTotRenew() { return _TotRenew; }
	void setTotRenewGoal(double TotRenewGoal) { _TotRenewGoal = TotRenewGoal; };
	double getTotRenewGoal() { return _TotRenewGoal; }
	void setTotRenewPercent(double TotRenewPercent) { _TotRenewPercent = TotRenewPercent; };
	double getTotRenewPercent() { return _TotRenewPercent; }
	void setRenew81Mix(double Renew81Mix) { _Renew81Mix = Renew81Mix; };
	double getRenew81Mix() { return _Renew81Mix; }
	void setRenew404Mix(double Renew404Mix) { _Renew404Mix = Renew404Mix; };
	double getRenew404Mix() { return _Renew404Mix; }
	void setShip2CTake(double Ship2CTake) { _Ship2CTake = Ship2CTake; };
	double getShip2CTake() { return _Ship2CTake; }
	void setShip2CElig(int Ship2CElig) { _Ship2CElig = Ship2CElig; };
	int getShip2CElig(){ return _Ship2CElig; }
	void setDBU2GSTS(double DBU2GSTS) { _DBU2GSTS = DBU2GSTS; };
	double getDBU2GSTS(){ return _DBU2GSTS; }
	void setNewPCAttach(double NewPCAttach) { _NewPCAttach = NewPCAttach; };
	double getNewPCAttach() { return _NewPCAttach; }
	void setGSTSAttach(double GSTSAttach) { _GSTSAttach = GSTSAttach; };
	double getGSTSAttach(){ return _GSTSAttach; }
	void setSetupAttach(double SetupAttach) { _SetupAttach = SetupAttach; };
	double getSetupAttach(){ return _SetupAttach; }
	void setRestoreAttach(double RestoreAttach){ _RestoreAttach = RestoreAttach; };
	double getRestoreAttach(){ return _RestoreAttach; }
	void setTotServAttach(double TotServAttach) { _TotServAttach = TotServAttach; };
	double getTotServAttach(){ return _TotServAttach; }
	void setNPSTT(double NPSTT){ _NPSTT = NPSTT; };
	double getNPSTT(){ return _NPSTT; }
	void setNPSServQual(double NPSServQual){ _NPSServQual = NPSServQual; };
	double getNPSServQual() { return _NPSServQual; }
	void setRenewTT(double RenewTT){ _RenewTT = RenewTT; };
	double getRenewTT() { _RenewTT; }
	void setNewTT(double NewTT){ _NewTT = NewTT; };
	double getNewTT() { return _NewTT; }
	void setSOOlder2(int SOOlder2){ _SOOlder2 = SOOlder2; };
	int getSOOlder2() { return _SOOlder2; }
	void setSOOlder7(int SOOlder7){ _SOOlder7 = SOOlder7; };
	int getSOOlder7() { return _SOOlder7; }
	void setHP2StoreTT(double HP2StoreTT){ _HP2StoreTT = HP2StoreTT; };
	double getHP2StoreTT() { return _HP2StoreTT; }
	void setHP2StoreCmplt(int HP2StoreCmplt){ _HP2StoreCmplt = HP2StoreCmplt; };
	int getHP2StoreCmplt() { return _HP2StoreCmplt; }
	void setHP2StoreServ(int HP2StoreServ){ _HP2StoreServ = HP2StoreServ; };
	int getHP2StoreServ(){ return _HP2StoreServ; }
	void setHP2StoreSucc(double HP2StoreSucc){ _HP2StoreSucc = HP2StoreSucc; };
	double getHP2StoreSucc(){ return _HP2StoreSucc; }
	void setGSPPhone(double GSPPhone){ _GSPPhoneScreen = GSPPhone; };
	double getGSPPhone(){ return _GSPPhoneScreen; }
	void setTotalTags(int TotalTags){ _TotalTags = TotalTags; };
	int getTotalTags(){ _TotalTags; }
	void setCmpltsPerDay(double CmpltsPerDay){ _CmpltsPerDay = CmpltsPerDay; };
	double getCmpltsPerDay(){ return _CmpltsPerDay; }
	void setGSPSO(double GSPSO){ _GSPSO = GSPSO; };
	double getGSPSO() { return _GSPSO; }
	void setCODSO(double CODSO){ _CODSO = CODSO; };
	double getCODSO(){ return _CODSO; }
	void setGSTSSO(double GSTSSO){ _GSTSSO = GSTSSO; };
	double getGSTSSO(){ return _GSTSSO; }
	void setStoreRedo(double StoreRedo){ _StoreRedo = StoreRedo; };
	double getStoreRedo(){ return _StoreRedo; }
	void setOtherRedo(double OtherRedo){ _OtherRedo = OtherRedo; };
	double getOtherRedo(){ return _OtherRedo; }
	void setClientRedo(double CllientRedo){ _ClientRedo = CllientRedo; };
	double getClientRedo(){ _ClientRedo; }
	void setAgentRedo(double AgentRedo){ _AgentRedo = AgentRedo; };
	double getAgentRedo(){ return _AgentRedo; }
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
	double _NPSTrouble;
	double _NPSDemo;
	double _NPSKnow;
	double _NOVAUse;
	double _TotRenew;
	double _TotRenewGoal;
	double _TotRenewPercent;
	double _Renew81Mix;
	double _Renew404Mix;
	double _Ship2CTake;
	int _Ship2CElig;
	double _DBU2GSTS;
	double _NewPCAttach;
	double _GSTSAttach;
	double _SetupAttach;
	double _RestoreAttach;
	double _TotServAttach;
	double _NPSTT;
	double _NPSServQual;
	double _RenewTT;
	double _NewTT;
	int _SOOlder2;
	int _SOOlder7;
	double _HP2StoreTT;
	int _HP2StoreCmplt;
	int _HP2StoreServ;
	double _HP2StoreSucc;
	double _GSPPhoneScreen;
	int _TotalTags;
	double _CmpltsPerDay;
	double _GSPSO;
	double _CODSO;
	double _GSTSSO;
	double _StoreRedo;
	double _OtherRedo;
	double _ClientRedo;
	double _AgentRedo;
};