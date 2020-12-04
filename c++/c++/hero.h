#pragma once
class entity {
public:
	int hp = 0, hp_m = 0, mp = 0, mp_m = 0;
	int dmg = 0, res = 0;
	entity(int h, int m, int d, int r) {
		hp = h; hp_m = hp;
		mp = m; mp_m = mp;
		dmg = d; res = r;
	}
	entity();
};
class hero :public entity
{
public:
	int str = 0, agt = 0, inl = 0;
	
	
	hero(int s,int a,int i) {
		str = s; agt = a; inl = i;
		calculate_hp();
	}
	void show_stats();
	void calculate_hp();
};

class monster :public entity {
	int ex = 0, gold = 0, boost = 1;
};

