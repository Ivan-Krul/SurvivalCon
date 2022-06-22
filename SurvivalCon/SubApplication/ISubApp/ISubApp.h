#pragma once

class ISubApp {
protected:
	size_t _memsize;
public:
	virtual void init() = 0;

	size_t memorysize();

	virtual void finit() = 0;
};
#include "ISubApp.cpp"
