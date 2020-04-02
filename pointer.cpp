// wap to sort given 10 number using array with pointer...

#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[10]={3,6,9,2,5,8,1,7,4,0}, *temp, *ptr;
	
	
	for (int i=0; i<10; ++i){
		for (int j=i+1; j<10; ++j){
			if (*(ptr+i)>*(ptr+j) ){ 
				temp = *(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
		
	}
	
	for (int i=0; i<10; ++i){
		cout<<*(ptr+i);
			}
		
		
	
	
	
	return 0;
}
