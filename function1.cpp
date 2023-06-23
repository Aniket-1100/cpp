#include <iostream>
using namespace std;
int power(){
	int a,b;
	cout<<"enter a: ";
	cin>>a;
	cout<<"enter b: ";
	cin>>b;
	int ans=1;
	for(int i=1;i<=b;i++){
		ans*=a;
	}
	return ans;
}
int main(){
	int ans=power();
	cout<<"answer is: "<<ans<<endl;
	
}
