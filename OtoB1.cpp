#include<iostream>
#include<cmath>
using namespace std;
long long int  binary(long long int  n){
	long long int digit,dec=0,i=1;
	while(n!=0){
		
		digit=n%2;
		n=n/2;
		dec +=digit*i;
	
		i=i*10;


	}
	return dec;



}

 long long int  decimal(long long int  n){
	
	 long long int digit,dec=0,i=0;
	while(n!=0){
		
		digit=n%10;
		n=n/10;
		dec +=digit*pow(8,i);
	
		i++;


	}
	return binary(dec);

}
int main() {
	long long int  n;
	cin>>n;
	long long int  ans =decimal(n);


	cout<<ans;
	return 0;
}
