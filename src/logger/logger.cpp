#include "logger.h"

namespace log {
	const string PATH_logfile = "./log/latest.log";
}

void createLogFile() {
	if (!fs::exists("./log")) {
        cout << "Le répertoire './log/' n'existe pas. Création du répertoire..." << endl;
        if (!fs::create_directory("./log")) {
            cerr << "Erreur lors de la création du répertoire './log/'" << endl;
            return;
        }
    }

	ifstream IF_Log(log::PATH_logfile);

	if(!IF_Log) {
		cout << "La base de données '"<<log::PATH_logfile<<"' n'existe pas. Création de cette dernière." << endl;
		ofstream OF_Log(log::PATH_logfile);
		OF_Log << "";
		OF_Log.close();
	} else {
		cout << "La base de données '"<<log::PATH_logfile<<"' existe." << endl;
	}
}

void updateLog(logType type, string data) {
	ofstream OF_Log(log::PATH_logfile, std::ios_base::app);

	// This is a date_time in UTC
    std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();

    // This is a date in UTC
    auto tp_days = std::chrono::time_point_cast<std::chrono::duration<int, std::ratio<86400>>>(tp);

    // This is a time in UTC
    auto tod = tp - tp_days;

    // This is how to separate a duration into {h, m, s}
    auto h = std::chrono::duration_cast<std::chrono::hours>(tod);
    tod -= h;
    auto m = std::chrono::duration_cast<std::chrono::minutes>(tod);
    tod -= m;
    auto s = std::chrono::duration_cast<std::chrono::seconds>(tod);

    string time = "UTC " + std::to_string(h.count()) + ":" + std::to_string(m.count()) + ":" + to_string(s.count());

	switch(type) {
	case information:
		OF_Log << time << " - [INFO] >> " << data << endl;;
		break;
	case warning:
		OF_Log << time << " - [WARNING] >> " << data << endl;
		break;
	case error:
		OF_Log << time << " - [ERROR] >> " << data << endl;
		break;
	}
}