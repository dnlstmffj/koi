#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int d[1000];

bool comp(const int &a, const int &b){

    if(a%2==0 && b%2==1) return true;
    else if (a%2==1 && b%2==0) return false;    
    

    
    return a<b;
    
}

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=n; i++) scanf("%d", &d[i]);
    sort(d+1, d+n+1, comp); //sort 만족할때까지 반복



    for(i=1; i<=n; i++) printf("%d ", d[i]);
    return 0;
}
