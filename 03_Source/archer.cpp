#include "archer.h"

//만들어 놓는 이유 : archer::archer() {}
archer::archer() {}
archer::archer(property job_in, string name_in, int level_in, int physical_attack_point_in, 
	int magic_attack_point_in, int health_point_in,int mana_point_in, int strength_in, int dexterity_in,
	int intelligence_in, int lucky_in, coordinate point)

	:character(job_in, name_in, level_in, physical_attack_point_in, magic_attack_point_in, health_point_in,
		mana_point_in, strength_in, dexterity_in, intelligence_in, lucky_in, point) {}

void archer::move() {
	cout << '\n' << "Assassin Move" << '\n';
	cout << "============================" << '\n';
	cout << "아처가 걸어갔습니다." << '\n';
	cout << "============================" << '\n';
}
void archer::attack() {
	cout << '\n' << "Assassin Attack" << '\n';
	cout << "============================" << '\n';
	cout << "아처가 공격했습니다." << '\n';
	cout << "============================" << '\n';
}
void archer::attacked() {
	cout << '\n' << "Assassin Attacked" << '\n';
	cout << "============================" << '\n';
	cout << "아처가 타격을 받았습니다." << '\n';
	cout << "============================" << '\n';
}
void archer::fit() {
	cout << '\n' << "Assassin Fit" << '\n';
	cout << "============================" << '\n';
	cout << "아처가 아이템을 장착했습니다." << '\n';
	cout << "============================" << '\n';
}
void archer::death() {
	cout << '\n' << "Assassin Death" << '\n';
	cout << "============================" << '\n';
	cout << "아처가 죽었습니다." << '\n';
	cout << "============================" << '\n';
}

void archer::show_status() {
	cout << "Archer's Status" << '\n';
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