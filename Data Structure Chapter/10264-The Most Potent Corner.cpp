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


int main(){

	freopen("Read.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	while (scanf("%d", &n) != EOF){
		int l = pow(2, n);
		int a[100000] = {0};
		int mx[100000] = {0};
		
		for (int i = 0; i < l; i++) cin >> a[i];
		
		int sum, ind, mxval = 0;
		for (int i = 0; i < l; i++){sum = 0;
			for (int j = 0; j < n; j++){
				ind = i ^ (1 << j);
				sum += a[ind];
			}
			mx[i] = sum;
		}
		
		for (int i = 0; i < l; i++)
			for (int j = 0; j < n; j++){
				int b = i ^ (1 << j);
				mxval = max(mxval, mx[i] + mx[b]);
			}	
		
		printf("%d\n", mxval);

	}


	

}
	
