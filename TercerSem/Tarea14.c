#include<stdio.h>
#include"C:\Users\matut\Documents\Escuela\Tercero\Fundamentos\Programas\Arreglos.h"

void cuenta(int a[], int num);

int main(){
    int i,n,y,x,arreglo[100];
	printf("De cuantas posiciones quieres el arreglo: ");
	scanf("%d",&n);
	printf("Ingresa %d enteros: ",n);
	LeeArreglo(arreglo,n);
    cuenta(arreglo,n);

    return 0;
}
void cuenta(int a[], int num){
    int i,j,x,c[100],k=0;
    //Limpiamos el arreglo de comparaciones
    for(i=0;i<num;i++){
        c[i]=0;
    }
    //Recorremos el arreglo
    for (i=0;i<num;i++){
        x=0;
        if(!(a[i]==k)){
            for(j=0;j<num;j++){
                if(a[i]==a[j]){
                    x++;
                }
            }

    printf("%d ocurre %d veces\n",a[i],x);
    c[k++]=a[i];
        }
    }

}