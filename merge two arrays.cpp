// program to merge two arrays sorted in ascending order;

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2, n3, k ;
	
	cout<<"enter the n1: ";
	cin>>n1;
	cout<<"enter the n2: ";
	cin>>n2;
	
	n3 = n1 + n2;
	
	
	int arr1[n1], arr2[n2], arr3[n3];
	
	for (int i=0; i<n1; ++i){
		cin>>arr1[i];
	}
	for (int i=0;i<n2;++i){
		cin>>arr2[i];
	}
	for (int i=0;i<n1;++i){
		arr3[i] = arr1[i];
	}
	for(int i=n1;i<n3; ++i){
		arr3[i] = arr2[k];
		k++;
	}
	
// displaying ...3
	for(int i=0;i<n3;++i){
		for(int j=i+1;j<n3;++j){
			if(arr3[i]>arr3[j]){
				int temp = arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	for(int i=0;i<n3;++i){
			cout<<"elements: "<<arr3[i]<<endl;
			cout<<"\n"<<endl;
		}
	return 0;
	
}
