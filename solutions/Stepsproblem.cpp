#include <iostream>
using namespace std;
bool Stair(int n)
{
	int rem5=n%5,rem7=n%7;
	if(rem5%7==0||rem7%5==0)
		return(true);
	else
		return(false);
}
int main()
{
	int n;
	cout<<"Enter no. of steps :";
	cin>>n;
	if(Stair(n))
	{
		cout<<"\nCan be reached\nTrue";
	}
	else
	{
		cout<<"\nCannot be reached\nFalse";
	}
}
