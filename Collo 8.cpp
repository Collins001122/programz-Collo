// Program to sum even numbers between a given range
#include <iostream>

using namespace std;

int main()
{
	int n,counter=0,sum=0;
cout<<"enter a number : ";
cin>>n;

while(n>=counter)
{
	if(counter%2==0)
	{
	sum+=counter;	
	}
	
	counter++;
}
cout<<sum;

return 0;
}