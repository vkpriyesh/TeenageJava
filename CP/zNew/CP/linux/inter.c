#include <stdio.h>
#define PER 10
#define PRI 5000.00
void main(){
int yr;
float am,val,rat;
am=PRI;
rat=0.11;
yr=0;
while(yr<=PER){
printf("%2d, %8.2f\n",yr,am);
val=am+rat*am;
yr=yr+1;
am=val;
}
}