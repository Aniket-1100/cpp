#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter value of n: ";
	cin>>n;
	cout<<"\n";
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<'*';
			j+=1;
		}
		cout<<"\n";
		i+=1;
	}
	
}
