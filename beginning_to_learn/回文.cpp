#include <stdio.h>
int main() {
	int a, b, c, d, e, f, g, h, i;
	int s, t;
	scanf("%d%d%d%d%d%d%d%d%d",&a, &b, &c, &d, &e, &f, &g, &h, &i);

	s = a * 100000000 + b * 10000000 + c * 1000000 + d * 100000 + e * 10000 + f * 1000 + g * 100 + h * 10 + i;
	t = i * 100000000 + h * 10000000 + g * 1000000 + f * 100000 + e * 10000 + d * 1000 + c * 100 + b * 10 + a;
	if(a == 0) {		
		t = t / 10;
	}
	if(a == 0 && b == 0) {
		t = t / 100;
	}
	if(a == 0 && b == 0 && c == 0) {
		t = t / 1000;
	}
	if(a == 0 && b == 0 && c == 0 && d == 0) {
		t = t / 10000;
	}
	if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0) {
		t = t / 100000;
	}
	if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) {
		t = t / 1000000;
	}
	if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0) {
		t = t / 10000000;
	}
	if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h == 0) {
		t = t / 100000000;
	}	
	
	if(s == t) {
		printf("Yes");
	}
	return 0;
} 

