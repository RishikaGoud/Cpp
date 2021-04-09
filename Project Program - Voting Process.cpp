#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter Age of a User:";
	cin>>age;
	if(age>=18)
	{
	cout<<"\nYou are eligible for voting";
	}
	else
	{
	cout<<"\nYou are not eligible for voting";
	}
	int division;
	cout<<"\nEnter division number:";
	cin>>division;
	int party;
	cout<<"\nEnter Party number:";
	cin>>party;
	switch(party)
	{
	 case 1:
		cout<<"Voted to TRS";
		break;
	 case 2:
		cout<<"Voted to BJP";
		break;
	 case 3:
		cout<<"Voted to Congress";
		break;
	 default:
		cout<<"Voted to Independent party";
		break;
	}
return 0;
}
