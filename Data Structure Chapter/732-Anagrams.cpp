#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<vector>
#include<stack>
#include<list>
#include<deque>
#include<forward_list>
using namespace std;


char a[105], b[105], buf[105];
char stk[105], w[105];
int len, stkIdx;
void dfs(int idx, int i, int o) {
	if (i == len && o == len) {
		for (int j = 0; j < idx; j++) {
			if (j)   putchar(' ');
			putchar(w[j]);
		}
		puts("");
		return;
	}
	if (i < len) {
		stk[stkIdx++] = a[i];
		w[idx] = 'i';
		dfs(idx + 1, i + 1, o);
		stkIdx--;
	}
	if (i > o) {
		if (stk[stkIdx - 1] == b[o]) {
			w[idx] = 'o';
			stkIdx--;
			dfs(idx + 1, i, o + 1);
			stkIdx++;
			stk[stkIdx - 1] = b[o];
		}
	}
}

int main(){

	freopen("Read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	while (gets(a)) {
		gets(b);
		puts("[");
		len = strlen(a), stkIdx = 0;
		if (strlen(a) == strlen(b))
			dfs(0, 0, 0);
		puts("]");
	}
	return 0;


}
	
