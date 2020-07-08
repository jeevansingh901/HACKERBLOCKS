#include<bits/stdc++.h>
using namespace std;

void printSpan(int a[], int n){
	stack<int> s;
	int ans[n]= {0};
   //s.push(0);
   // ans[0]=1;
	for(int day = 0 ; day < n ; day++){
		// 
	  while( !s.empty() && a[s.top()] < a[day]){ // you need to pop the elements until current day's stock price is greater than the previous element's stock price
	    
	      s.pop();
	    
	  }
		
		
		//int span = s.size();// You cannot use stack's size as to determine the elements which have lower stock price
		ans[day] = s.empty()?day+1:day-s.top();
        s.push(day);
    
	}
	for(int i=0 ; i< n ;i++){
		cout << ans[i] << " ";
	}
	cout << "END" << endl;
}

int main(){
  
   
	int n;
	cin >> n;
	int a[n];
	for(int i=0 ; i< n; i++){
		cin >> a[i];
	}
  if(n>0)
	printSpan(a,n);
    
	return 0;
}
