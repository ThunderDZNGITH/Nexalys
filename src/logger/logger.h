#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <chrono>

using namespace std;
namespace fs = std::filesystem;

/**
 * @brief Namespace with some PATH definition.
 **/
namespace log {
	extern const string PATH_logfile;
};

/**
 * @brief Enumeration of log types.
 **/
enum logType {
	information,
	warning,
	error
};

/**
 * @brief Create log file.
 **/
void createLogFile();

/**
 * @brief Update log file with a new entry.
 * @param type Type of log entry.
 * @param data Data to add.
 **/
void updateLog(logType type, string data);

#endif // LOGGER_H