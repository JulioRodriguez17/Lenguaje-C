#include<stdio.h>

void LlenaArreglo(int [], int);
void ImprimeArreglo(int [], int);
void Burbuja(int [], int);

int main(){
    int a[20], i, j, t;
    // Llena el arreglo a[] con datos tomados de la entrada estandard o teclado
   LlenaArreglo(a, 10);
    // Imprime el contenido del arreglo a[]
   ImprimeArreglo(a,10);
    printf("\n");
    // Ordena ascendentemente los elementos del arreglo a[]
    Burbuja(a,10);
    // Imprime el contenido del arreglo a[]
    ImprimeArreglo(a,10);
    printf("\n");

    return 0;
}

void LlenaArreglo(int a[], int n){
     int i;
     //for(i=0;i<10;i++)
     i=0;
     while(i<10){
        scanf("%d",&a[i]);
		i++;
	}
};

void ImprimeArreglo(int a[], int n){
     int i;
     i=0;
     //for(i=0;i<10;i++)
     while(i<10){
          printf("%d  ",a[i]);
          i++;
      }
};

void Burbuja(int a[], int n){
    int i, j, t;
    //for(j=0;j<9;j++)
	i=9;
	j=0;
	do{
	   //for(i=9;i>j;i--)
	   while(i>j){
          if(a[i]<a[i-1]){
            t=a[i];
            a[i]=a[i-1];
            a[i-1]=t;
   		 }
   		 i--;
		}
    j++;
	}while(j<9);
};
