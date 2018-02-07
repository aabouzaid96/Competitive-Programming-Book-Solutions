#include<bits/stdc++.h>

using namespace std;

#define SI1(v)  scanf("%d",&v)					    // int 1
#define SI2(v1,v2)  scanf("%d%d",&v1,&v2)	     	// int 2
#define SI3(v1,v2,v3)  scanf("%d%d%d",&v1,&v2,&v3)  // int 3
#define SLL1(v)  scanf("%lld",&v)					// long long 1
#define SLL2(v1,v2)  scanf("%lld%lld",&v1,&v2)      // long long 2
#define PI1(v)  printf("%d\n",v)					    // int 1
#define PI2(v1,v2)  printf("%d %d\n",v1,v2)	     	// int 2
#define PLL1(v)  printf("%lld\n",v)					// long long 1
#define Line    printf("\n");
typedef long long ll;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    int t;
    SI1(t);
    while(t--)
    {
 int a[1025][1025]={};

        int mnx=INT_MAX,mny=INT_MAX,mxx=0,mxy=0;

        int d,n;
        SI2(d,n);

        int x,y,c,tot=0;
        for(int i=0; i<n; i++)
        {
            SI3(x,y,c);
            for(int i=max(x-d,0); i<= min(x+d,1024); i++)
                for(int j=max(y-d,0); j<=min(y+d,1024); j++)
                    a[i][j]+=c;
        }
        int _i,_j,mx=0;
        for(int i=0; i<=1024; i++)
        {
            for(int j=0; j<=1024; j++)
            {
               if(a[i][j]>mx){
                    _i=i;
                    _j=j;
                    mx=a[i][j];
                }
             }
        }

        printf("%d %d %d\n",_i,_j,mx);

    }


}


