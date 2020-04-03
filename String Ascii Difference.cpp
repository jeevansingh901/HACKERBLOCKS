include<iostream>
#include<cstring>
using namespace std;
int main() {

	char str[1000];
	cin>>str;
	
	int i;
	
	for( i=0;i<strlen(str);i++){
	  
	if(i+1<strlen(str)){
		cout<<str[i]<<str[i+1]-str[i];
	}
	else 
	cout<<str[i];

	}

	return 0;
}
