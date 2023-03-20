#include <stdio.h>

//repair file

int ageq(int a) {
	int c = 0;
	if (a == 1) {
		c = 10;
		printf("%d\n", c);
	} else {
		c = ageq(a - 1) + 2;
		printf("%d\n", c);

	}
	return c;

}

int main() {
	int ageq(int a);
	ageq(5);


	return 0;
}
