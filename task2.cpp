#include<iostream>
using namespace std;

main(){
cout<< "Number of Minutes: ";
int Minutes;
cin>> Minutes;
cout<< "Frames per Second: ";
int Framespersecond;
cin>> Framespersecond;
int Totalframes=(Framespersecond*60)*Minutes;
cout<< "Total Number of Frames: "<<Totalframes;


}