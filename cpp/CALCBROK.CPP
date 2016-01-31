#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	const float stt1=0.025/100;
	const float st1=10.36/100;
	const float regstcharge1=0.006/100;
	float broke,buy,sell,qty;
	cout<<"Enter brokerage Rate:"<<endl;
	cin>>broke;
	cout<<"Enter Buying amount:"<<endl;
	cin>>buy;
	cout<<"Enter Selling amount:"<<endl;
	cin>>sell;
	cout<<"Enter Quantity of shares:"<<endl;
	cin>>qty;

	float totalbuy=qty*buy;
	float brokecharge=(broke/100)*totalbuy;
	float st=(st1/100)*brokecharge;
	float totalbuycharges=brokecharge+st;

	float totsell=sell*qty;
	float sellbrokecharge=(broke/100)*totsell;
	float stt=(stt1/100)*totsell;
	float sellst=(st1/100)*sellbrokecharge;
	float totalsellcharges=sellbrokecharge+stt+sellst;

	float totalcharge=totalbuycharges+totalsellcharges;

	float temp=totalbuy+totsell;
	float regstcharge=(regstcharge1/100)*temp;

	float total_pay=totalcharge+regstcharge;
	float temp2=totsell-totalbuy-total_pay;

	if(temp2>0){
		cout<<"\n\nProfit"<<endl;
		cout<<"\nRs."<<setprecision(2)<<temp2;
	}
	else
	if(temp2<0){
		cout<<"\n\nLoss"<<endl;
		cout<<"Rs."<<setprecision(2)<<-(temp2);
	}
	else
	cout<<"Invalid Input!!!";
getch();
}
















