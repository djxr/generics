#include <stdio.h>

void intswap(int *x, int *y);
void swap(void *a, void *b);

int main(int argc, char *argv[])
{
	int x = 34567738;
	int y = -90098733;
	printf("x = %.8X , y = %.8X\n", x, y);
	printf("swapping ints ...\n");
	intswap(&x, &y);
	printf("x = %.8X , y = %.8X\n", x, y);

}

void swap(void *a, void *b)
{
	//write generic
}
void intswap(int *px, int *py)/*{{{*/
{
	int temp = *px;
	*px = *py;
	*py = temp;
}/*}}}*/
