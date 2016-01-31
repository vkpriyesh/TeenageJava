#include<constrea.h>
#include<process.h>
class bank{
public:
	virtual void ach()=0;
	virtual void dep()=0;
	virtual void wit()=0;
	virtual void bal()=0;


};

class hdfc:public bank{
float depa,wita,bala;
int acn;
public:
char acnm[40],add[100];
	void ach(){
	cout<<"Enter account number:\n";
	cin>>acn;
	cout<<"Enter the name of the holder:\n";
	cin>>acnm;
	cout<<"Enter the address of the holder:\n";
	cin>>add;
	}
	void dep(){
	cout<<"Enter the amount to deposit(Amount must be greater tha Rs.1500):\n";
	cin>>depa;
	}
	void wit(){

	cout<<"Enter the amount to withdraw:\n";
	cin>>wita;
	bala=depa-wita;
		if(bala>1500)
			cout<<"Your transaction is successful\n";
		if(bala<1500)
			cout<<"You have insufficient fund\n";
			exit;

	}
	void bal(){
	bala=depa-wita;
	cout<<"You have left with Rs."<<bala;
	}
	void sum(){
	cout<<"Mr./Ms. "<<acnm<<" with address: "<<add<<" has left with balance Rs. "<<bala;
	}
};

void main(){
bank *b;
clrscr();
hdfc h;
b=&h;
b->ach();
b->dep();
b->wit();
b->bal();
h.sum();
getch();
}
