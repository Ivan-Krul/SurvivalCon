#include "SubApplication.h"

void SubApplication::_parse_symbols() {
	#include <iostream>
	size_t size;

	#ifdef UNICODE
	size = WCHAR_MAX;
	#else
	size = CHAR_MAX;
	#endif

	for(size_t i = 0; i <= size; i++) {
		if(i == 27) continue;
		#ifdef UNICODE
		std::wcout << i << " : [" << static_cast<wchar_t>(i) << "]\n";
		#else
		std::cout << i << " : [" << static_cast<char>(i) << "]\n";
		#endif

	}
}

SubApplication::SubApplication(subapplication_enum enumir) {
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
