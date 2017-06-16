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
	char s[10000];
	while (scanf("%s", &s) && s[0] != '#'){
		(next_permutation(s, s + strlen(s))) ? printf("%s\n", s) : printf("No Successor\n");
	}
	}
