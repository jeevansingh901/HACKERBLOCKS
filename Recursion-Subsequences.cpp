#include <iostream>
#include <cstring>
using namespace std;

int count = 0;


void subseq(string input,string osf)
{
	if(input.length()==0)
    {
		//d[j] = '\0';
		cout<<osf<<" ";
		count++;
		return;
	}
    char ch=input[0];
    string ros=input.substr(1);
	//d[j] = c[i];
    subseq(ros,osf);
	subseq(ros,osf+ch);
	return;
}

int main(){

	//char c[10000];
    string input;
	cin>>input;
	//int n = strlen(c);
	//cout<<n<<endl;
    //cout<<c<<endl;
	//c[n] = '\0';
    string output;
	//char d[n+1];
	subseq(input," ");
	cout<<endl;
	cout<<count<<endl;
	return 0;
}
