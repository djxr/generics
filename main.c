#include <stdio.h>
#include <string.h>

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
