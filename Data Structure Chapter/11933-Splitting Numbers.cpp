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

	//freopen("Read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n;
	
	while (scanf("%d", &n) && n != 0){
		int l = -1;
		while (n >= pow(2, ++l));

		int a[100], b[100];
		bool f = 0;
		int c = 0, cnt = 1;
		for (int i = 0; i < l; i++){
			f = (n  & (1 << i));
			if (f){
				if (cnt % 2) a[c] = 1, b[c++] = 0;
				else a[c] = 0, b[c++] = 1;
				cnt++;
			}
			else a[c] = 0, b[c++] = 0;
		}
		int n1 = 0, n2 = 0;
		for (int i = 0; i < l; i++){
		n1 += pow(2, i) * a[i];
		n2 += pow(2, i) * b[i];
	}
		printf("%d %d\n", n1, n2);
	}

	

	}
