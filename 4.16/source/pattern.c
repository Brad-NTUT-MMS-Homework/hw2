#include <stdio.h>
#include "pattern.h"

void patternA() {
	puts("(A)");

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		puts("");
	}
}

void patternB() {
	puts("(B)");

	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		puts("");
	}
}

void patternC() {
	puts("(C)");

	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= 10- i; j++) {
			printf("%s", " ");
		}

		for (int j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		puts("");
	}
}

void patternD() {
	puts("(D)");

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10 - i; j++) {
			printf("%s", " ");
		}

		for (int j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		puts("");
	}
}