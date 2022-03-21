#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\matut\Documents\Escuela\Tercero\Fundamentos\Programas\Arreglos.h"
#define Tam 100

void reemplazoCad(int a[],int n, int x, int y);
void numOcurrencias(int a[],int n);

int main(){

int a[Tam], n,x,y;

	printf("De cuantas posiciones quieres el arreglo: ");
	scanf("%d",&n);
	printf("Ingresa %d enteros: ",n);
	LeeArreglo(a,n);
    ImpArreglo(a,n);

    printf("\n\nDime el numero y su posicion a reemplazar:");
    scanf("%d %d",&x,&y);

    // if(y>n){
    //      printf("Error");
    //  }
    // else {
    // reemplazoCad(a,n,x,y);
    // ImpArreglo(a,n);
    // }

    return 0;
}

void reemplazoCad(int a[],int n, int x, int y){
    int i;
   
    for(i=0;i<n;i++){
        if(i==y-1){
            a[i]=x;
        }
    }
}

void numOcurrencias(int a[],int n){
    int i,oc;

    for(i=0;i<n;i++){
        


    }

}