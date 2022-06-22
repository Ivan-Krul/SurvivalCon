﻿// SurvivalCon.cpp: определяет точку входа для приложения.
//

#include "Define/Define.h"
#include "SubApplication/SubApplication.h"

int main()
{
	mainlog.init("main");
	mainlog.get("main() has started\n");

	SubApplication subapp(SubApplication::parse_symbols);

	mainlog.get("main() has ended up\n");
	return 0;
}
