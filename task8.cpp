#include<iostream>
using namespace std;
main(){
float Veg_price;
cout<<"Enter vegetable price per kilogram (in coins): ";

cin>> Veg_price;
cout<<"Enter fruit price per kilogram (in coins): ";
float Fruit_price;
cin>> Fruit_price;
cout<<"Enter total kilograms of vegetables: ";
int Total_veg;
cin>> Total_veg;
cout<<"Enter total kilograms of fruits: ";
int Total_fruits;
cin>> Total_fruits;
float Total_earnings=(Veg_price*Total_veg)+(Fruit_price*Total_fruits);
int Earnings_in_rps=Total_earnings/1.94;
cout<<"Total earnings in Rupees (Rps): "<<Earnings_in_rps;

}