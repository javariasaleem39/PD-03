#include<iostream>
using namespace std;
main(){
	cout<<"Enter a 4-digit number: ";
	int number;
	cin>>number;
	int num1;
	num1=number%10;
	int num2;
	num2=(number/10)%10;
	int num3;
	num3=(number/100)%10;
	int num4;
	num4=(number/1000)%10;
        int sum;
	sum=num1+num2+num3+num4;
	cout<<"Sum of the individual digits: "<< sum;
}
	