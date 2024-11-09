#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include <iostream>
#include <string>

using namespace std;
/**
 * @brief Struct who define an employee object.
 **/
struct employee {
	int id;						// ID of employee.
	string firstname;			// First Name.
	string lastname;			// Last Name.
	string address;				// Home address.
	string phonenbr;			// Phone number.
	string posistion;			// Position within the company.
	string departement;			// Departement within the company.
	string contracttype;		// Contract Type.
};


/**
 * @brief Enum of alls infos types.
 **/
enum infoTypes {
	firstname,
	lastname,
	address,
	phonenbr,
	posistion,
	departement,
	contracttype
};

/**
 * @brief Create an employee object.
 * @param id ID of the new employee.
 * @param firstname.
 * @param lastname.
 * @param address.
 * @param phonenbr.
 * @param position.
 * @param departement.
 * @param contracttype.
 **/
void createEmployee(int id, string firstname, string lastname, string address, string phonenbr, string posistion, string departement, string contracttype);

/**
 * @brief Delete an employee object.
 * @param id ID of employee.
 **/
void deleteEmployee(int id);

/**
 * @brief Get employee informations.
 * @param id ID of employee.
 * @return employee infos.
 **/
employee getEmployeeInfos(int id);

/**
 * @brief Set new employee infos.
 * @param id ID of employee.
 * @param type Type of data to update.
 * @param newValue The new value.
 **/
void setEmployeeInfos(int id, infoTypes type, string newValue);

#endif // EMPLOYEES_H