#include<iostream>
using namespace std;
class Time {
	private :
	int hh,mm,ss;	
	int seconds;
	public :
		enterdetails();
		convertintoseconds();
		displayTime();
		
};

Time::enterdetails() {
	cout<<"Enter time:";
	cout<<"\nHours? ";
	cin>>hh;
	cout<<"Minutes? ";
	cin>>mm;
	cout<<"Seconds? ";
	cin>>ss;
}

Time::convertintoseconds() {
	seconds = hh*3600 + mm*60 + ss;
}

Time::displayTime() {
	cout<<"The time is = " << hh << ":"
	                       << mm << ":"
						   << ss <<endl;
	cout<<"\nTime in total seconds:"<<seconds;
	
}

main()
{
	Time T;
	T.enterdetails();
	T.convertintoseconds();
	T.displayTime();
return 0;
}
