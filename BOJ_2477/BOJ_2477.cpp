#include <stdio.h>
int d[100], dd[100], ddd[100], max, mm = 1, dddd[100][5];
int last;

int main() {
	int n, i, a, b;
	scanf("%d", &n);
	for (i = 1; i <= 6; i++) {
		scanf("%d %d", &dd[i], &d[i]);
		ddd[dd[i]]++; 
	}
	for (i = 7; i <= 13; i++) d[i] = d[i - 6];

	int ar[100], aa=0;
	for (i = 1; i <= 4; i++) {
		if (ddd[i] == 1) {
			if (aa == 1) ar[2] = i;
			else {
				ar[1] = i;
				aa = 1;
			}
		}
	}
	int ms=1;
	for (i = 1; i <= 6; i++) {
		if (dd[i]==ar[1]||dd[i]==ar[2]) {
		 last = i;
		 ms *= d[i];
		}
	}
	if ((dd[1] == ar[1] || dd[1] == ar[2]) && (dd[6] == ar[1] || dd[6] == ar[2])) {
		printf("%d", (ms-(d[last + 3] * d[last+4]))*n);
	}
	else {
		printf("%d", (ms- (d[last + 2] * d[last + 3]))*n);
	}
		return 0;
	
}
