#include<iostream>
using namespace std;
main(){
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float veg;
	cin>>veg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruit;
	cin>>fruit;
	cout<<"Enter total kilograms of vegetables: ";
	float tveg;
	cin>>tveg;
	cout<<"Enter total kilograms of fruits: ";
	float tfruits;
	cin>>tfruits;
	float tearnings;
 	tearnings=(veg*tveg)+(fruit*tfruits);
	float trupees;
	trupees=tearnings/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<trupees;
}