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
	//freopen("read.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int  p1, p2, p3;
	for (p1 = 1; 4 * p1 <= 2000; p1++){
	if (pow(p1, 4) > (2 * pow(10, 9))) break;
		for (p2 = p1; 3 * p2 <= 2000 - p1; p2++){
		if ((p1*pow(p2, 3)) > (2 * pow(10, 9))) break;
			for (p3 = p2; 2 * p3 <= 2000 - p2 - p1; p3++){
			if (((p1*p2)*pow(p3, 2)) > (2 * pow(10, 9))) break;
				long long p, s, d, c, e, p4;
				p = (p1*p2*p3);
				s = (p1 + p2 + p3);
				c = 1000000;

				if (p <= c)continue;
				p4 = (c * s) / (p - c);
				if (p4 < p3 || (s + p4) > 2000) continue;

				if (fabs((p1 + p2 + p3 + p4) / 100.0 - (p1 * p2 * p3 * p4) / 100000000.0) < 1e-9) {
					printf("%0.2lf %0.2lf %0.2lf %0.2lf\n", p1 / 100.0, p2 / 100.0, p3 / 100.0, p4 / 100.0);
				}
			}
		}
	}
}