
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin>>s;
	int flag=1;
	int n=s.length();
	for(int i=0;i<s.length();i++){
		if(s[i]!=s[n-i-1]){
         flag=0;
		 break;
		}
	}
	if(flag==0){
		cout<<"false";
	}

  if(flag==1){
	  cout<<"true";
  }
	return 0;
}
