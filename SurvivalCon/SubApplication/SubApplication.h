#pragma once
#include "../Define/Define.h"
#include "ISubApp/ISubApp.h"

// launcher of subapplications
class SubApplication {
	void _parse_symbols();
	ISubApp* _hold;
public:
	enum subsimpleapplication_enum {
		parse_symbols
	};

	SubApplication(subsimpleapplication_enum enumir);
	SubApplication(ISubApp* subapp);

	void out_memsize();
	void out_name();
	void cycle();

	~SubApplication();
};
#include "SubApplication.cpp"
