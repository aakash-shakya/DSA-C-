// wap to store info of student with their academic records

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

struct student{
	int id_no;
	char name[10];
	char faculty[10];
	struct academics {
		char subject[5];
		int marks;
	} acd;
};


int main(){
	
	int n;
	cout<<"enter no. of students: ";
	cin>>n;
	cout<<"enter the details of student:"<<endl;
	
	struct student s[n];
	for (int i = 0;i<n;++i){
		
		cout<<"enter id no :";
		cin>>s[i].id_no;
		cout<<"enter name: ";
		cin>>s[i].name;
		cout<<"enter faculty: ";
		cin>>s[i].faculty;
		
		cout<< "enter subject : ";
		cin>>s[i].acd.subject;
		
		cout<<"enter marks: ";
		cin>>s[i].acd.marks;
		cout<<"\n"<<endl;
			
	}
	
	for (int i=0;i<n;++i){
		
		cout<<"id no: "<<s[i].id_no<<endl ;
		cout<<"name: "<<s[i].name<<endl;
		cout<<"faculty  "<<s[i].faculty<<endl;
		cout<<"subject: "<<s[i].acd.subject<<endl;
		cout<<"marks: "<<s[i].acd.marks<<endl;
		cout<<"\n"<<endl;
	}
	return 0;
	
	
}









