#include "ax.h"

ax::ax() {}
ax::ax(string job_in, string name_in, int w_level_in, int physical_attack_point_in,
	int magic_attack_point_in, int min_need_strength_in, int min_need_dexterity_in,
	int min_need_intelligence_in, int min_need_lucky_in)

	:weapon(job_in, name_in, w_level_in, physical_attack_point_in, magic_attack_point_in,
		min_need_strength_in, min_need_dexterity_in, min_need_intelligence_in, min_need_lucky_in) {}