#include<bits/stdc++.h>
using namespace std;
void query_print(priority_queue<long long int,vector<long long int>,greater<long long int> > pq,long long int k)
{
    while(k>1)
    {
        pq.pop();
        k--;
    }
    cout<<pq.top()<<endl;
}
int main()
{
    priority_queue<long long int,vector<long long int>,greater<long long int> > pq;
   long long int q,k;
    cin>>q>>k;
   long long int query,x,y;
    int l=0;
    for(long long int i=0;i<q;i++)
    {
        cin>>query;
        if(query==2&&l>=k)
        {
            query_print(pq,k);
        }
        else
        {
            cin>>x>>y;
            l++;
            pq.push(abs(x*x)+abs(y*y));
        }
    }
    return 0;
}
