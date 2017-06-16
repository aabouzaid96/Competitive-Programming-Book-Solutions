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


int main(){

	//freopen("Read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	char a[100005];

	
	while (scanf("%s", a) != EOF){

		list<char>L;
		list<char>::iterator it = L.begin();

		int j = 0, l = strlen(a);

		for (int i = 0; i < l; i++){
			if (a[i] == '[')
				it = L.begin();
			else if (a[i] == ']')
				it = L.end();
			else
				L.insert(it, a[i]);
		}
	
		for (it = L.begin(); it != L.end(); it++)
			printf("%c", *it);
			printf("\n");
	}
	
	}
	
