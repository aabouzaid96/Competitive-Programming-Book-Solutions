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


int main(){

	//freopen("Read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	long long value,k;
	while ((cin >> n >> k) && (n || k)){
		n += 1;
		int i, j;
		i=j= (n / 2) ;
		long long val = 1;
		int c = 1,cnt=0;
		bool f = false;
		do{
			if (k <= val){
			
				if (k == val)  { printf("Line = %d, column = %d.\n", i, j);  f = true; break; }
				
			}
			c += 2;
			cnt++;
			val = pow(c, 2);
			i = j = (n / 2) + cnt;

		} while (k >= val);

		i = j = (n/2) + cnt;

		if (f)continue;

		for (int l = 0; l < c - 1; l++){  // 1 3 5 7
			val--;
			i--;
			if (k == val)  { printf("Line = %d, column = %d.\n", i, j);  f = true; break; }
		}
		if (f)continue;

		for (int l = 0; l < c - 1; l++){  // 1 3 5 7
			val--;
			j--;
			if (k == val)  { printf("Line = %d, column = %d.\n", i, j);  f = true; break; }
		}
		if (f)continue;

		for (int l = 0; l < c - 1; l++){  // 1 3 5 7
			val--;
			i++;
			if (k == val)  { printf("Line = %d, column = %d.\n", i, j);  f = true; break; }
		}
		if (f)continue;

		for (int l = 0; l < c - 2; l++){  // 1 3 5 7
			val--;
			j++;
			if (k == val)  { printf("Line = %d, column = %d.\n", i, j);  f = true; break; }
		}
		if (f)continue;


	}
	}