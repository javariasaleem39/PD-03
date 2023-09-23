#include<iostream>
using namespace std;
main(){
	cout<<"Enter the movie name: ";
	string name;
	cin>>name;

	cout<<"Enter the adult ticket price: $";
	float adult;
	cin>>adult;

	cout<<"Enter the child ticket price: $";
	float child;
	cin>>child;

	cout<<"Enter the number of adult tickets sold: ";
	float adult_tickets;
	cin>>adult_tickets;

	cout<<"Enter the number of child tickets sold: ";
	float child_tickets;
	cin>>child_tickets;

	cout<<"Enter the percentage of the amount to be donated to charity: ";
	float percentage;
	cin>>percentage;

	float tamount;
	tamount=(adult*adult_tickets)+(child*child_tickets);

	float charity;
	charity=(tamount*percentage)*0.01;

	float remain_amount;
	remain_amount=tamount-charity;

	cout<<endl;

	cout<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from ticket sales: $"<<tamount<<endl;
	cout<<"Donation to charity (10%): $"<<charity<<endl;
	cout<<"Remaining amount after donation: $"<<remain_amount<<endl;
}
	
	