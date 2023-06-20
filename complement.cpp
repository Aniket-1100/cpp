#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter : ";
	cin>>n;
	if(n==0){
		cout<<1;
	}
	else if(n!=0){
		int m=n;
		int mask=0;
		while(m!=0){
			mask=(mask<<1)|1;
			m=m>>1;
		}
		int ans=(~n)&mask;
		cout<<"complement of "<<n<<" is "<<ans;
	}
	
}
