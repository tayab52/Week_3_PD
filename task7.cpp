#include<iostream>
using namespace std;
main(){
cout<< "Enter the movie name: ";
string movie_name;
cin>> movie_name;
cout<< "Enter the adult ticket price: $";
int Adult_ticket;
cin>>Adult_ticket;
cout<< "Enter the child ticket price: $";
int Child_ticket;
cin>> Child_ticket;
cout<< "Enter the number of adult tickets sold: ";
int Adult_tickets_sold;
cin>> Adult_tickets_sold;
cout<< "Enter the number of child tickets sold: ";
int Child_tickets_sold;
cin>> Child_tickets_sold;
cout<< "Enter the percentage of the amount to be donated to charity: ";
int Donation_percentage;
cin>> Donation_percentage;
cout<< "Movie: "<<movie_name<<endl;
int Amount_from_ticket=(Adult_ticket*Adult_tickets_sold)+(Child_ticket*Child_tickets_sold);
cout<< "Total amount generated from ticket sales: $"<<Amount_from_ticket<<endl;
int Donation_charity=(Amount_from_ticket*0.1);
cout<< "Donation to charity (10%): $"<<Donation_charity<<endl;
int Remaining_amount=Amount_from_ticket-Donation_charity;
cout<< "Remaining amount after donation: $"<<Remaining_amount;




}