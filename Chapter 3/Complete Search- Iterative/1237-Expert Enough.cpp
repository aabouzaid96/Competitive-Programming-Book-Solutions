#define _CRT_SECURE_NO_DEPRECATE
#include <functional>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>
#include <queue>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;
int main(){

	int t;
	scanf("%d", &t);
	while (t--){
		int n, d, q;
		scanf("%d", &n);
		string s[10001] = {}, Q[1000] = {};
		int l[10001], h[10001];

		for (int i = 0; i < n; i++) {cin >> s[i], scanf("%d%d", &l[i], &h[i]); }
		scanf("%d", &d);
		for (int i = 0; i < d; i++){
			int cur,cnt=0;
			scanf("%d", &q);
			bool f = false;
			for (int j = 0; j < n; j++){
				if (q >= l[j] && q <=h[j]){
					cnt++, cur = j;
					if (cnt > 2)break;
				}
			}
			if(cnt == 1) cout << s[cur] << endl; 
			else puts("UNDETERMINED");
		}
		
		if (t != 0) printf("\n");
	}
}
