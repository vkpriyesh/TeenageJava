#include<stdio.h>
class ABC{
  int x,y,z;
public:
  void xy(){
    cout<<"Enter 1st number:";
    cin>>x;
    cout<<"Enter 2nd number:";
    cin>>y;
    cout<<"The sum of "<<x<<"+"<<y<<" is "<<z;
  }
};
void main(){
  ABC x;
  x.xy();
  
}