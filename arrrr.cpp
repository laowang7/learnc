#include <stdio.h>

int main() {
	int m = 3, n = 3;
//	int arr[n][m] = {{1, 2, 3, 4}, {3, 4, 5, 6}, {3, 4, 6, 9}};
	int arr[n][m] = {0};
	int (*p)[m] = arr ;
	p = arr;

//	scanf("%d %d", &m, &n);
	for (int j = 0; j < n; j++) {

		for (int i = 0; i < m; i++) {
			scanf("%d", &arr[j][i]);

			//	printf("\n");
			//	getchar();
		}
	}





	for (int j = 0; j < n; j++) {

		for (int i = 0; i < m; i++) {
			printf("%d ", *(*(p + j) + i));


		}

		printf("\n");
	}

	return 0;
}
