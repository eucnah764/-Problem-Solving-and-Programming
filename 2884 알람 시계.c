#include<stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 0) {
		if (b >= 45)
			printf("%d %d", a, b-45);
		else if (b < 45)
			printf("23 %d", b+15);
	}
	else {
		if (b >= 45)
			printf("%d %d", a, b-45);
		else if (b < 45)
			printf("%d %d", a-1, b+15);
	}
}
