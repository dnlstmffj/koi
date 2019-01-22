#include <stdio.h>
int d[500000];
int dd[5000000];
int main()
{

	int n, i, j, cnt = 0;
	d[0] = 100000010;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &d[i]);
	}
	for (i = n; i >= 1; i--) {

		for (j = i - 1; j >= 0; j--) {
			cnt++;
			if (d[j] >= d[i]) {
			
				dd[i] = j;
				break;

			}

		}

	}

	for (i = 1; i <= n; i++) printf("%d ", dd[i]);

	return 0;
}
