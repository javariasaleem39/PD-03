#include<iostream>
using namespace std;
main(){
	cout<<"Enter Initial Velocity (m/s): ";
	float V;
	cin>>V;
	cout<<"Enter Acceleration (m/s^2): ";
	float A;
	cin>>A;
	cout<<"Enter Time (s): ";
	float T;
	cin>>T;
	float fVelocity;
	fVelocity=(A*T)+V;
	cout<<"Final Velocity (m/s): "<<fVelocity;
}