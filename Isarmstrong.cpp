#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(long long int n){
	long long int i=0,k,digit;
	k=n;
     
	while(k!=0){
		i++;
		k=k/10;

	}
     k=n;
	long long  int sum=0;
	while(k>0){
		digit=k%10;
	
			sum +=pow(digit,i);

		k=k/10;
	
	}
	if(sum==n){
		return true;
	}
	return false;
}
int main() {
long long int n;
	cin>>n;
	bool i=armstrong(n);
	cout<<boolalpha<<i;
	return 0;
}
