#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <thread>
#include "../Define/Define.h"

#pragma warning(disable : 4996)

extern int log_count = 0;

using namespace std::literals;
//#define LOG_DELAY 1ms


class Logger {
protected:
	void _colontitle_head(std::ostream& out, time_t now);
	void _colontitle_foot(std::ostream& what, time_t now);
public:
	virtual void init(std::string name) = 0;
	virtual void finit() = 0;
};

#include "Logger.cpp"
#include "ConsoleLogger/ConsoleLogger.h"
#include "FileLogger/FileLogger.h"

#define LOGGER FileLogger

static LOGGER mainlog;
