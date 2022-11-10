//Area of acircle using a function...
#include<iostream>
using namespace std;
float circle(int r);//function prototype
int main()
{
	int radius;
	float area;
	cout<<"enter radius"<<endl;
	cin>>radius;
	area=circle (radius);//function calling
	cout<<"The area is"<<area<<endl;
	return 0;	
	}
float circle(int r){//function definition
float area;
area=3.142*r*r;
return area;
	
}