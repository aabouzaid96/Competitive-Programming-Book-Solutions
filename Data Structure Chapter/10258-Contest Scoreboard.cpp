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
using namespace std;

int a[101][101];
bool vis[101];

int main(){

	//freopen("Read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int testcase;
	scanf("%d", &testcase);
	for (int l = 0; l < testcase; l++){
		int n, p, t;
		char submit = 'L';
		char str[100];
		printf("\n");
		while (gets(str) && strlen(str)){
			sscanf(str, "%d%d%d %c ", &n, &p, &t, &submit);

			a[n][0] = n;

			if (submit == 'I') a[n][p + 2]++;
			else if (submit == 'C'){
				a[n][1]++;
				a[n][2] += t + (20 * a[n][p + 2]);
			}

		}


		int ret[101][4], c = 0;
		for (int i = 0; i < 101; i++){
			if (a[i][0] != 0)
				ret[c][0] = a[i][0], ret[c][1] = a[i][1], ret[c++][2] = a[i][2];
		}

		bool f = false;
		for (int i = 0; i < c - 1; i++)
			for (int j = i + 1; j < c; j++){
			if (ret[i][1] < ret[j][1])
				swap(ret[i][1], ret[j][1]), swap(ret[i][0], ret[j][0]), swap(ret[i][2], ret[j][2]);
			else if (ret[i][1] == ret[j][1]){
				if (ret[i][2] > ret[j][2])
					swap(ret[i][1], ret[j][1]), swap(ret[i][0], ret[j][0]), swap(ret[i][2], ret[j][2]);
				else if (ret[i][2] == ret[j][2]){
					if (ret[i][0] > ret[j][1])
						swap(ret[i][1], ret[j][1]), swap(ret[i][0], ret[j][0]), swap(ret[i][2], ret[j][2]);
				}
			}


			}

		for (int i = 0; i < c; i++){
			if (ret[i][1] != 0)
				printf("%d %d %d\n", ret[i][0], ret[i][1], ret[i][2]);
		}
		if (l != testcase - 1) printf("\n");

	}
}
	
