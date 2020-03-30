#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
int c[n];
int k=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]==b[j]){
            c[k++]=a[i];
            b[j]=INT_MIN;
            break;
        }
    }
}
sort(c,c+k);
cout<<"[";
for(int i=0;i<k;i++){
    if(i==0){
        cout<<c[i];
    }
    else{
       
        cout<<", "<<c[i];
        
    }
    }

cout<<"]";

return 0;
}
