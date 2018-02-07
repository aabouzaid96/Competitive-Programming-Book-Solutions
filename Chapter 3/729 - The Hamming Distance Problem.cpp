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
int n,h;
map<int,string>M;
void solve(string cur,int ind, int cnt)
{

    if(cnt==h)
    {
        int sum=0;
        for(int i=0; i<cur.size(); i++)
        {
            sum+= pow(2,i)*(cur[i]-'0');
        }
        M[sum]=cur;
        return ;
    }
    for(int i=ind; i<n; i++)
    {
        cur[i]='1';
        solve(cur,i+1,cnt+1);
        cur[i]='0';
    }

}
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
        M.clear();
        SI2(n,h);
        string s="";
        for(int i=0; i<n; i++)s+='0';
        solve(s,0,0);

        map<int,string>:: iterator it=M.begin();
    for(it; it!=M.end(); it++){
        string res=(*it).second;
        reverse(res.begin(),res.end());
            printf("%s\n",res.c_str());
        }
        if(t) Line;
    }


}


