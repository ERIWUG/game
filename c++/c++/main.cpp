#include<cstdio>
#include"hero.h"
int main() {
	hero* p = new hero(10, 30, 20);
	p->show_stats();
	return 0;
}