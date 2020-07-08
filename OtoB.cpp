#include<iostream>
#include<cmath>
using namespace std;
 long long int  decimal(long long int  n){
	
	 long long int digit,dec=0,i=1;
	while(n!=0){
		
		digit=n%8;
		n=n/8;
		dec +=digit*i;
	
		i=i*10;


	}
	return dec;

}
int main() {
	long long int  n;
	cin>>n;
	long long int  ans =decimal(n);


	cout<<ans;
	return 0;
}
