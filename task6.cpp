#include<iostream>
using namespace std;
main(){
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	double size;
	cin>>size;
	cout<<"Enter the cost of the bag: $";
	double cost;
	cin>>cost;
	double area;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	double cost_pounds;
	cost_pounds=cost/size;
	double cost_area;
	cost_area=cost/area;
	cout<<"Cost of fertilizer per pound: $"<<cost_pounds<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<cost_area;
}
