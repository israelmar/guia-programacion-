// MARQUEZ CALDERON ISRAEL
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
int n,j;
float s=0,i=1;
printf("Realize una sumatoria de "
       " operacion ((i*i)+1)/i, cuando i=1, cuantas veces desee.\n");
printf("Introduzca el numero de veces que quiera hacer la suma:\n");
scanf("%d",&n);
for(j=0;j<n;j++){
 s=s+(((i*i)+1)/i);
 i++;	
}
printf("El resultado es:%f",s);
}
