#include"weapon.h"

weapon::weapon() {}

weapon::weapon(string job_in, string name_in, int w_level_in, int physical_attack_point_in, int magic_attack_point_in, int min_need_strength_in,
	int min_need_dexterity_in, int min_need_intelligence_in, int min_need_lucky_in)
{
	job = job_in;
	name = name_in;
	w_level = w_level_in;
	physical_attack_point = physical_attack_point_in;
	magic_attack_point = magic_attack_point_in;
	min_need_strength = min_need_strength_in;
	min_need_dexterity = min_need_dexterity_in;
	min_need_intelligence = min_need_intelligence_in;
	min_need_lucky = min_need_lucky_in;
}

void weapon::set_w_level(int w_level_in)
{
	w_level = w_level_in;
}

int weapon::get_w_level_in()
{
	return w_level;
}

void weapon::set_physical_attack_point(int physical_attack_point_in)
{
	physical_attack_point = physical_attack_point_in;
}
int weapon::get_physical_attack_point()
{
	return physical_attack_point;
}

void weapon::set_magic_attack_point(int magic_attack_point_in)
{
	magic_attack_point = magic_attack_point_in;
}
int weapon::get_magic_attack_point()
{
	return magic_attack_point;
}
//job, name, physical_attack_point, magic_attack_point, min_need_strength,min_need_dexterity, min_need_intelligence, min_need_lucky
void weapon::show_status() {
	cout << "sword's Status" << '\n';
	cout << "============================" << '\n';
	cout << "job : " << job << '\n';
	cout << "name : " << name << '\n';
	cout << "w_level : " << w_level << '\n';
	cout << "physical_attack_point : " << physical_attack_point << '\n';
	cout << "magic_attack_point : " << magic_attack_point << '\n';
	cout << "============================" << '\n';

}

void weapon::fit()
{
	cout << "아이템이 장착되었습니다" << endl;
}