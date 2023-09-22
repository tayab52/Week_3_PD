#include<iostream>
using namespace std;
main(){

cout<< "Enter a 4-digit number: ";
int Four_digit;
cin>> Four_digit;
int First_remainder=Four_digit%10;
int Three_digit=Four_digit/10;
int Second_remainder=Three_digit%10;
int Two_digit=Three_digit/10;
int Third_remainder=Two_digit%10;
int One_digit=Two_digit/10;
int Total_sum=First_remainder+Second_remainder+Third_remainder+One_digit;
cout<< "Sum of the individual digits: "<<Total_sum;

}