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
		int n,cnt=0;
		scanf("%d", &n);
		int *a = new int[n];
			for (int i = 0; i < n; i++){
				scanf("%d", &a[i]);
				if (i > 0){
					for (int j = 0; j < i; j++)
						if (a[j] <= a[i])cnt++;
				}
			}
			printf("%d\n", cnt);
	}
	
}
