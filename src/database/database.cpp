#include "database.h"

namespace db {
    const string PATH_db_employees = "./db/employees.db";
    const string PATH_db_salaries = "./db/salaries.db";
    const string PATH_db_missingvacation = "./db/missingvacation.db";
}

void createDatabases() {

	if (!fs::exists("./db")) {
        cout << "Le répertoire './db/' n'existe pas. Création du répertoire..." << endl;
        if (!fs::create_directory("./db")) {
            cerr << "Erreur lors de la création du répertoire './db/'" << endl;
            return;
        }
    }

	ifstream IF_Employees(db::PATH_db_employees);
	ifstream IF_Salaries(db::PATH_db_salaries);
	ifstream IF_MissingVacation(db::PATH_db_missingvacation);

	if(!IF_Employees) {
		cout << "La base de données '"<<db::PATH_db_employees<<"' n'existe pas. Création de cette dernière." << endl;
		ofstream OF_Employees(db::PATH_db_employees);
		OF_Employees << "";
		OF_Employees.close();
	} else {
		cout << "La base de données '"<<db::PATH_db_employees<<"' existe." << endl;
	}

	if(!IF_Salaries) {
		cout << "La base de données '"<<db::PATH_db_salaries<<"' n'existe pas. Création de cette dernière." << endl;
		ofstream OF_Salaries(db::PATH_db_salaries);
		OF_Salaries	<< "";
		OF_Salaries.close();
	} else {
		cout << "La base de données '"<<db::PATH_db_salaries<<"' existe." << endl;
	}

	if(!IF_MissingVacation) {
		cout << "La base de données '"<<db::PATH_db_missingvacation<<"' n'existe pas. Création de cette dernière." << endl;
		ofstream OF_MissingVacation(db::PATH_db_missingvacation);
		OF_MissingVacation << "";
		OF_MissingVacation.close();
	} else {
		cout << "La base de données '"<<db::PATH_db_missingvacation<<"' existe." << endl;
	}
}

void addData(databaseType db, string data) {
	switch(db){
	case DB_Employees:
		break;
	case DB_Salaries:
		break;
	case DB_Missingvacation:
		break;
	case default:
		break;
	}
}