#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int hrs, min, sec;
	cout<<"Enter hours (0-23): ";
	cin>>hrs;
	cout<<"Enter minutes (0-59) ";
	cin>>min;
	cout<<"Enter secondes (0-59) ";
	cin>>sec;

	if(sec < 0 || sec > 59) sec = 0;
	if(min < 0 || min > 59) min = 0;
	if(hrs < 0 || hrs > 23) hrs = 0;

	while (1){
		system("cls");

		cout<< (hrs < 10 ? "0" : "") << hrs <<":"
		    << (min < 10 ? "0" : "") << min <<":"
			<< (sec < 10 ? "0" : "") << sec <<endl;

		sec++;	
		if(sec > 59){
			sec = 0;
			min++ ;
		    if(min > 59){
			   min = 0;
			   hrs++ ;
		       if(hrs > 23){
			       hrs=0;
		}
	}
}

		
Sleep(1000);
}
	return 0;
