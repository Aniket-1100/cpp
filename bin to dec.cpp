#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	int temp=n;
	int i=0,ans=0;
	while(n!=0){
		int digit=n%10;
		ans = ans+digit*pow(2,i);
		
		n=n/10;
		i++;
	}
	cout<<"decimal of binary "<<temp<<" is "<<ans;
}
