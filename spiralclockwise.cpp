#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int i,j;
    for(i=0;i<m;i++){
	            for(j=0;j<n;j++){
		        cin>>arr[i][j];

	       }
     }

    int r=0,c=0,dir=0;
    while(r<m && c<n){
        if(dir==0){
		   for(i=c;i<n;i++){
			cout<<arr[r][i]<<",";
		   }
		   r=r+1;
	    }
	
	    else if(dir==1){
		
     for(i=r;i<m;i++){
		cout<<arr[i][n-1]<<",";
	 }
	 n=n-1;
		
	}
	
	else if(dir==2){
		for(i=n-1;i>=0;i--){
			cout<<arr[m-1][i]<<",";
		}
      m=m-1;
	}
	
	else if(dir==3){
		for(i=m-1;i>0;i--){
			cout<<arr[i][c]<<",";
		}
			c++;

	}
	dir=(dir+1)%4;

}
cout<<"END";
return 0;
}
