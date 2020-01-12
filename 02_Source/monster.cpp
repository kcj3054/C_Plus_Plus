#include"monster.h"

monster::monster() {}

monster::monster(string name_in,
	int m_level_in,
	int physical_attack_point_in,
	int magic_attack_point_in,
	int health_point_in,
	int mana_point_in,
	int strength_in,
	int dexterity_in,
	int intelligence_in,
	int lucky_in)
{
	name = name_in;
	m_level = m_level_in;
	physical_attack_point = physical_attack_point_in;
	magic_attack_point = magic_attack_point_in;
	health_point = health_point_in;
	mana_point = mana_point_in;

	strength = strength_in;
	dexterity = dexterity_in;
	intelligence = intelligence_in;
	lucky = lucky_in;
}

void monster::set_m_level(int m_level_in)
{
	m_level = m_level_in;
}
int monster::get_m_level()
{
	return m_level;
}

void monster::set_strength(int strength_in)
{
	strength = strength_in;
}
int monster::get_strength()
{
	return strength;
}

void monster::set_dexterity(int dexterity_in)
{
	dexterity = dexterity_in;
}
int monster::get_dexterity()
{
	return dexterity;
}

void monster::set_intelligence(int intelligence_in)
{
	intelligence = intelligence_in;
}
int monster::get_intelligence()
{
	return intelligence;
}

void monster::set_lucky(int lucky_in)
{
	lucky = lucky_in;
}
int monster::get_lucky()
{
	return lucky;
}

void monster::move() {
	cout << '\n' << "Character Move" << '\n';
	cout << "============================" << '\n';
	cout << "몬스터가 걸어갔습니다." << '\n';
	cout << "============================" << '\n';
}
void monster::attack() {
	cout << '\n' << "Character Attack" << '\n';
	cout << "============================" << '\n';
	cout << "몬스터가 공격했습니다." << '\n';
	cout << "============================" << '\n';
}
void monster::attacked() {
	cout << '\n' << "Character Attacked" << '\n';
	cout << "============================" << '\n';
	cout << "몬스터가 타격을 받았습니다." << '\n';
	cout << "============================" << '\n';
}

void monster::death() {
	cout << '\n' << "Character Death" << '\n';
	cout << "============================" << '\n';
	cout << "몬스터가 죽었습니다." << '\n';
	cout << "============================" << '\n';
}

void monster::show_status() {
	cout << "Monster's Status" << '\n';
	cout << "============================" << '\n';
	cout << "m_level : " << m_level << '\n';
	cout << "strength : " << strength << '\n';
	cout << "dexterity : " << dexterity << '\n';
	cout << "intelligence : " << intelligence << '\n';
	cout << "lucky : " << lucky << '\n';
	cout << "============================" << '\n';
}