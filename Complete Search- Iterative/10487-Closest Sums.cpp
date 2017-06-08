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
int b[900000];
int main(){

	int n, c = 0;
	while (scanf("%d", &n) && n != 0){
		int cnt = 0;
		int *a = new int[n];
			for (int i = 0; i < n; i++){
				scanf("%d", &a[i]);
				if (i > 0){
					for (int j = 0; j < i; j++)
						b[cnt++] = a[i] + a[j];
				}
			}
			int q, x,ret;
			scanf("%d", &q);
			printf("Case %d:\n", ++c);
			while (q--){
				int mn = 20000000;
				scanf("%d", &x);
				for (int i = 0; i < cnt; i++){
					int z = x - b[i]; if (z < 0)z *= -1;
					if (z < mn) mn = z, ret = b[i];
				}	
				printf("Closest sum to %d is %d.\n", x, ret);
			}	
	}
}
