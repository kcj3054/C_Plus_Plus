#pragma once
#include "character.h"

class warrior : public character {
private:

public:
	warrior();
	warrior(property job_in,
		string name_in,
		int level_in,
		int physical_attack_point_in,
		int magic_attack_point_in,
		int health_point_in,
		int mana_point_in,
		int strength_in,
		int dexterity_in,
		int intelligence_in,
		int lucky_in,
		coordinate point);

	/* Functions */
	void move();
	void attack();
	void attacked();
	void fit();
	void death();
	void show_status();
};