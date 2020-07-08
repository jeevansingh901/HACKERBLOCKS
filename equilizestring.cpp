

#include<bits/stdc++.h>
using namespace std;

int dp[2001][2001];


string s1, s2;
int rec(string s1,string s2,int m,int n)
{
    if(m==0)
    {
        return n;
    }
    if(n==0)
    {
        return m;
    }
    if(s1[m-1]==s2[n-1])
    {
        return rec(s1,s2,m-1,n-1);
    }
    return 1+min(rec(s1,s2,m,n-1),min(rec(s1,s2,m-1,n),rec(s1,s2,m-1,n-1)));
}

int topdown(int m,int n)
{
    if(m==0)
    {
        dp[m][n]=n;
        return n;
    }
    if(n==0)
    {
        dp[m][n]=m;
        return m;
    }
	if(dp[m][n]!=-1)
    {
        return dp[m][n];    
    }
    if(s1[m-1]==s2[n-1])
    {
        dp[m][n]=topdown(m-1,n-1);
		return dp[m][n];
		
    }
    int ans = 1+min(topdown(m,n-1),min(topdown(m-1,n),topdown(m-1,n-1)));
    dp[m][n]=ans;
    return ans;
}
int main()
{
    // string s1,s2;
    cin>>s1>>s2;
    memset(dp,-1,sizeof(dp));
//    cout<<rec(s1,s2,s1.length(),s2.length());
    cout<<topdown(s1.length(),s2.length());

    return 0;
}
