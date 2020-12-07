#include "fun.h"
#include <iostream>
#include <fstream>
void save(hero* h)
{
	std::ofstream n;
	n.open("save.txt");
	n <<h->agt<<" "<<h->inl<<" "<<h->str;
	n.close();
}
void load(hero* h) {
	std::ifstream n;
	n.open("save.txt");
	n >> h->agt >> h->inl >> h->str;
	h->calculate_hp();
	h->show_stats();
}