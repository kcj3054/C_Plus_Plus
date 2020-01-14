#include "golem.h"

golem::golem() {}
golem::golem(string name_in,
	int m_level_in,
	int physical_attack_point_in,
	int magic_attack_point_in,
	int health_point_in,
	int mana_point_in,
	int strength_in,
	int dexterity_in,
	int intelligence_in,
	int lucky_in)
:monster(name_in, m_level_in, physical_attack_point_in, magic_attack_point_in, health_point_in, mana_point_in,
	strength_in, dexterity_in, intelligence_in, lucky_in) {}