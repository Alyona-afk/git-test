#include <stdio.h>

int main(void) {
	char name[] = "Alyona";
	int age = 21;
	float height = 1.28;

	printf("name: %s\n", name);
	printf("age: %d\n", age);
	printf("height: %.2f\n", height);
	printf("int size: %zu bytes\n", sizeof(int));


return(0);
}
