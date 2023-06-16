#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the value of n: ";
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i+=2){
	count+=i;
	}
	cout<<count<<endl;
}

