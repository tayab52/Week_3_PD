#include<iostream>
using namespace std;
main(){
int Person_age;
int Moved;
int Avg_years;
cout<< "Enter the person's age: ";
cin>> Person_age;
cout<< "Enter the number of times they've moved: ";
cin>> Moved;
Avg_years=Person_age/(Moved+1);
cout<< "Average number of years lived in the same house: "<<Avg_years;



}