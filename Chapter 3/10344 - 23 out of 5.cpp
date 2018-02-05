#include<bits/stdc++.h>

using namespace std;
using namespace __gnu_cxx;

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

int a[5];
bool vis[5];
bool F=0;

void solve(int cur, int ind)
{
    if(F)return;
    if(ind==5)
    {
        if(cur==23 )F=1;
        return ;
    }
    for(int i=0; i<5; i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            solve(cur+a[i], ind+1);
            solve(cur-a[i], ind+1);
            solve(cur*a[i], ind+1);
            vis[i]=0;
        }
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif

    while(SI1(a[0])  && a[0])
    {
        for(int i=1; i<5; i++)SI1(a[i]);
        F=0;
        memset(vis,0,sizeof vis);

        for(int i=0; i<5; i++)
        {
            vis[i]=1;
            solve(a[i],1);
            vis[i]=0;
        }

        (F)?printf("Possible\n"):printf("Impossible\n");
    }
}
