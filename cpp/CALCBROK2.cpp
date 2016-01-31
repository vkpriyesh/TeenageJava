#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();


	double broke,buy,sell,qty;
	cout<<"Enter brokerage Rate:"<<endl;
	cin>>broke;
	cout<<"Enter Buying amount:"<<endl;
	cin>>buy;
	cout<<"Enter Selling amount:"<<endl;
	cin>>sell;
	cout<<"Enter Quantity of shares:"<<endl;
	cin>>qty;

	double totalbuy=qty*buy;
	double brokecharge=(broke/100)*totalbuy;
	double st=(10.36/100)*brokecharge;
	double totalbuycharges=brokecharge+st;

	double totsell=sell*qty;
	double sellbrokecharge=(broke/100)*totsell;
	double stt=(0.025/100)*totsell;
	double sellst=(10.36/100)*sellbrokecharge;
	double totalsellcharges=sellbrokecharge+stt+sellst;

	double totalcharge=totalbuycharges+totalsellcharges;

	double temp=totalbuy+totsell;
	double regstcharge=(0.006/100)*temp;

	double total_pay=totalcharge+regstcharge;
	double temp2=totsell-totalbuy-total_pay;

	if(temp2>0){
		cout<<"\n\nProfit"<<endl;
		cout<<"\nRs."<<temp2;
	}
	else
	if(temp2<0){
		cout<<"\n\nLoss"<<endl;
		cout<<"Rs."<<-(temp2);
	}
	else
	cout<<"Invalid Input!!!";
getch();
}
















