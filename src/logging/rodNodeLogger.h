/**
 * @file rodNodeLogger.h
 * @author Andrew
 * @brief 
 * @version 0.1
 * @date 2023-12-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef RODNODE_LOGGER_H
#define RODNODE_LOGGER_H

#include "worldLogger.h"


class rodNodeLogger : public worldLogger {
public:
    rodNodeLogger(string logfile_base, ofstream& df, int per);
    rodNodeLogger(string logfile_base, string logfile_suffix, ofstream& df, int per);
    ~rodNodeLogger();
private:
    string getLogHeader() override;
    string getLogData() override;
};


#endif
