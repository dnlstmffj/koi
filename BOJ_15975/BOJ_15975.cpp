#include<stdio.h>
#include <stdlib.h>
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

struct var {
    int x, p;
};
struct var xp[100001] = {0, };

bool comp (const var &a, const var &b) {
    if(a.p<b.p) return true;
    
    else if(a.p == b.p) return a.x<b.x;
    else return false;
    


}
int h[100000];
int main() {
    int n, i, a, b, sum=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        xp[i].x = a;
        xp[i].p = b;
    }
    sort(xp, xp+n, comp);
    for(i=0; i<n; i++) {
        if(xp[i].p == xp[i+1].p) { 
            sum+= xp[i+1].x - xp[i].x;
            h[i] = 1;
            printf("%d %d\n", xp[i+1].x - xp[i].x, i);
            }
        
    }
    for(i=n-1; i>=0; i--) {
        if(xp[i].p == xp[i-1].p && h[i] == 0) {
            sum+= xp[i].x - xp[i-1].x;
            printf("%d %d\n", xp[i].x - xp[i-1].x, i);
        }
    }

    printf("%d", sum);



    return 0;
}
