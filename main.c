#include <stdio.h>

void swap(int *x, int *y);
void g_swap(void *a, void *b);

int main(int argc, char *argv[])
{
	int x = 34567738;
	int y = -90098733;
	printf("x = %.8X , y = %.8X\n", x, y);
	printf("swapping...\n");
	swap(&x, &y);
	printf("x = %.8X , y = %.8X\n", x, y);

}

void g_swap(void *a, void *b)
{
	//write generic
}
void swap(int *px, int *py)/*{{{*/
{
	int temp = *px;
	*px = *py;
	*py = temp;
}/*}}}*/
