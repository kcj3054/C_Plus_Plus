#include "character.h"

character::character() {}

character::character(property job_in, string name_in, int level_in, int physical_attack_point_in, int magic_attack_point_in, int health_point_in,
	int mana_point_in, int strength_in, int dexterity_in, int intelligence_in, int lucky_in)
{
	job = job_in;
	name = name_in;
	level = level_in;
	physical_attack_point = physical_attack_point_in;
	magic_attack_point = magic_attack_point_in;
	health_point = health_point_in;
	mana_point = mana_point_in;
	strength = strength_in;
	dexterity = dexterity_in;
	intelligence = intelligence_in;
	lucky = lucky_in;
}

void character::set_job(property job_in) {
	job = job_in;
}

property character::get_job() {
	return job;
}

void character::set_name(string name_in) {
	name = name_in;
}

string character::get_name() {
	return name;
}

void character::set_level(int level_in) {
	level = level_in;
}

int character::get_level()
{
	return level;
}

void character::set_physical_attack_point(int physical_attack_point_in)
{
	physical_attack_point = physical_attack_point_in;
}
int character::get_physical_attack_point()
{
	return physical_attack_point;
}

void character::set_magic_attack_point(int magic_attack_point_in)
{
	magic_attack_point = magic_attack_point_in;
}
int character::get_magic_attack_point()
{
	return magic_attack_point;
}

void character::set_health_point(int health_point_in)
{
	health_point = health_point_in;
}
int character::get_health_point()
{
	return health_point;
}

void character::set_mana_point(int mana_point_in)
{
	mana_point = mana_point_in;
}
int character::get_mana_point()
{
	return mana_point;
}

void character::set_strength(int strength_in)
{
	strength = strength_in;
}
int character::get_strength()
{
	return strength;
}

void character::set_dexterity(int dexterity_in)
{
	dexterity = dexterity_in;
}
int character::get_dexterity()
{
	return dexterity;
}

void character::set_intelligence(int intelligence_in)
{
	intelligence = intelligence_in;
}
int character::get_intelligence()
{
	return intelligence;
}

void character::set_lucky(int lucky_in)
{
	lucky = lucky_in;
}
int character::get_lucky()
{
	return lucky;
}

void character::move() {
	cout << '\n' << "Character Move" << '\n';
	cout << "============================" << '\n';
	cout << "캐릭터가 걸어갔습니다." << '\n';
	cout << "============================" << '\n';
}
void character::attack() {
	cout << '\n' << "Character Attack" << '\n';
	cout << "============================" << '\n';
	cout << "캐릭터가 공격했습니다." << '\n';
	cout << "============================" << '\n';
}
void character::attacked() {
	cout << '\n' << "Character Attacked" << '\n';
	cout << "============================" << '\n';
	cout << "캐릭터가 타격을 받았습니다." << '\n';
	cout << "============================" << '\n';
}
void character::fit() {
	cout << '\n' << "Character Fit" << '\n';
	cout << "============================" << '\n';
	cout << "캐릭터가 아이템을 장착했습니다." << '\n';
	cout << "============================" << '\n';
}
void character::death() {
	cout << '\n' << "Character Death" << '\n';
	cout << "============================" << '\n';
	cout << "캐릭터가 죽었습니다." << '\n';
	cout << "============================" << '\n';
}
void character::show_status() {
	cout << "Character's Status" << '\n';
	cout << "============================" << '\n';
	cout << "job : " << job << '\n';
	cout << "name : " << name << '\n';
	cout << "level : " << level << '\n';
	cout << "physical_attack_point : " << physical_attack_point << '\n';
	cout << "magic_attack_point : " << magic_attack_point << '\n';
	cout << "health_point : " << health_point << '\n';
	cout << "mana_point : " << mana_point << '\n';
	cout << "strength : " << strength << '\n';
	cout << "dexterity : " << dexterity << '\n';
	cout << "intelligence : " << intelligence << '\n';
	cout << "lucky : " << lucky << '\n';
	cout << "============================" << '\n';
}