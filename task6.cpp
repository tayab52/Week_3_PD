#include<iostream>
using namespace std;
main(){

cout<<"Enter the size of the fertilizer bag in pounds: ";
int Size_of_bag;
cin>> Size_of_bag;
cout<<"Enter the cost of the bag: $";
int Cost_of_bag;
cin>> Cost_of_bag;
cout<<"Enter the area in square feet that can be covered by the bag: ";
int Area_covered_bag;
cin>> Area_covered_bag;
int Cost_per_pound=Cost_of_bag/Size_of_bag;
cout<<"Cost of fertilizer per pound: $"<<Cost_per_pound;
cout<<endl;
int Cost_per_square;
Cost_per_square=Cost_of_bag/Area_covered_bag;
cout<<"Cost of fertilizing per square foot: $"<<Cost_per_square;


}