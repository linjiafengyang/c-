#include <stdio.h>
int main() {
	int n, i, j;
	int sum;
	scanf("%d", &n);
	for(j = 1; j <= n; j++) {
		sum = 0;
		for(i = 1; i < j; i++) {
			if(j % i == 0) {
				sum += i;
			}
		}
		if(sum == j) {
			printf("%d\n", j);
		}
	}
	return 0;
}
