#pragma once
#include<iostream>
#include "character_status.h"
using namespace std;

// 좌표 연산과 관련한 역할과 책임을 가짐
class coordinate {
public:
	int row;
	int col;

	coordinate() {}

	coordinate(int row, int col) {
		this->row = row;
		this->col = col;
	}

	static string get_direction_string(direction dir) {
		switch (dir) {
		case direction::NORTH:
			return "북쪽";
		case direction::EAST:
			return "동쪽";
		case direction::SOUTH:
			return "남쪽";
		case direction::WEST:
			return "서쪽";
		}
		return "방향 오류";
	}
};