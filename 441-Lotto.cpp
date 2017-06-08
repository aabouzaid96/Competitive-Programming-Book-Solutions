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

int N, S[100], choosed[100], ans[100];
void func(int len, int pos)
{
	if (len == 6){
		for (int i = 0; i < 5; ++i)
			printf("%d ", ans[i]);
		printf("%d\n", ans[5]);
		return;
	}
	for (int i = pos; i < N; ++i) {
		if (!choosed[i]) {
			choosed[i] = 1;
			ans[len] = S[i];
			func(len + 1, i + 1);
			choosed[i] = 0;
		}
	}
}
int main(){
	freopen("read.txt", "r", stdin);

	int Case = 0;
	while (scanf("%d", &N) && N) {
		if (Case++) printf("\n");
		for (int i = 0; i < N; ++i){ scanf("%d", &S[i]);	choosed[i] = 0; }
			
		func(0, 0);
		}
	}