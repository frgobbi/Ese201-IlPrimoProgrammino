#!/bin/bash

c=0
mag=0
min=0
ug=0

echo "inserire il numero dei numeri";
read n
echo "inserire numero per il confronto";
read x
for ((i=1;i<=n;i++))
do
	echo "inserire numero";
	read numero
	
	if [ $numero -gt $x ]
	then
		mag=$(( $mag+1 ))
	else
		if [ $numero -lt $x ]
		then
			min=$(( $min+1 ))
		else
			if [ $numero -eq $x ]
			then 
				ug=$(( $ug+1 ))
			fi
		fi
	fi
done

	echo "I numeri maggiori sono $mag"
	echo "I numeri minori sono $min"
	echo "I numeri uguali sono $ug"
	
	
		
		