#include<stdio.h>
#include <stdlib.h>
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

struct var {
    int x, p;
};
struct var xp[100001];

bool comp (const var &a, const var &b) {
    if(a.p<b.p) return true;
    
    else if(a.p == b.p) return a.x<b.x;
    else return false;
    


}
int h[100000];
int main() {
    int n, i, a, b, sum=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        scanf("%d %d", &a, &b);
        xp[i].x = a;
        xp[i].p = b;
    }
    xp[0].p = 1000000000;
    xp[0].x = 1000000000;
    sort(xp, xp+n, comp);
    for(i=1; i<n; i++) {
        if((xp[i].p == xp[i+1].p) && ((xp[i+1].x - xp[i].x) <= (xp[i].x - xp[i-1].x))) { 
            sum+= xp[i+1].x - xp[i].x;
           
        } else if ((xp[i].p == xp[i-1].p) && ((xp[i+1].x - xp[i].x) > (xp[i].x - xp[i-1].x))) {
            sum+= xp[i].x - xp[i-1].x;
        } else if (xp[i].p == xp[i-1].p) {
            sum+= xp[i].x - xp[i-1].x;
        } else if (xp[i].p == xp[i+1].p) { 
            sum+= xp[i+1].x - xp[i].x;
        }
        else {


        }
        
    }
 

    printf("%d", sum);



    return 0;
}
