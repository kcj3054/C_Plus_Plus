#include "assassin.h"

assassin::assassin() {}
assassin::assassin(property job_in, string name_in, int level_in, int physical_attack_point_in,
	int magic_attack_point_in, int health_point_in,int mana_point_in, int strength_in, int dexterity_in,
	int intelligence_in, int lucky_in)

	:character(job_in, name_in, level_in, physical_attack_point_in, magic_attack_point_in, health_point_in,
		mana_point_in, strength_in, dexterity_in, intelligence_in, lucky_in) {}