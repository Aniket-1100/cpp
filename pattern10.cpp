#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1,temp=i;
		while(j<=i){
			cout<<temp<<" ";
			j+=1;
			temp-=1;
		}
		cout<<endl;
		i+=1;
	}
}
