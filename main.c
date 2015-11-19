#include <stdio.h>
#include <string.h>
#include <SDL2/SDL.h>

void intswap(int *x, int *y);
void swap(void *a, void *b, size_t size);

int main(int argc, char *argv[])
{
	int x = 34567738;
	int y = -90098733;

	printf("x = %.8X , y = %.8X\n", x, y);
	printf("swapping ints ...\n");
	intswap(&x, &y);
	printf("x = %.8X , y = %.8X\n", x, y);
	printf("swapping void* values ...\n");
	swap(&x, &y, sizeof(int));
	printf("x = %.8X , y = %.8X\n", x, y);
	printf("\n\n");

	float f_x = 555.34;
	float f_y = 3456.6556498;
	printf("x = %f , y = %f\n", f_x, f_y);
	printf("swapping void* values ...\n");
	swap(&f_x, &f_y, sizeof(float));
	printf("x = %f , y = %f\n", f_x, f_y);

	SDL_Rect one, two;
	one.x = 0;
	one.y = 0;
	one.w = 16;
	one.h = 16;
	two.x = 512;
	two.y = 32;
	two.w = 96;
	two.h = 96;
	printf("Lets a swap some squares!\n");
	printf("square one: x:%d y:%d w:%d h:%d\n", one.x, one.y, one.w, one.h);
	printf("square two: x:%d y:%d w:%d h:%d\n", two.x, two.y, two.w, two.h);
	printf("Swapping SDL_Rect squares as void *s!\n");
	swap(&one, &two, sizeof(SDL_Rect));
	printf("square one: x:%d y:%d w:%d h:%d\n", one.x, one.y, one.w, one.h);
	printf("square two: x:%d y:%d w:%d h:%d\n", two.x, two.y, two.w, two.h);

}

void swap(void *pa, void *pb, size_t size)
{
	char buffer[size];
	memcpy(buffer, pa, size);
	memcpy(pa, pb, size);
	memcpy(pb, buffer, size);
}
void intswap(int *px, int *py)/*{{{*/
{
	int temp = *px;
	*px = *py;
	*py = temp;
}/*}}}*/
