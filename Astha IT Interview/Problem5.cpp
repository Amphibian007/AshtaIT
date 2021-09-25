#include<bits/stdc++.h>
using namespace std;
string s,ss;
int a,b;
int dp[5005][5005];
int fun(int i,int j)
{
   if(i>=a||j>=b) return 0;
   if(dp[i][j]!=-1) return dp[i][j];
   int an=0;
   if(s[i]==ss[j]) an=max(an,1+fun(i+1,j+1));
   an=max(an,fun(i+1,j));
   an=max(an,fun(i,j+1));
   return dp[i][j]=an;
}
int main()
{
    cin>>s>>ss;
    a=s.size(),b=ss.size();
    memset(dp,-1,sizeof dp);
    cout<<fun(0,0)<<endl;
    return 0;
}
