#pragma once
#include "../Logger/Logger.h"
#define CONMODE // console mode

#ifdef CONMODE
#include <iostream>
#else
#include <stdio.h>
#endif

const char* address() {
	return "(A)";
}
