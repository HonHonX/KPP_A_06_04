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
	
	int sieb[size];
	int size=sizeof(sieb[]/sieb[0]);
	
	for(int i=0; i<size+1; i++){
		sieb[i]=i+1;
		printf("%d | ", sieb[i]);
	}
	
	for(int j=1;j<((size/2)+1);j++) {
		if(sieb[j]!=0) {
			for(int k=3;k<size+1;k++) {
				if((sieb[k]%sieb[j]) == 0) {
					sieb[k]=0;
				}
		   	}
		}
	}
	
	ergebnisAusgeben(sieb, size);
	
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
  
