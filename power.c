#include<stdio.h>
void main(){
  int base,power,value=1,i;
  scanf("%d",&base,&power);
  for(i=1;i<=power;i++){
    value*=base;
    }
    printf("%d",value);
    }
