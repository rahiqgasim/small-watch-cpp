#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int hrs, min, sec;
	cout<<"Hours ";
	cin>>hrs;
	cout<<"Minutes ";
	cin>>min;
	cout<<"Secondes ";
	cin>>sec;
	while (1){
		system("cls");
		if(sec>59){
			min++;
			sec=0;
		}
		if(min>59){
			hrs++;
			min=0;
		}
		if(hrs<23){
			hrs=0;
		}
		cout<<hrs<<":"<<min<<":"<<sec<<endl;
		sec++;
		Sleep(900);
	}
	return 0;
}
