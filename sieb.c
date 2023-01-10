#include<stdio.h>

//Funktions Prototypen
void ergebnisAusgeben(int array[], int size);
  

//Hauptprogramm
int main () {
	/*
	* Sieb des Eratosthenes zur Primzahlbestimmung
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *  Sieb des Eratosthenes * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Array füllen+
	
	int sieb[299];
	
	for(int i=0; i<300; i++){
		sieb[i]=1;
	}
	
	for(int j=2;j<=150;j++) {
		if(sieb[j]==1) {
			for(int k=2;k<=150;k++) {
				if((k*j) < 300) {
					sieb[k*j]=0;
				}
		   	}
		}
	}
	
	ergebnisAusgeben(sieb,299);
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
void ergebnisAusgeben(int array[], int size) {
    for(int i=2; i < size+1; i++) {
	    if(array[i]==1) 
      		printf("%d | ",i);
    }
    printf("\n");
}
  
