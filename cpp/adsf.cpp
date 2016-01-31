#include<iostream.h>
void main(){
	clrscr();
	
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
	float st=(10.36/100)*brokecharge;
	float totalbuycharges=brokecharge+st;

	float totsell=sell*qty;
	float sellbrokecharge=(broke/100)*totsell;
	float stt=(0.025/100)*totsell;
	float sellst=(10.36/100)*sellbroke;
	float totalsellcharges=sellbrokecharge+stt+sellst;

	float totalcharge=totalbuycharge+totalsellcharge;

	float temp=totalbuy+totsell;
	float regstcharge=(0.006/100)*temp;

	float total_pay=totalcharge+regstcharge;
	float temp2=totsell-totalbuy;
	
	if(temp2>0){
		cout<<"Profit";
		cout<<"Rs."<<temp2;
	}
	else
	if(temp2<0){
		cout<<"Loss";
		cout<<"Rs."<<-(temp2);
	}
	else
	cout<<"Invalid Input!!!";
getch();
}















