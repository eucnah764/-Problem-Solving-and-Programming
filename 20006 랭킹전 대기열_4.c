#include <stdio.h>
#include <string.h>
#include "20006_header.h"

void output() {
	for (i = 0; i < team_cnt; i++) {
		if (team_idx[i] == team_num) printf("Started!\n");
		else printf("Waiting!\n");
		for (j = 0; j < team_idx[i]; j++)printf("%d %s\n", int_team[i][j], char_team[i][j]);
	}
}
