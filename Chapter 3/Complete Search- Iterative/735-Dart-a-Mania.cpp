#define _CRT_SECURE_NO_DEPRECATE
#include <functional>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>
#include <queue>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;

int main(){
//	freopen("read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int n; 
	int val[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
				   21, 22, 24, 26, 27, 28, 30, 32, 33, 34, 36
				  ,38, 39, 40, 42, 45, 48, 50, 51, 54, 57, 60 };

	while (scanf("%d", &n)){
		if (n <= 0){ printf("END OF OUTPUT\n"); break; }
		
		int s = n,cnt6=0,cnt3=0;
		int per = 0,comp=0;
		for (int i = 0; i < 43; i++){
			for (int j =0; j < 43; j++){	
				for (int l = 0; l < 43; l++){
					if ((val[i]+ val[j] + val[l]) == s) {
							per++;
						if (i == l && j == l) comp++;
						else if (i == j || i == l || j == l) cnt3+=1;
						else cnt6+=1;
					}
				}
			}
		}
		if (per == 0)printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n", n);
		else{
			comp += ((cnt6 / 6) + (cnt3 / 3));
			printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n", n, comp);
			printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n", n, per);
			}
		printf("**********************************************************************\n");
		}

}
