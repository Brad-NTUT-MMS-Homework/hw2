#include <stdio.h>
#include <math.h>

int main(void) {
	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= 500; j++)
		{
			float temp = sqrt(i * i + j * j);
			if (fmod(temp, 1) == 0 && sqrt(i * i + j * j) <= 500) {
				printf("%3d, %3d, %3d", i, j, (int)temp);
				puts("");
			}
		}
	}
	return 0;
}