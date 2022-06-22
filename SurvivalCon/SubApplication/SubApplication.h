#pragma once
#include "../Define/Define.h"

class SubApplication {
	void _parse_symbols();
public:
	enum subapplication_enum {
		parse_symbols
	};

	SubApplication(subapplication_enum enumir);
};
#include "SubApplication.cpp"
