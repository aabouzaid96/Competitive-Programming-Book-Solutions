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
int N, n, a[22],sum,mn=2000000;
vector<int>v,v2;
void CD(int k){
	if (k == n){
		sum = 0;
		if (v.size() == 0)return;
		for (int i = 0; i < v.size(); i++)sum += v[i];
		if ( (N-sum) <= mn && N >= sum){
			mn = N-sum;
			v2.assign(v.begin(),v.end());
		}
		return;
	}
	CD(k + 1);
	v.push_back(a[k]);
	CD(k + 1);
	v.pop_back();

}
int main(){
	//freopen("read.txt", "r", stdin);
	while (scanf("%d %d", &N,&n) ==2){
		v2.clear();
		mn = 2000000;
		memset(a, 0, sizeof a);
		
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		if (N == 0){printf("sum:0\n"); continue; }
		CD(0);
		int tot = 0;
		for (int i = 0; i < v2.size(); i++){ printf("%d ", v2[i]); tot += v2[i]; }
		printf("sum:%d\n", tot);
	}


}
