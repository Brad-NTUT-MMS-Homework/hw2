#include <stdio.h>

int main(void) {
	int k = 7; //meh
	for (int i = 0; i < 9; i++) {
		if (i < 5) {
			for (int j = 4 - i; j > 0; j--)
			{
				putchar(' '); //upper blank
			}
			for (int j = 0; j < 2 * i + 1; j++) {
				putchar('*'); //upper star
			}
		}
		else {
			for (int j = i - 4; j > 0; j--) {
				putchar(' '); //lower blank
			}
			for (int l = k; l > 0; l--) //meh
			{
				putchar('*');
			}
			k -= 2;

		}
		puts("");
	}
}