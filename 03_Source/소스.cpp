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
	Class 상속

	1) 헤더파일/소스파일로 분리

	2) 클래스별 하위 카테고리 구체화
	  . character
	    - warrior(검, 창, 도끼)
		- magician(불, 얼음, 힐러)
		- assassin(단검, 표창)
		- archer(활, 석궁)

	  . monster
	    - slime
		- golem
		- yeti(얼음)
		- firedog(불)

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

	3) 클래스 상속으로 구현
	  . 부모 : 공통된 속성을 포함하는 상위 클래스
	  . 자식 : 부모를 상속하여 부모가 갖고 있는 속성과 기능을 그대로 이어받는 하위 클래스
	  . 부모 클래스, 상위 클래스, 베이스(Base) 클래스, 슈퍼 클래스
	  . 자식 클래스, 하위 클래스, 유도(Derived) 클래스, 서브 클래스

	4) 좌표 평면
	  . 예시
	    - S : 출발점, G : 목표점, C : 캐릭터, I : 아이템, M : 몬스터, X : 장애물
			(col)
			0 1 2 3 4 M
	 (row)0 S . . I M .
		  1 . . M . M .
		  2 I . X . . X
		  3 . X . . M .
		  4 . M . I . X
		  N . . M . M G

	  . 방향은 동(E), 서(W), 남(S), 북(N)로 이동할 수 있다.
	  . 캐릭터의 좌표는 (row, col)로 표현된다.
	  . (0, 0) ~ (N, M)을 벗어나는 영역으로는 이동이 불가능하다.
*/

int main()
{
	coordinate kcj_w_coor(0, 0);
	warrior kcj_w(SPEAR, "스쳐가도사망", 1, 1000, 0, 5000, 300, 20, 15, 5, 5, kcj_w_coor);
	kcj_w.show_status();
	kcj_w.move();
	kcj_w.attack();
	kcj_w.attacked();
	kcj_w.fit();
	kcj_w.death();

	// magician
	coordinate kcj_m_coor(0, 1);
	magician kcj_m(ICE, "아이스매직", 1, 0, 1000, 300, 5000, 5, 15, 20, 5, kcj_m_coor);
	kcj_m.show_status();
	kcj_m.move(direction::EAST, 5);
	kcj_m.attack();
	kcj_m.attacked();
	kcj_m.fit();
	kcj_m.death();

	// assassin
	coordinate kcj_a_coor(0, 0);
	assassin kcj_a(DAGGER, "대거도적", 1, 0, 1000, 300, 5000, 5, 15, 20, 5, kcj_a_coor);
	kcj_a.show_status();
	kcj_a.move(direction::NORTH, 5);
	kcj_a.attack();
	kcj_a.attacked();
	kcj_a.fit();
	kcj_a.death();

	// archer
	coordinate kcj_ar_coor(0, 0);
	archer kcj_ar(BOW, "아시안느", 1, 0, 1000, 300, 5000, 5, 15, 20, 5, kcj_ar_coor);
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
	sword kcj_sword("warrior", "메이플 소드", 50, 58, 28, 20, 10, 10, 10, kcj_sword_coor);
	kcj_sword.fit();
	kcj_sword.w_point(direction::EAST, 10);
	//spear
	spear kcj_spear("warrior", "메이플 베리트 스피어", 64, 89, 35, 20, 20, 20, 20);
	kcj_spear.fit();

	//wand
	wand kcj_wand("magician", "우드완드", 1, 5, 10, 1, 1, 1, 1);
	kcj_wand.fit();
	return 0;
}