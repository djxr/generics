#include <stdio.h>
#include <string.h>

// THE COMPILER WON'T YELL AT YOU IF YOU FUCK UP THIS CALL!
void swap(void *a, void *b, size_t size);
//void arr_search(void *query, void *arr, int arr_len, size_t type_size);

int main(int argc, char *argv[])
{
	printf("################################################\n");

	

	printf("################################################\n");
}

void swap(void *pa, void *pb, size_t size)/*{{{*/
{
	char buffer[size];
	memcpy(buffer, pa, size);
	memcpy(pa, pb, size);
	memcpy(pb, buffer, size);
}/*}}}*/
/*void arr_search(void *query, void *arr, int arr_len, size_t type_size)
{
}*/
