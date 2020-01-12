#pragma once
#include "monster.h"
class golem: public monster
{
public:
	golem();
	golem(string name_in,
		int m_level_in,
		int physical_attack_point_in,
		int magic_attack_point_in,
		int health_point_in,
		int mana_point_in,
		int strength_in,
		int dexterity_in,
		int intelligence_in,
		int lucky_in);
};