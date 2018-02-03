#include<iostream>
using namespace std;
long long maxproduct(int a[],int n);
int main(){
    long int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
      cin>>a[i];
    
    long long ans=maxproduct(a,n);
    cout<<ans<<"\n";
    return 0;
      
}
long long maxproduct(int a[],int n){
	long long max=0;
	int index1=-1;
	for(int i=0;i<n;i++){
		if(a[i]>=a[index1])
			index1=i;
	}
	int index2=-1;
	for(int i=0;i<n;i++){
		if(a[i]>=a[index2]&&(i!=index1))
			index2=i;
	}
	max=(long long)a[index1]*(long long)a[index2];
	return max;
	
}