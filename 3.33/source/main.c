#include <stdio.h>

int main() {
	int height, width;
	printf("Input height and width: ");
	scanf_s("%d %d", &height, &width);

	for (int currentHeight = 0; currentHeight < height; currentHeight++) {
		for (int currentWidth = 0; currentWidth < width; currentWidth++) {
			if ((currentHeight != 0 && currentHeight != height -1) && 
					(currentWidth != 0 && currentWidth != width - 1)) {
				printf(" ");
				continue;
			}
			printf("+");
		}
		puts("");
	}
	return 0;
	
}