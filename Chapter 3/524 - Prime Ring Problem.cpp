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
int n;

bool vis[100]={1,1};
bool visN[17];
vector<int>V;
void sieve()
{

    for (int i = 2; i*i <= 100; i++)
        if (!vis[i])
            for (int j = i*i; j <= 100; )
            {
                vis[j] = 1;
                (i == 2) ? j += 2 : j += (i * 2);
            }
}

void solve(int cur,int ind)
{
    if(ind==n && !vis[V[0]+V[V.size()-1] ] )
    {
            printf("%d",V[0]);
        for(int i=1; i<V.size(); i++)
            printf(" %d",V[i]);
        Line;
        return ;
    }
    for(int i=2; i<=n; i++)
    {
        if(!vis[cur+i] && !visN[i])
        {
            visN[i]=1;
            V.push_back(i);
            solve(i,ind+1);
            V.pop_back();
            visN[i]=0;
        }
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif

    sieve();
     V.push_back(1);
    int tc=1;
    while(SI1(n)!=-1)
    {
    if(tc != 1)  Line;
       printf("Case %d:\n",tc++);
       solve(1,1);
    }


}


