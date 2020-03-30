#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char str[1000];
	cin.getline(str,1000);
	int len=strlen(str);
	int freq[1000]={0};
	int i,max=0;
	char ch;
	for(i=0;i<len;i++){
		freq[str[i]]++;
		if(max<freq[str[i]]){
			max=freq[str[i]];
			ch =str[i];
		}
}
cout<<ch;
	
	return 0;
}
