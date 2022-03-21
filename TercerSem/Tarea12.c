#include <stdio.h>

void tablaN(int tabla[],int n);

int main(){

    int i=0,n=0,tabla[100];

    printf("Dime la tabla de multiplicar que quieres: ");
    scanf("%d",&n);

    tablaN(tabla,n);

    printf("La tabla es: \n");
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,tabla[i-1]);
    }

    return 0;
}

void tablaN(int tabla[],int n){
    int i;

    for(i=0;i<=10;i++){
        tabla[i]=(i+1)*n;
    }

}
