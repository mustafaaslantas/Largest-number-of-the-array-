#include <stdio.h>
int max(int* a, int length) {
	int i;
	int maks = a[0];
	for (i = 0; i<length ; i++) {
		if (a[i] > maks)
		{ maks = a[i];}
	}

	return maks;

}

int main() {
	int k, l, m, n, p;
	printf("Enter five numbers:");
	
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &p);
	int numbers[5] = {k,l,m,n,p};
	int maks = max(numbers, 5);
	printf("Largest number:%d", maks);
	return 0;
}