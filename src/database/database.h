#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

/**
 * @brief Namespace with some PATH definition.
 **/
namespace db {
	extern const string PATH_db_employees;			//	PATH for EMPLOYEES database.
	extern const string PATH_db_salaries;			//	PATH for SALARIES database.
	extern const string PATH_db_missingvacation;	//	PATH for MISSINGVACATION database.
}

/**
 * @brief Enum of the different databases.
 **/
enum databaseType {
	DB_Employees,
	DB_Salaries,
	DB_Missingvacation
};

/**
 * @brief Create alla databases files.
 **/
void createDatabases();

/**
 * @brief Add data to the specified database.
 * @param db Database where we add data.
 * @param data Data we add to the db.
 **/
void addData(databaseType db, string data);

#endif // DATABASE_H