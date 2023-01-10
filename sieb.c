#include<stdio.h>

//Funktions Prototypen
void ergebnisAusgeben(int array[], int size);
  

//Hauptprogramm
int main () {
	/*
	*
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Array füllen+
	
	int sieb[299];
	
	for(int i=0; i<300; i++){
		sieb[i]=i+1;
	}
	
	for(int j=1;j<151;j++) {
		if(sieb[j]!=0) {
			for(int k=3;k<300;k++) {
				int x = sieb[k];
				printf("x");
				int y = sieb[j];
				if(x % y == 0) {
					sieb[k]=0;
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
    for(int i=0; i < size; i++) {
	    if(array[i]!=0) 
      		printf("%d | ", array[i]);
    }
    printf("\n");
}
  
