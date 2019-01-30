#include<stdio.h>
#include<algorithm>
using namespace std;

struct xy {
    int a, b;
};
xy h[100001];
bool comp (const xy x, const xy y) {
    if(x.b==y.b) return x.a<y.a;
    else return x.b<y.b;
}
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d %d", &h[i].a, &h[i].b);
    sort(h, h+n, comp);
    for(i=0; i<n; i++) printf("%d %d\n", h[i].a, h[i].b);
    return 0;
}
