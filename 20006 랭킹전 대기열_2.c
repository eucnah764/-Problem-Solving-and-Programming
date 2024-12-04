#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include "20006_header.h"

void input(player_num, team_num) {
	for (i = 0; i < player_num; i++) {
		scanf("%d %s", &player_level, player_name);
		if (i == 0) {
			int_team[0][0] = player_level;
			strcpy(char_team[0][0], player_name);
			team_cnt++;
			team_idx[0]++;
		}
		else {
			for (j = 0; j < team_cnt; j++) {
				int level_gap = int_team[j][0] - player_level;
				if ((level_gap >= -10 && level_gap <= 10) && team_idx[j] < team_num) {
					int_team[j][team_idx[j]] = player_level;
					strcpy(char_team[j][team_idx[j]], player_name);
					team_idx[j]++;
					check = 1;
					break;
				}
			}
			if (check == 0) {
				int_team[team_cnt][0] = player_level;
				strcpy(char_team[team_cnt][0], player_name);
				team_idx[team_cnt]++;
				team_cnt++;
			}
			check = 0;
		}
	}
}
