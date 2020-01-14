#pragma once
#include <iostream>
#include "character_status.h"
#include "coordinate.h"
using namespace std;

class character {
private:
	property job;
	string name;
	int level;
	int physical_attack_point;
	int magic_attack_point;
	int health_point;
	int mana_point;
	int strength;
	int dexterity;
	int intelligence;
	int lucky;
	coordinate point; // 포함 관계

public:
	character();
	character(property job_in, string name_in, int level_in, int physical_attack_point_in, int magic_attack_point_in, int health_point_in,
		int mana_point_in, int strength_in, int dexterity_in, int intelligence_in, int lucky_in, coordinate point);

	/* Getters / Setters */
	void set_job(property job_in);
	property get_job();
	void set_name(string name_in);
	string get_name();
	void set_level(int level_in);
	int get_level();
	void  set_physical_attack_point(int physical_attack_point_in);
	int get_physical_attack_point();
	void set_magic_attack_point(int magic_attack_point_in);
	int get_magic_attack_point();
	void set_health_point(int health_point_in);
	int get_health_point();
	void set_mana_point(int mana_point_in);
	int get_mana_point();
	void set_strength(int strength_in);
	int get_strength();
	void set_dexterity(int dexterity_in);
	int get_dexterity();
	void set_intelligence(int intelligence_in);
	int get_intelligence();
	void set_lucky(int lucky_in);
	int get_lucky();
	void set_point(coordinate point);
	coordinate get_point();

	/* Functions */
	void move(direction dir, int distance);
	void attack();
	void attacked();
	void fit();
	void death();
	void show_status();
};