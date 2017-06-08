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

	
	
	int n;
	while (scanf("%d", &n) != EOF){
		vector<pair<int, int> >a;
		int cnt = 0;

		for (int i = n + 1; i <= n * 2; i++)
			if ((i*n) % (i - n) == 0)
				a.push_back(make_pair(((i*n) / (i - n)), i)), cnt++;
	
			
		printf("%d\n", cnt);
		for (int i = 0; i <cnt; i++){
			printf("1/%d = 1/%d + 1/%d\n", n, a[i].first, a[i].second);
		}
	}
	
}
