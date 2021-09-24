# include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Bubble(int A[], int n)
{
	int i, j, flag = 0;

	for (i = 0; i < n-1; i++) {
		flag = 0;
		for (j = 0; j < n-i-1; j++) {
			if (A[j] > A[j+1]) {
				swap(&A[j], &A[j+1]);
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}

int main()
{
	int A[] = {3, 9, 10, 4, 5, 11, 2, 13, 7, 8, 22, 34, 1, 29};
	int n = sizeof(A)/sizeof(A[0]);
	int i;

	Bubble(A, n);

	for (i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}