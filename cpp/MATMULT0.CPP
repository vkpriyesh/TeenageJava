#include<constrea.h>

void main(){
int a[2][3],b[3][2],c[2][2],a1=2,a2=3,b1=3,b2=2,i,j,k,sum;
clrscr();
  for(i=0;i<a1;i++){
    for(j=0;j<a2;j++){
	cout<<"Enter a["<<i+1<<"]"<<"["<<j+1<<"]:";
	cin>>a[i][j];
    }

  }
cout<<"Your I matrix is:\n";
  for(i=0;i<a1;i++){
    for(j=0;j<a2;j++){
      cout<<a[i][j]<<" ";

    }
    cout<<"\n";
  }
      //First matrix on end

  for(i=0;i<b1;i++){
    for(j=0;j<b2;j++){
      cout<<"Enter b["<<i+1<<"]"<<"["<<j+1<<"]:";
      cin>>b[i][j];
    }

  }
cout<<"Your II matrix is:\n";
  for(i=0;i<b1;i++){
    for(j=0;j<b2;j++){
      cout<<b[i][j]<<" ";

    }
    cout<<"\n";
  }
  //Second matrix on end

  for(i=0;i<a1;i++){
    for(j=0;j<b2;j++){
      sum=0;
      for(k=0;k<b1;k++){
	sum=sum+a[i][k]*b[k][j];
	c[i][j]=sum;
      }


    }

  }
  cout<<"Your multiplied matrix is:\n";
  for(i=0;i<a1;i++){
    for(j=0;j<b2;j++){
      cout<<c[i][j]<<" ";

    }
    cout<<"\n";
  }

getch();
}
