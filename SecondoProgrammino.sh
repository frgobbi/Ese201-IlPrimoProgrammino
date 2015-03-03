#!/bin/bash

c=0
cp=0
cd=0
cpos=0
cn=0
sommapos=0
sommaneg=0

echo "inserischi il numero di numeri:"
read n

echo "inserire numeri sia positivi che negativi"
for((i=1;i<=n;i++))
do
echo "inserisci il numero:"
read numero

	if [ $numero -ge 0 ]
	then
            cpos=$(( $cpos+1 ))
            sommapos=$(( $sommapos+numero ))
	else
    		cn=$(( $cn+1 ))
    		sommaneg=$(( $sommaneg+numero ))
	fi  
	   
if [ $(($numero %2 )) -eq 0 ]
then
	cp=$(( $cp+1 ))
else
	cd=$(( $cd+1 ))   
fi

done

echo "i numeri positivi sono: "$cpos
echo "i numeri negativi sono: "$cn

if [ $sommapos -eq $(( $sommaneg*-1 )) ]
then
	
echo "le 2 somme sono uguali"

else
	
	if [ $sommapos -gt $(( $sommaneg*-1 )) ]
	then
		
	echo" la somma maggiore e' la somma dei positivi e':"$sommapos

	else
	echo "la somma maggiore e' la somma dei negativi e': "$sommaneg   
	fi
fi
percentd=$(( $cd*100 ))
percentd=$(( $percentd/$n ))
percentp=$(($cp*100 ))
percentp=$(( $percentp/$n ))

echo "la percentuale dei numeri positivi e': "$percentd "%"
echo "la percentuale dei numeri positivi e': "$percentp "%"
