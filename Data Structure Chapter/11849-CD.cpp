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
#include<set>
#include<stack>
#include<list>
#include<deque>
#include<iomanip>
#include<map>
using namespace std;


int main(){

	freopen("Read.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	 long n, m;
	while (scanf("%ld %ld", &n, &m) && (n!=0 && m!=0)){
		set<unsigned long long>S;
		unsigned long long x;
		for (long long i = 0; i < n; i++){ scanf("%llu", &x); S.insert(x); }
		for (long long i = 0; i < m; i++){scanf("%llu", &x);  S.insert(x); }
		x = 0;
		x = (n + m) - S.size();
		printf("%llu\n", x);
	}
	

	}
