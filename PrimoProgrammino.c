#include <stdio.h>
#include <stdlib.h>
main()
{
int x, n, c, mag, min, ug, numero;
c=0;
mag=0;
min=0;
ug=0;

printf("\n inserire il numero di numeri:  ");
scanf("%d",&n);
printf("\n inserire il numero x:  ");
scanf("%d",&x);
do
{
  printf("\n inserire il numero:  ");
  scanf("%d",&numero);
  if(numero>x)
  {
    mag=mag+1;
  }
  else
  {
    if(numero<x)
        {
          min=min+1;        
        }
        else
        {
           if(numero==x)
               {
                 ug=ug+1;         
               }   
        }      
        
  } 
  c=c+1;        
}
while(c!=n);
printf("\n I numeri maggiori di x sono: %d",mag);
printf("\n I numeri minori di x sono: %d",min);
printf("\n I numeri uguali a x sono: %d",ug);



}
