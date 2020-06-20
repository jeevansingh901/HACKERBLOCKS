#include<iostream>
using namespace std;

int totalchange( int S[], int n, int m){
    
    int table[n+1]; 
  
    memset(table, 0, sizeof(table)); 
   
    table[0] = 1; 
  
    
    for(int i=0; i<m; i++) 
        for(int j=S[i]; j<=n; j++) 
            table[j] += table[j-S[i]]; 
  
    return table[n]; 
} 
int main() {
	int cent;
	cin>>cent;
	int n;
	cin>>n;
	int * arr=new int[n ];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<totalchange(arr,cent,n);
	return 0;
}
