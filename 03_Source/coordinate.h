#pragma once
#include<iostream>
#include "character_status.h"
using namespace std;

// ��ǥ ����� ������ ���Ұ� å���� ����
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
			return "����";
		case direction::EAST:
			return "����";
		case direction::SOUTH:
			return "����";
		case direction::WEST:
			return "����";
		}
		return "���� ����";
	}
};