#include <stdio.h>

int main() {

	int a = 0;

	scanf("%d", &a);
	(a > 90) ? printf("A") : ((a > 60) ? printf("B") : printf("C"));
	return 0;
}
