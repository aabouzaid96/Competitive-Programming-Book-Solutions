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

	int f, r;
	while (scanf("%d%d", &f, &r) && f!=0) {
		int *fr = new int[f], *re = new int[r],cnt=0;
		for (int i = 0; i < f; i++) scanf("%d", &fr[i]);
		for (int i = 0; i < r; i++) scanf("%d", &re[i]);
		double ratio[10000];
		for (int i = 0; i < r; i++)
			for (int j = 0; j < f; j++){
			ratio[cnt++] = (1.0 * re[i]) / fr[j];
			}
		sort(ratio, ratio + cnt);

		double mx = 0.0;
		for (int i = 0; i < cnt-1; i++)
				mx = max(mx, ratio[i+1]/ratio[i]);
				
		printf("%.2lf\n", mx);
	}
}
