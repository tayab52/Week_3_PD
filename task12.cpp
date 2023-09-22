#include<iostream>
using namespace std;
main(){
int Total_square_meters;
int Width;
int height;
int Walls_can_paint;
cout<< "Number of square meters you can paint: ";
cin>>Total_square_meters;
cout<< "Width of the single wall (in meters): ";
cin>> Width;
cout<< "Height of the single wall (in meters): ";
cin>> height;
Walls_can_paint=Total_square_meters/(Width*height);
cout<< "Number of walls you can paint: "<<Walls_can_paint;






}