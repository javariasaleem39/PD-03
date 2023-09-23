#include<iostream>
using namespace std;
main(){
	cout<<"Enter the person's age: ";
	int age;
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	int move;
	cin>>move;
	int moves;
	moves=move+1;
	int average;
	average=age/moves;
	cout<<"Average number of years lived in the same house: "<<average;
}