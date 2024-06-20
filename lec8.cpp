#include<iostream>
using namespace std;
int main(){
	int arr[10];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<=9;i++){
		cin>>arr[i];
	}
	cout<<"print array in reverse";
	for(int i=9;i>=0;i--){
		cout<<arr[i]<<endl;
	}
}
