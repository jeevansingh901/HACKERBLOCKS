#include<iostream>
#include<cstring>
using namespace std;
void  rec(string &s,string &out,int i=0){
out=out+s[i];
if(i==s.length()-1){
	return;
}
if(s[i]==s[i+1]){
	out=out+"*";

}
rec(s,out,i+1);

}
int main() {

	string  s;
	string  out="";
	cin>>s;
	rec(s,out);
	cout<<out;
	return 0;
}
