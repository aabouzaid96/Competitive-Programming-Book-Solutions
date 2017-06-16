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
#include<iomanip>
using namespace std;

bool cmd(int b, int a){
	return 
}
int main(){

	freopen("Read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n,m;
	while (scanf("%d%d", &n, &m)){
		if (n == 0 && m == 0)break;
		int a[101][2], b[101][3];
		auto temp = 0;
		bool f = false;
		for (int i = 0; i < n; i++){
			scanf("%d%d", &a[i][0], &a[i][1]);
			if (i){
				temp = a[i][1] - a[i - 1][0];
				if (temp < a[i][0] || temp < a[i - 1][1]) f = true;
			}
		}
		if (f){ printf("CONFLICT\n"); continue; }

		f = false;
		for (int i = 0; i < m; i++) scanf("%d%d%d", &b[i][0], &b[i][1], &b[i][2]);
	
		for (int i = 0; i < m; i++){
			for (int j = 0; j < m; j++){
				if (i != j){
					if (b[i][0] < b[i][1] && b[i][0] > b[i - 1][0]) { f = true; break; }
					else b[i]
				}
			}
		}
	
		if (i){
				if (b[i][0] < b[i - 1][1] && b[i][0] > b[i-1][0]) {f = true; break; }
				else b[i]
		}
			if (f)break;
	}
		if (f){ printf("CONFLICT\n"); continue; }
	} 
 