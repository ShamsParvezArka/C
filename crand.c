#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define maxN 26

int main() {
	char ch[maxN];
	int index = 96;
	for (int i = 0; i < maxN; i++) {
		ch[i] = index;
		index++;
	}
	
	time_t t = time(NULL);
	srand(t);
	printf("{");
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%c", ch[rand() % 26]);
		}
		if (i != 4) {
			printf(", ");
		}
	}
	printf("}");
	printf("\n");
	
	return 0;
}
