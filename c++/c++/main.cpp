#include"fun.h"
#include"hero.h"
int main() {
	hero* p = new hero(10, 30, 20);
	save(p);
	hero* j = new hero();
	load(j);
}