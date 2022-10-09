#include<iostream>
using namespace std;
void stockBuyAndSell(int arr[],int n){
    int i=0;
    int c=0;
	    while(i<n-1){
	        
	        while((i<n-1) && arr[i+1]<=arr[i]){
	            i++;
	        }
	        
	        if(i==n-1){
	            break ;
	        }
	        int minima=i++;
	        
	        while((i<n) && arr[i]>=arr[i-1]){
	            i++;
	        }
	        int maxima = i-1;

	       cout<<"("<<minima <<" "<<maxima<<") ";
	       c++;
	       
	    }
	    if(c==0){
	        cout<<"No Profit";
	    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    stockBuyAndSell(arr,n);
	    cout<<"\n";
	}
	return 0;
}