#include <string.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include "Store.h"
#include <fstream>

using namespace std;

class Printer
{
public:
	void sortAndPrint(string filename, map<int, Store>* stores);
private:
	void print(vector<Store>* list, string filename);
};