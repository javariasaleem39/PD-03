#include<iostream>
using namespace std;
main(){
	cout<<"Number of Minutes: ";
	int mins;
	cin>>mins;
	cout<<"Frames per Second: ";
	int second;
	cin>>second;
	int tFrames;
	tFrames=mins*second*60;
 	cout<<"Total Number of Frames: "<<tFrames<<endl;
}