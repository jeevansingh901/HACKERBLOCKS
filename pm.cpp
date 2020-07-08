#include<iostream>
using namespace std;
int main() {
	int n,i,j;
	cin>>n;
	for(i=1;i<=2*n-1;i++){
				cout<<"*";
			}
			cout<<endl;
	 for(i=1;i<=n;i++){
		 for(j=n-i;j>=1;j--){
			 cout<<"*";

		 }
		 for(int space=1;space<=2*i-1;space++){
			 cout<<" ";
		 }
		  for(j=n-i;j>=1;j--){
			 cout<<"*";

		 }
      cout<<endl;
	 }
	 for(i=n-1;i>1;i--){
	     for(j=1;j<=n-i+1;j++){
	         cout<<"*";
	         
	     }
	     for(int space=1;space<=2*i-3;space++){
	         cout<<" ";
	     }
	     for(j=1;j<=n-i+1;j++){
	         cout<<"*";
	         
	     }
	     cout<<endl;
	 }
	 	for(i=1;i<=2*n-1;i++){
				cout<<"*";
			}

		
		
	return 0;
}
