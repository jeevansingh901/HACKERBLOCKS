#include<iostream>
#include<cstring>
using namespace std;
void movetoend(string &s,int i, int l){
if(i>=l){
	return;
}
char x=s[i];
if(x!='x'){
		cout<<x;
	}
	movetoend(s,i+1,l);
if(x=='x'){
	cout<<x;
}
return;

}
int main() {
	string s;
	cin>>s;
	int l=s.length();
	movetoend(s,0,l);

	return 0;
}
