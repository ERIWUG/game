#include "hero.h"
#include<cstdio>
void hero::calculate_hp() {
	hp = str * 5 + 120;hp_m = hp;
	mp = inl * 4 + 100; mp_m = mp;
	res = agt / 20;
	dmg = str * 2;
}
void hero::show_stats() {
	printf("%d\t%d\t%d\t%d", hp, mp, res, dmg);
}
