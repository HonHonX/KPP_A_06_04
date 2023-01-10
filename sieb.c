#include<stdio.h>

//Funktions Prototypen
void ergebnisAusgeben(int array[], int size);
int arrayFuellen(int array[], int size, int count);
  

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
	
	//Deklaration	
	int size=300; //Array mit 300 Elementen an den Plätzen 0-299
	int sieb[size-1];
	
	//Setzen aller Werte des Arrays auf 1
	for(int i=0; i<size; i++){
		sieb[i]=1;
	}
	
	//Sieb Algorithmus
	for(int j=2;j<=(size/2);j++) { //Die Anzahl der Schleifendurchläufe entspricht der Hälfte der Elementanzahl des Arrays
		if(sieb[j]) { //Die Überprüfung läuft nur, wenn das j.Element des Arrays noch nicht mit einer "0" geflaggt wurde (1=wahr)
			for(int k=2;k<=(size/2);k++) { //Die Anzahl der Schleifendurchläufe entspricht der Hälfte der Elementanzahl des Arrays
				int temp=k*j;
				if(temp < size) { //Ist das Produkt größer als die Größe des Arrays muss nichts gemacht werden
					sieb[temp-1]=0; //Vielfache werden mit der "0" markiert und fallen als Primzahlen raus
					printf("%d",temp-1);
				}
		   	}
		}
	}
	
	arrayFuellen(sieb,size,0);
	//ergebnisAusgeben(sieb,size);
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
int arrayFuellen(int array[], int size, int count) {
	if(array[count]==1)
		array[count]=count+1;
	else if (count==size-1)
		return 0;
	arrayFuellen(array, size, ++count);
}
	
	
void ergebnisAusgeben(int array[], int size) {
    	for(int i=2; i < size; i++) {
	    	if(array[i]>0) 
      			printf("%d | ",array[i]);
    }
    printf("\n");
}

  
