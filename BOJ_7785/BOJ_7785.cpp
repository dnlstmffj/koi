#include <stdio.h>
#include <set>
#include <string>
#include <iostream>
using namespace std;
int main() {
	int n, i;
	set <string> s;
	set <string>::reverse_iterator it;
	string str;
	string str1;
	!scanf("%d", &n);
	for(i=1; i<=n*2; i++) {
		
		if(i%2==0) {
			cin >> str;
			
			if(str.compare("leave")) s.insert(str1);
			else s.erase(str1);
		}
		else {
			cin >> str1;
			
		}
		
	}
	for(it=s.rbegin(); it!=s.rend(); it++) {
		cout<<*it+"\n";
	}
	return 0;
}
