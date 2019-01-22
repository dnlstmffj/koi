#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int d[30001], h[3001];
int main() {
    int n, a, k, c, i, j, cnt=0, max=0;
    deque<int>dd; 
    scanf("%d %d %d %d", &n, &a, &k, &c);
    for(i=0; i<n; i++) scanf("%d", &d[i]);
    for(i=0; i<k; i++){
         dd.push_back(d[i]);
         h[d[i]]++;
    }
    for(i=0; i<n; i++) {
        for(j=1; j<=a; j++) if(h[j]!=0) cnt++;

        if(h[c]==0) cnt++;
        if(max<cnt) max = cnt;
        h[dd[0]]--;
        dd.pop_front();
        dd.push_back(d[(i+k)%n]);
        h[d[(i+k)%n]]++;
        cnt = 0;

    }
    printf("[%d]", max);
 

    
    return 0;
}
