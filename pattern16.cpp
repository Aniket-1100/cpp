#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	int i=1;
	char ch='A'+i-1;
	while(i<=n){
		int j=1;
		while(j<=i){
		cout<<ch<<" ";
		j+=1;
		}
		cout<<endl;
		ch+=1;
		i+=1;
	}
}
