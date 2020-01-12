#pragma once
#include<iostream>

using namespace std;

class weapon {
	//job, name, physical_attack_point, magic_attack_point, min_need_strength,min_need_dexterity, min_need_intelligence, min_need_lucky
private:
	string job;
	string name;
	int w_level;
	int physical_attack_point;
	int magic_attack_point;
	int min_need_strength;
	int min_need_dexterity;
	int min_need_intelligence;
	int min_need_lucky;

public:
	weapon();
	weapon(string job_in, string name_in, int w_level_in, int physical_attack_point_in, int magic_attack_point_in, int min_need_strength_in,
		int min_need_dexterity_in, int min_need_intelligence_in, int min_need_lucky_in);

	void set_w_level(int w_level_in);
	

	int get_w_level_in();

	void set_physical_attack_point(int physical_attack_point_in);
	int get_physical_attack_point();

	void set_magic_attack_point(int magic_attack_point_in);
	int get_magic_attack_point();

	/* Functions */
	void fit();
	void show_status();
};