#include <stdio.h>

int findArrayMax(int score[], int n)
{
	int tmp = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

int main()
{
	int score[100] = { 1,10,2,4,5,24,132,121 };
	int out;
	out = findArrayMax(score, 4);
	printf("result=%d", out);

	return 0;
}