#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int t=m+n;
	int arr[t];
	int i=0,j=0,k=0;
	while(i<n){
		arr[k]=a[i];
		i++;
		k++;
	}
	while(j<m){
		arr[k]=b[j];
		j++;
		k++;
	}
	for(i=0;i<t;i++){
		cout<<arr[i]<<" ";
	}
}
