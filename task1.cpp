#include<iostream>
using namespace std;

main(){
	cout<< "Enter the number of sides of the polygon: ";
	int Sides;
	cin>> Sides;
	int I_angles=(Sides-2)*180;
	cout<< "The sum of internal angles of a "<<Sides<<"-sided polygon is: "<<I_angles<<" degrees";
	


}