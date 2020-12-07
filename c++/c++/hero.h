#pragma once
class entity {
public:
	int hp = 0, hp_m = 0, mp = 0, mp_m = 0;
	int dmg = 0, res = 0;
	bool isAlive = true;
};
class hero :public entity
{
public:
	int str = 0, agt = 0, inl = 0;
	hero(int s,int a,int i) {
		str = s; agt = a; inl = i;
		calculate_hp();
	}hero();
	void show_stats();
	void calculate_hp();
};

class monster :public entity {
public:
	int ex = 0, gold = 0, boost = 1;
	monster(int e,int g,int h,int d) {
		ex = e; gold = g; dmg = d; hp = h;
	}
	monster();
	void take_dmg(int dmg);
	void death();
};

