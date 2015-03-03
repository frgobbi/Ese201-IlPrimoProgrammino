#include <stdio.h>
#include <stdlib.h>

main()
{
int c,cp,cd,cpos,cn,n,numero,sommapos,sommaneg;
float percentp,percentd;

c=0;
cp=0;
cd=0;
cpos=0;
cn=0;
sommapos=0;
sommaneg=0;

printf("\n inserischi il numero di numeri:   ");
scanf("%d",&n);
do
{
printf("\n inserisci il numero:  ");
scanf("%d",&numero);
if(numero>=0)
{
             cpos=cpos+1;
             sommapos=sommapos+numero;
}
else
{
     cn=cn+1;
     sommaneg=sommaneg+numero;
}     
if(numero%2==0)
{
cp=cp+1;
}
else
{
cd=cd+1;    
}
c=c+1;
}
while(c!=n);
printf("\n i numeri positivi sono: %d",cpos);
printf("\n i numeri negativi sono: %d",cn);

if(sommapos==(sommaneg*-1))
{
printf("\n le 2 somme sono uguali");
}
else
{
if(sommapos>sommaneg*-1)
{
printf("\n la somma maggiore e' la somma dei positivi e': %d",sommapos);
}
else
{
printf("\n la somma maggiore e' la somma dei negativi e': %d",sommaneg);    
}
}
percentd=(cd*100)/n;
percentp=(cp*100)/n;

printf("\n la percentuale dei numeri positivi e': %3.0f percento",percentd);
printf("\n la percentuale dei numeri positivi e': %3.0f percento",percentp);



}
