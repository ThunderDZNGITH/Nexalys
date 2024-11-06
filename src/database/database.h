#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

namespace db {
	extern const string PATH_db_employees;
	extern const string PATH_db_salaries;
	extern const string PATH_db_missingvacation;
}

void createDatabases();

#endif // DATABASE_H