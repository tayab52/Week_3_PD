#include<iostream>
using namespace std;

main(){
cout << "Enter Initial Velocity (m/s): ";
int Initial_velocity;
cin>> Initial_velocity;
cout << "Enter Acceleration (m/s^2): ";
int Acceleration;
cin>> Acceleration;
cout << "Enter Time (s): ";
int Time;
cin>> Time;
int Final_velocity=(Acceleration*Time)+Initial_velocity;
cout << "Final Velocity (m/s): "<<Final_velocity;





}