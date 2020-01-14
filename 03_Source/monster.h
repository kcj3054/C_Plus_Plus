#pragma once
#include<iostream>
#include "coordinate.h"
using namespace std;

class monster {
	//name, physical_attack_point, magic_attack_point, health_point, mana_point, strength, dexterity, intelligence, lucky,
private:
	string name;
	int m_level;
	int physical_attack_point;
	int magic_attack_point;
	int health_point;
	int mana_point;
	int strength;
	int dexterity;
	int intelligence;
	int lucky;
	coordinate point;

public:
	monster();
	monster(string name_in,
		int m_level_in,
		int physical_attack_point_in,
		int magic_attack_point_in,
		int health_point_in,
		int mana_point_in,
		int strength_in,
		int dexterity_in,
		int intelligence_in,
		int lucky_in,
		coordinate point);

	void set_m_level(int m_level_in);
	int get_m_level();

	void set_strength(int strength_in);
	int get_strength();

	void set_dexterity(int dexterity_in);
	int get_dexterity();

	void set_intelligence(int intelligence_in);
	int get_intelligence();

	void set_lucky(int lucky_in);
	int get_lucky();

	void set_point(coordinate direction);
	coordinate get_point();

	/* Functions */
	void move(coordinate dir, int distance);
	void move();
	void attack();
	void attacked();
	void death();
	void show_status();
};