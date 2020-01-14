#include "assassin.h"

assassin::assassin() {}
assassin::assassin(property job_in, string name_in, int level_in, int physical_attack_point_in,
	int magic_attack_point_in, int health_point_in,int mana_point_in, int strength_in, int dexterity_in,
	int intelligence_in, int lucky_in, coordinate point)

	:character(job_in, name_in, level_in, physical_attack_point_in, magic_attack_point_in, health_point_in,
		mana_point_in, strength_in, dexterity_in, intelligence_in, lucky_in, point) {}

void assassin::move(direction dir, int distance) {
	cout << '\n' << "Assassin Move" << '\n';
	cout << "============================" << '\n';
	cout << "어쌔신이 " << coordinate::get_direction_string(dir) << " 방향으로 " << distance << " 걸어갔습니다." << '\n';
	cout << "============================" << '\n';
}
void assassin::attack() {
	cout << '\n' << "Assassin Attack" << '\n';
	cout << "============================" << '\n';
	cout << "어쌔신이 공격했습니다." << '\n';
	cout << "============================" << '\n';
}
void assassin::attacked() {
	cout << '\n' << "Assassin Attacked" << '\n';
	cout << "============================" << '\n';
	cout << "어쌔신이 타격을 받았습니다." << '\n';
	cout << "============================" << '\n';
}
void assassin::fit() {
	cout << '\n' << "Assassin Fit" << '\n';
	cout << "============================" << '\n';
	cout << "어쌔신이 아이템을 장착했습니다." << '\n';
	cout << "============================" << '\n';
}
void assassin::death() {
	cout << '\n' << "Assassin Death" << '\n';
	cout << "============================" << '\n';
	cout << "어쌔신이 죽었습니다." << '\n';
	cout << "============================" << '\n';
}

void assassin::show_status() {
	cout << "Assassin's Status" << '\n';
	cout << "============================" << '\n';
	cout << "job : " << this->get_job() << '\n';
	cout << "name : " << this->get_name() << '\n';
	cout << "level : " << this->get_level() << '\n';
	cout << "physical_attack_point : " << this->get_physical_attack_point() << '\n';
	cout << "magic_attack_point : " << this->get_magic_attack_point() << '\n';
	cout << "health_point : " << this->get_health_point() << '\n';
	cout << "mana_point : " << this->get_mana_point() << '\n';
	cout << "strength : " << this->get_strength() << '\n';
	cout << "dexterity : " << this->get_dexterity() << '\n';
	cout << "intelligence : " << this->get_intelligence() << '\n';
	cout << "lucky : " << this->get_lucky() << '\n';
	cout << "============================" << '\n';
}