#include <stdio.h>
int main() {
	for (size_t i = 1; i <= 100; i++)  !((i % 3 ?  0: printf("Fizz")) | (i % 5 ? 0 : printf("Buzz"))) ?  printf("%d \n", i): printf("\n");
}
