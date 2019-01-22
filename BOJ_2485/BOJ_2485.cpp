#include <stdio.h>
int d[100000], dd[100000];

int gcm(int a, int b) {
	int cnt = 1, i=2;
	while (1) {
		if (i > a || i > b) break;
		if (a%i == 0 && b%i == 0) {
			a = a / i; 
			b = b / i; 
			cnt *= i;
		}
		else {
			i++;
			continue;
		}
	}
	return cnt;
}

int main() {
	int n, i,  max, min=0;


	
	scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &d[i]);

	for (i = 1; i <= n - 1; i++) {
		dd[i] = d[i + 1] - d[i];

	}
	for (i = n - 2; i >= 1; i--) dd[i] = gcm(dd[i], dd[i + 1]);

	if (d[n] % dd[1] == 0) max = d[n] / dd[1];
	else max = (d[n] / dd[1]) + 1;
	if (d[1] % dd[1] == 0) min = (d[1] / dd[1]) - 1;
	else min = (d[1] / dd[1]);
	
	printf("%d", max - n-min);

	return 0;
}
