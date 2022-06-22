#pragma once
#include <string>

class ISubApp {
protected:
	size_t _memsize = 0;
	std::string _name = "[ISubApp]";
public:
	virtual void init() = 0;

	virtual void reset_memorysize() = 0;
	size_t memorysize();
	std::string name();

	virtual void finit() = 0;
};
#include "ISubApp.cpp"
