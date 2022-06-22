// SurvivalCon.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include "Define/Define.h"

int main()
{
	mainlog.init("main");
	mainlog.get("main() has started\n");

	mainlog.get("main() has ended up\n");
	return 0;
}
