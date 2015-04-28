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

private:
	void splitString(string str, char delim, vector<string>* tokens);
};