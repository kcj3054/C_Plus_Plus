#include<iostream>
#include<string>
using namespace std;

/*
	Class 개념 및 이해

	1) 객체
		. 현실 세계의 사물을 표현한 개념

	2) 인스턴스
		. 클래스를 메모리에 생성한 독립적인 데이터 단위
		. {011100101000111100011...}

	3) 생성
		. 캐릭터
			- job, name, level, physical_attack_point, magic_attack_point, health_point, mana_point, strength, dexterity, intelligence, lucky
		. 무기
			- job, name, physical_attack_point, magic_attack_point, min_need_strength, min_need_dexterity, min_need_intelligence, min_need_lucky
		. 몬스터
			- name, physical_attack_point, magic_attack_point, health_point, mana_point, strength, dexterity, intelligence, lucky,

	4) 정책
		. 레벨 1업당 스탯(strength, dexterity, intelligence, lucky) 포인트 4씩 제공
*/

class character {
private:
	string job;
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

public:
	character() {}

	character(string job_in, string name_in, int level_in, int physical_attack_point_in, int magic_attack_point_in, int health_point_in,
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

	void set_job(string job_in) {
		job = job_in;
	}

	string get_job() {
		return job;
	}

	void set_name(string name_in) {
		name = name_in;
	}

	string get_name() {
		return name;
	}

	void set_level(int level_in) {
		level = level_in;
	}

	int get_level()
	{
		return level;
	}
	
	void  set_physical_attack_point(int physical_attack_point_in)
	{
		physical_attack_point = physical_attack_point_in;
	}
	int get_physical_attack_point()
	{
		return physical_attack_point;
	}

	void set_magic_attack_point(int magic_attack_point_in)
	{
		magic_attack_point = magic_attack_point_in;
	}
	int get_magic_attack_point()
	{
		return magic_attack_point;
	}

	void set_health_point(int health_point_in)
	{
		health_point = health_point_in;
	}
	int get_health_point()
	{
		return health_point;
	}

	void set_mana_point(int mana_point_in)
	{
		mana_point = mana_point_in;
	}
	int get_mana_point()
	{
		return mana_point;
	}

	void set_strength(int strength_in)
	{
		strength = strength_in;
	}
	int get_strength()
	{
		return strength;
	}

	void set_dexterity(int dexterity_in)
	{
		dexterity = dexterity_in;
	}
	int get_dexterity()
	{
		return dexterity;
	}

	void set_intelligence(int intelligence_in)
	{
		intelligence = intelligence_in;
	}
	int get_intelligence()
	{
		return intelligence;
	}

	void set_lucky(int lucky_in)
	{
		lucky = lucky_in;
	}	
	int get_lucky()
	{
		return lucky;
	}

	void show_status() {
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
};

class weapon {
	//job, name, physical_attack_point, magic_attack_point, min_need_strength,min_need_dexterity, min_need_intelligence, min_need_lucky
private:
	string job;
	string name;
	int physical_attack_point;
	int magic_attack_point;
	int min_need_strength;
	int min_need_dexterity;
	int min_need_intelligence;
	int min_need_lucky;

public:
	weapon(string job_in, string name_in, int physical_attack_point_in, int magic_attack_point_in, int min_need_strength_in,
		int min_need_dexterity_in, int min_need_intelligence_in, int min_need_lucky_in)
	{
		job = job_in;
		name = name_in;
		physical_attack_point = physical_attack_point_in;
		magic_attack_point = magic_attack_point_in;
		min_need_strength = min_need_strength_in;
		min_need_dexterity = min_need_dexterity_in;
		min_need_intelligence = min_need_intelligence_in;
		min_need_lucky = min_need_lucky_in;
	}
};

class monster {
	//name, physical_attack_point, magic_attack_point, health_point, mana_point, strength, dexterity, intelligence, lucky,
private:
	string name;
	int physical_attack_point;
	int magic_attack_point;
	int health_point;
	int mana_point;
	int strength;
	int dexterity;
	int intelligence;
	int lucky;

public:
	monster (string name_in,
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
		physical_attack_point = physical_attack_point_in;
		magic_attack_point = magic_attack_point_in;
		health_point = health_point_in;
		mana_point = mana_point_in;
		strength = strength_in;
		dexterity = dexterity_in;
		intelligence = intelligence_in;
		lucky = lucky_in;
	}
};


int main()
{
	/* Character */
	/*
	kcj.job = "magic";
	kcj.name = "kcj";
	kcj.physical_attack_point = 100;
	kcj.magic_attack_point = 100;
	kcj.health_point = 100;
	kcj.mana_point = 100;
	kcj.strength = 10;
	kcj.dexterity = 10;
	kcj.intelligence = 10;
	kcj.lucky = 10;
	*/

	//job, name, physical_attack_point, magic_attack_point, health_point, mana_point, strength, dexterity, intelligence, lucky
	character kcj("magician", "kcj", 50, 100, 100, 100, 100, 5, 5, 5, 5);
	kcj.show_status();

	/* Level UP (+1) Include 4 stat points(strength, dexterity, intelligence, lucky) */
	kcj.set_level(kcj.get_level() + 1);
	kcj.set_strength(kcj.get_strength() + 1);
	kcj.set_dexterity(kcj.get_dexterity() + 1);
	kcj.set_intelligence(kcj.get_intelligence() + 1);
	kcj.set_lucky(kcj.get_lucky() + 1);
	kcj.show_status();

	/* Weapon */
	//job, name, physical_attack_point, magic_attack_point, min_need_strength,min_need_dexterity, min_need_intelligence, min_need_lucky
	weapon sword("magician", "staff", 100, 100, 5, 5, 5, 5);

	/* Reinforcement Once Success! Get 10 stat points(physical_attack_point, magic_attack_point) */
	/* Write your codes*/

	/* Monster */
	//name, physical_attack_point, magic_attack_point, health_point, mana_point, strength, dexterity, intelligence, lucky
	monster mon("mon_king", 10, 10, 100, 100, 10, 10, 10, 10);

	/* Evolution For BossMonster Success! Include 20 stat points(strength, dexterity, intelligence, lucky) */
	/* Write your codes*/
	
	/* test */
	return 0;
}