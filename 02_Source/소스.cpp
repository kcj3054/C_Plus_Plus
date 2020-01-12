#include<iostream>
#include<string>
#include "character.h"
#include "monster.h"
#include "weapon.h"

#include "warrior.h"
#include "magician.h"
#include "archer.h"
#include "assassin.h"

#include "slime.h"
#include "yeti.h"
#include "golem.h"
#include "firedog.h"

#include "sword.h"
#include "spear.h"
#include "wand.h"
using namespace std;

/*
	Class ���

	1) �������/�ҽ����Ϸ� �и�

	2) Ŭ������ ���� ī�װ� ��üȭ
	  . character
	    - warrior(��, â, ����)
		- magician(��, ����, ����)
		- assassin(�ܰ�, ǥâ)
		- archer(Ȱ, ����)

	  . monster
	    - slime
		- golem
		- yeti(����)
		- firedog(��)

	  . weapon
	    - sword
		- spear
		- ax

		- wand
		- staff

		- dagger
		- shuriken

		- bow
		- crossbow

	3) Ŭ���� ������� ����
	  . �θ� : ����� �Ӽ��� �����ϴ� ���� Ŭ����
	  . �ڽ� : �θ� ����Ͽ� �θ� ���� �ִ� �Ӽ��� ����� �״�� �̾�޴� ���� Ŭ����
	  . �θ� Ŭ����, ���� Ŭ����, ���̽�(Base) Ŭ����, ���� Ŭ����
	  . �ڽ� Ŭ����, ���� Ŭ����, ����(Derived) Ŭ����, ���� Ŭ����
*/

int main()
{
	// job, name, level, physical_attack_point, magic_attack_point, health_point, mana_point, strength, dexterity, intelligence, lucky
	// warrior
	warrior kcj_w(SPEAR, "���İ������", 1, 1000, 0, 5000, 300, 20, 15, 5, 5);
	kcj_w.show_status();
	kcj_w.move();
	kcj_w.attack();
	kcj_w.attacked();
	kcj_w.fit();
	kcj_w.death();

	// magician
	magician kcj_m(ICE, "���̽�����", 1, 0, 1000, 300, 5000, 5, 15, 20, 5);
	kcj_m.show_status();
	kcj_m.move();
	kcj_m.attack();
	kcj_m.attacked();
	kcj_m.fit();
	kcj_m.death();

	// assassin
	assassin kcj_a(DAGGER, "��ŵ���", 1, 0, 1000, 300, 5000, 5, 15, 20, 5);
	kcj_a.show_status();
	kcj_a.move();
	kcj_a.attack();
	kcj_a.attacked();
	kcj_a.fit();
	kcj_a.death();

	// archer
	archer kcj_ar(BOW, "�ƽþȴ�", 1, 0, 1000, 300, 5000, 5, 15, 20, 5);
	kcj_ar.show_status();
	kcj_ar.move();
	kcj_ar.attack();
	kcj_ar.attacked();
	kcj_ar.fit();
	kcj_ar.death();

	//string name_in,
	/*int m_level_in,
		int physical_attack_point_in,
		int magic_attack_point_in,
		int health_point_in,
		int mana_point_in,
		int strength_in,
		int dexterity_in,
		int intelligence_in,
		int lucky_in*/
		//slime
	slime kcj_slime("green_slime", 10, 10, 1, 50, 5, 5, 5, 5, 5 );
	kcj_slime.attack();
	kcj_slime.attacked();
	kcj_slime.move();
	kcj_slime.death();

	//golem
	golem kcj_golem("stone_golem", 30, 50, 10, 500, 50, 10, 10, 10, 10);
	kcj_golem.move();
	kcj_golem.attack();
	kcj_golem.attacked();
	kcj_golem.death();

	//yeti
	yeti kcj_yeti("white_yeti", 35, 55, 15, 400, 100, 12, 12, 12, 12);
	kcj_yeti.move();
	kcj_yeti.attack();
	kcj_yeti.attacked();
	kcj_yeti.death();

	//firedog
	firedog kcj_firedog("firedog", 36, 56, 16, 401, 101, 13, 13, 13, 13);
	kcj_firedog.move();
	kcj_firedog.attack();
	kcj_firedog.attacked();
	kcj_firedog.death();

	
	//sword
	sword kcj_sword("warrior", "������ �ҵ�", 50, 58, 28, 20, 10, 10, 10);
	kcj_sword.fit();
	//spear
	spear kcj_spear("warrior", "������ ����Ʈ ���Ǿ�", 64, 89, 35, 20, 20, 20, 20);
	kcj_spear.fit();

	//wand
	wand kcj_wand("magician", "���ϵ�", 1, 5, 10, 1, 1, 1, 1);
	kcj_wand.fit();
	return 0;
}