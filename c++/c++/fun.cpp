#include "fun.h"
#include <iostream>
#include <fstream>
void save()
{
	std::ofstream n;
	n.open("save.txt");
	n << "HELLO!";
	n.close();
}
