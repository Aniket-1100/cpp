#include <iostream>
using namespace std;
bool isEven(){
	int num;
	cout<<"enter number: ";
	cin>>num;
	if(num&1){
		return 0;
	}
	return 1;
}
int main(){
	if(isEven()){
		cout<<"number is even"<<endl;
	}
	else{
		cout<<"number is odd"<<endl;
	}
}
