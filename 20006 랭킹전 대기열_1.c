#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include "20006_header.h"

void Array() {
	for (i = 0; i < team_cnt; i++) {
		for (j = 0; j < team_idx[i]; j++) {
			for (k = j; k < team_idx[i] - 1; k++) {
				if (strcmp(char_team[i][j], char_team[i][k + 1]) > 0) {
					strcpy(char_temp, char_team[i][j]);
					strcpy(char_team[i][j], char_team[i][k + 1]);
					strcpy(char_team[i][k + 1], char_temp);

					int_temp = int_team[i][j];
					int_team[i][j] = int_team[i][k + 1];
					int_team[i][k + 1] = int_temp;
				}
			}
		}
	}
}
