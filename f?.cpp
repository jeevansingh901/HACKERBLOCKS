#include<bits/stdc++.h>

using namespace std;
 
bool check(int n){

	int a=0;int b=1;
	int c;
	while(b<=n){
		c=a+b;
          a=b;
          b=c;
		  if(b==n){
			  return true;
		  }
	}
	return false;
}

int main () {

int n;
cin>>n;
if(check(n)){
	cout<<"Yes";
}
else 
cout<<"No";
	return 0;
}
