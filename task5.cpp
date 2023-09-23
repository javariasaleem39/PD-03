#include<iostream>
using namespace std;
main(){
	cout<<"Enter the Name of the Person: ";
	string name;
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	int weight;
	cin>>weight;
	int tdays;
	tdays=weight*15;
	cout<< name<<" will need "<<tdays<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions";
}