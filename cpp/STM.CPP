#include<constrea.h>
class stud{
int rno,sm[5],i,s;
float per;
char fn[50],ln[50];

public:

void studd(){
	cout<<"Enter Students' Roll Number:";
	cin>>rno;
	cout<<"Enter Students' First Name:";
	cin>>fn;
	cout<<"Enter Students' Last Name:";
	cin>>ln;
	}

void studm(){
	s=0;

	for(i=0;i<5;i++){
		cout<<"Enter marks for subject code"<<i+1<<":";
		cin>>sm[i];
		s=s+sm[i];
		}
	}

void calc(){
	 per=s/5;
	}


void show(){
	if(per>40){
		if(per>=90)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE A++";

		if(per>=80 && per<90)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE A+";

		if(per>=70 && per<80)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE A";
cout<<" & he/she is PASSED";
	}


		if(per>=60 && per<70)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE B+";

		if(per>=50 && per<60)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE B";

		if(per>=40 && per<50)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE C";
	if(per<=40){
		if(per>=30 && per<40)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE D";

		if(per>=20 && per<30)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE E";

		if(per>=10 && per<20)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE F";

		if(per>=0 && per<10)
		cout<<"Mr./Ms. "<<fn<<" "<<ln<<" has got "<<per<<"\% & GRADE G";

cout<<" & he/she is FAILED" ;
		}

	}

};


void main(){
	clrscr();
	stud a;
	a.studd();
	a.studm();
	a.calc();
	a.show();
	getch();
}