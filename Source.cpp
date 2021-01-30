#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int obn(int a, int b, int c) {
	if (b > a && b > c)
		b = 0;
	return b;
}
int main() {
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("vvedite chislo %d: ", i + 1);
		scanf("%d", &arr[i]);

	}
	for (int i = 1; i < 10; i++) {
		if (obn(arr[i - 1], arr[i], arr[i + 1]) == 0) {
			arr[i] = 0;
			i++;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}