#include<iostream>
#include<iomanip>
using namespace std;
class time
{
	private :
		int hh,mm,ss;
		int seconds;
	public :
		void gettime(void);
		void consec(void);
		void display(void);
				
};
void time ::gettime(void)
{
	cout<<"enter hour"<<endl;
	cin>>hh;
	cout<<"enter minutes"<<endl;
	cin>>mm;
	cout<<"enter seconds"<<endl;
	cin>>ss;
	
}
void time ::consec(void)
{
	seconds = hh*3600 + mm*60 + ss;
}
void time ::display(void)
{
	cout<<"TIME : "<< setw(2)<<setfill('0')<<hh<<":";
	cout<<setw(2)<<setfill('0')<<mm<<":";
	cout<<setw(2)<<setfill('0')<<mm<<":";
	cout<<"seconds ="<<seconds;
}
int main()
{
	time t;
	t.gettime();
	t.consec();
	t.display();
	return 0;
}
