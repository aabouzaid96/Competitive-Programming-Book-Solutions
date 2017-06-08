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
	freopen("read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	while (scanf("%d", &n) != EOF){
		char c;
		int _1[5000][2], _3[5000][2], c1 = 0, c3 = 0;
		
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++){
				scanf(" %c", &c);
				if (c == '1') _1[c1][0] = i, _1[c1++][1] = j;
				else if (c == '3') _3[c3][0] = i, _3[c3++][1] = j;
			}

		int mn = 1e9, mx = 0;
		for (int i = 0; i < c1; i++){
			mn = 1e9;
			for (int j = 0; j < c3; j++){
				mn = min(mn, abs(_1[i][0] - _3[j][0]) + abs(_1[i][1] - _3[j][1]));
			}
			mx = max(mn, mx);
		}

		printf("%d\n",mx);
	}
}