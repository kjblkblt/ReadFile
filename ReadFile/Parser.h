#include "Store.h"
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

class Parser 
{
public:
	void ParseSBG (string filename, map<int, Store>* stores);
	void ParseCA (string filename, map<int, Store>* stores);
	void ParseOA(string filename, map<int, Store>* stores);
	void ParseARA(string filename, map<int, Store>* stores);

private:
	void splitString(string str, char delim, vector<string>* tokens);
};