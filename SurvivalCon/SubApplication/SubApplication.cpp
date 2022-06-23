#include "SubApplication.h"

void SubApplication::_parse_symbols() {
	mainlog.get("SubApplication::_parse_symbols()\n");
	size_t size = CHAR_MAX;

	for(size_t i = 0; i <= size; i++) {
		if(i == 27) continue;
		mainlog.get(i);
		mainlog.get("\t: [");
		mainlog.get(static_cast<char>(i));
		mainlog.get("]\n");
	}
}

SubApplication::SubApplication(subsimpleapplication_enum enumir) {
	mainlog.get("SubApplication has started as enum\n");
	_hold = nullptr;
	switch(enumir) {
		case SubApplication::parse_symbols:
			#ifdef CONMODE
			_parse_symbols();
			#endif
			break;
		default:
			break;
	}
}

SubApplication::SubApplication(ISubApp* subapp) {
	mainlog.get("SubApplication has started as ISubApp\n");
	_hold = subapp;
}

void SubApplication::out_memsize() {
	mainlog.get("SubApplication::out_memsize() -> ");
	if(_hold != nullptr)
		mainlog.get(_hold->memorysize());
	else {
		mainlog.get("0000000000000000");
		mainlog.get(address());
	}

	mainlog.get("\n");
}

void SubApplication::out_name() {
	mainlog.get("SubApplication::out_name() -> ");
	if(_hold != nullptr)
		mainlog.get(_hold->name());
	else {
		mainlog.get("0000000000000000");
		mainlog.get(address());
	}

	mainlog.get("\n");
}

void SubApplication::cycle() {
	mainlog.get("SubApplication::cycle()\n");
	_hold->cycle();
}

SubApplication::~SubApplication() {
	mainlog.get("SubApplication has ended up\n");
	delete _hold;
}
