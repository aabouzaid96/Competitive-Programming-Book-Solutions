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
int n, a[100], sum[30000000], c = 0, len;
vector<int>v;
int gen(int k,int end){
	if (k == end) {
		if (v.size() != 0){
			for (int i = 0; i < v.size(); i++) sum[c] += v[i];
			c++;
		}
		return 0;	
	}
		gen(k+1,end);
		v.push_back(a[k]);
		gen(k+1,end);
		v.pop_back();
}

int main(){
	freopen("read.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while (t--){
		a[100],c=0;
		memset(sum, 0, sizeof sum);
		scanf("%d%d", &len, &n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		if (len == 0){ printf("YES\n"); continue; }
		gen(0, n);
		bool f = 0;
		for (int i = 0; i < c; i++) if (sum[i] == len){ f = 1; break; }
			
		(f)?printf("YES\n") :printf("NO\n");
		}
}

