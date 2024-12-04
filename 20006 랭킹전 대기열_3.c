#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "20006_header.h"

void input(player_num, team_num);
void Array();
void output();

int main() {
	scanf("%d %d", &player_num, &team_num);
	input(player_num, team_num);
	Array();
	output();
	return 0;
}
