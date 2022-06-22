#include "SubApplication.h"

void SubApplication::_parse_symbols() {
	#include <iostream>
	size_t size = CHAR_MAX;

	for(size_t i = 0; i <= size; i++) {
		if(i == 27) continue;
		std::cout << i << " : [" << static_cast<char>(i) << "]\n";
	}
}

SubApplication::SubApplication(subsimpleapplication_enum enumir) {
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
