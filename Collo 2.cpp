//program to convert degree Fahrenheit to degree celsius
#include<iostream>
using namespace std;
float d(int fahrenheit);

int main(){
int fahrenheit;
float Celsius;
cout<<"enter the fahrenheit"<<endl;
cin>>fahrenheit ;
Celsius=d(fahrenheit);
cout<<"celsius is"<<Celsius<<endl;
return 0;
}

float d(int fahrenheit){
float celsius;
celsius=0.5555555556*(fahrenheit-32);
return celsius ;
}