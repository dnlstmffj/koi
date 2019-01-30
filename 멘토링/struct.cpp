#include <stdio.h>
#include <algorithm>
using namespace std;
struct hello {
    int a, b;
};

bool comp(const hello x, const hello y) {
    return x.a>y.a;
}

int main() {
    hello d[100];
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d %d", &d[i].a, &d[i].b);

    
    sort(d, d+n, comp);
    for(i=0; i<=n; i++) printf("%d %d \n", d[i].a, d[i].b);
    return 0;
}
