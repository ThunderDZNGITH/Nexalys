#include <iostream>
#include "database/database.h"
#include "logger/logger.h"

using namespace std;

void initHeader() {
	cout << "---------------- NEXALYS ----------------" << endl;
	cout << "|         Version : InDev v1.0		|" << endl;
	cout << "|         Author  : ThunderDZN	        |" << endl;
	cout << "|					|" << endl;
	cout << "|	  Launching Nexalys...		|" << endl;
	cout << "-----------------------------------------" << endl;
}

int main() {

	initHeader();

	createDatabases();
	createLogFile();
	updateLog(logType::information, "TEST");
	updateLog(logType::warning, "TEST");
	updateLog(logType::error, "TEST");

	return 0;
}