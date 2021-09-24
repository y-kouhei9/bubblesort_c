# include <stdio.h>


/**************************************
	swap:
		よくあるスワップを行う関数
		おどろくような処理ではない
		引数で与えられた値を相互に
		入れ替える

***************************************/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


/**************************************
	Bubble:
		バブルソートを行う関数
	argument:
		int A[] - 実際に処理を施す配列,
		int n   - 配列の要素数
	return value:
		void

***************************************/
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

/**************************************
	main:
		メイン関数

		配列は自由に値を設定することができる
		こだわった箇所は特にない

***************************************/
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