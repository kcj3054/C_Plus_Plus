#include <iostream>
#include <string>
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

	4) ��ǥ ���
	  . ����
	    - S : �����, G : ��ǥ��, C : ĳ����, I : ������, M : ����, X : ��ֹ�
			(col)
			0 1 2 3 4 M
	 (row)0 S . . I M .
		  1 . . M . M .
		  2 I . X . . X
		  3 . X . . M .
		  4 . M . I . X
		  N . . M . M G

	  . ������ ��(E), ��(W), ��(S), ��(N)�� �̵��� �� �ִ�.
	  . ĳ������ ��ǥ�� (row, col)�� ǥ���ȴ�.
	  . (0, 0) ~ (N, M)�� ����� �������δ� �̵��� �Ұ����ϴ�.
*/

int main()
{
	coordinate kcj_w_coor(0, 0);
	warrior kcj_w(SPEAR, "���İ������", 1, 1000, 0, 5000, 300, 20, 15, 5, 5, kcj_w_coor);
	kcj_w.show_status();
	kcj_w.move();
	kcj_w.attack();
	kcj_w.attacked();
	kcj_w.fit();
	kcj_w.death();

	// magician
	coordinate kcj_m_coor(0, 1);
	magician kcj_m(ICE, "���̽�����", 1, 0, 1000, 300, 5000, 5, 15, 20, 5, kcj_m_coor);
	kcj_m.show_status();
	kcj_m.move(direction::EAST, 5);
	kcj_m.attack();
	kcj_m.attacked();
	kcj_m.fit();
	kcj_m.death();

	// assassin
	coordinate kcj_a_coor(0, 0);
	assassin kcj_a(DAGGER, "��ŵ���", 1, 0, 1000, 300, 5000, 5, 15, 20, 5, kcj_a_coor);
	kcj_a.show_status();
	kcj_a.move(direction::NORTH, 5);
	kcj_a.attack();
	kcj_a.attacked();
	kcj_a.fit();
	kcj_a.death();

	// archer
	coordinate kcj_ar_coor(0, 0);
	archer kcj_ar(BOW, "�ƽþȴ�", 1, 0, 1000, 300, 5000, 5, 15, 20, 5, kcj_ar_coor);
	kcj_ar.show_status();
	kcj_a.move(direction::NORTH, 5);
	kcj_ar.move();
	kcj_ar.attack();
	kcj_ar.attacked();
	kcj_ar.fit();
	kcj_ar.death();

	coordinate kcj_slime_coor(0, 0);
	slime kcj_slime("green_slime", 10, 10, 1, 50, 5, 5, 5, 5, 5, kcj_slime_coor);
	kcj_slime.move(direction::NORTH, 10);
	kcj_slime.attack();
	kcj_slime.attacked();
	kcj_slime.move();
	kcj_slime.death();

	//golem
	golem kcj_golem("stone_golem", 30, 50, 10, 500, 50, 10, 10, 10, 10);
	kcj_golem.move(direction::NORTH, 10);
	kcj_golem.move();
	kcj_golem.attack();
	kcj_golem.attacked();
	kcj_golem.death();

	//yeti
	yeti kcj_yeti("white_yeti", 35, 55, 15, 400, 100, 12, 12, 12, 12);
	kcj_yeti.move(direction::NORTH, 10);
	kcj_yeti.move();
	kcj_yeti.attack();
	kcj_yeti.attacked();
	kcj_yeti.death();

	//firedog
	firedog kcj_firedog("firedog", 36, 56, 16, 401, 101, 13, 13, 13, 13);
	kcj_firedog.move(direction::NORTH, 10);
	kcj_firedog.move();
	kcj_firedog.attack();
	kcj_firedog.attacked();
	kcj_firedog.death();

	
	//sword
	coordinate kcj_sword_coor(0, 0);
	sword kcj_sword("warrior", "������ �ҵ�", 50, 58, 28, 20, 10, 10, 10, kcj_sword_coor);
	kcj_sword.fit();
	kcj_sword.w_point(direction::EAST, 10);
	//spear
	spear kcj_spear("warrior", "������ ����Ʈ ���Ǿ�", 64, 89, 35, 20, 20, 20, 20);
	kcj_spear.fit();

	//wand
	wand kcj_wand("magician", "���ϵ�", 1, 5, 10, 1, 1, 1, 1);
	kcj_wand.fit();
	return 0;
}