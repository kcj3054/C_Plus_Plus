#pragma once
#pragma once
#include "weapon.h"

class wand: public weapon
{
public:
	wand();
	wand(string job_in, string name_in, int w_level_in, int physical_attack_point_in, int magic_attack_point_in, int min_need_strength_in,
		int min_need_dexterity_in, int min_need_intelligence_in, int min_need_lucky_in);
};