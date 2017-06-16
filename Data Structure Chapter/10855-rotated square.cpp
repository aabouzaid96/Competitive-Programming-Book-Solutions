#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;


char N1[100][100], n1[100][100], copy90[100][100];
int N, n;

int check(){
	int cnt = 0; bool f = true;
	for (int i = 0; i <=N-n; i++){
		for (int j = 0; j <=N-n; j++){
			for (int l = 0; l < n; l++){
				for (int k = 0; k < n; k++){
					if (n1[l][k] != N1[l + i][k + j]) {f = false; break; }			
				}
				if (!f)break;
			}
			if (f) cnt++;
			f = true;
		}
	}
	return cnt;
}

void rotate(){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			n1[i][j] = copy90[n - j - 1][i];

}

int main(){

	//freopen("Read.txt", "r", stdin);

	while (scanf("%d%d", &N, &n) && (n || N)){
		getchar();
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)cin >> N1[i][j];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)	cin >> n1[i][j];

		printf("%d ",check());  // 0 degree
		memcpy(copy90, n1, sizeof(n1));
		rotate(); 
		printf("%d ", check());   // 90
		memcpy(copy90, n1, sizeof(n1));
		rotate();
		printf("%d ", check());  // 180
		memcpy(copy90, n1, sizeof(n1));
		rotate();
		printf("%d\n", check());  // 360


	}
}
/*
1 1
1 1
10 4
2 5
6 9
1 1
10 10
5 1
1 1
0 0
*/
