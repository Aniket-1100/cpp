#include <iostream>
using namespace std;
int combination(int x){
	int fact=1;
	for(int i=1;i<=x;i++){
		fact*=i;
	}
	return fact;
}
int main(){
	int x,y;
	cout<<"enter x: ";
	cin>>x;
	cout<<"enter y: ";
	cin>>y;
	int a=combination(x);
	int b=combination(y);
	int c=combination(x-y);
	cout<<"the answer is: "<<a/(b*c);
}
