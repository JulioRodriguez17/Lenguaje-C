#include<stdio.h>

void Millares(int);
void Centenas(int);
void Unidades(int);
void Decenas(int);
void Especiales(int);


int main(){
   int n;
   int u, d, c, m;



   printf("Teclea un entero (1-999):"); 
   scanf("%d",&n);

   m=n/1000;
   c=(n-m*1000)/100;
   d=(n-m*1000-c*100)/10;
   u=n-m*1000-c*100-d*10;

   Millares(m);
   Centenas(c);
   
   if(d==1
   ){
   		Especiales(u);
   }
   else{
   Decenas(d);
   Unidades(u);}


   return 0;
}

void Unidades(int n){
    if(n)
      printf("y ");
    switch(n){
       case 1:printf("uno "); break;
       case 2:printf("dos "); break;
       case 3:printf("tres "); break;
       case 4:printf("cuatro "); break;
       case 5:printf("cinco "); break;
       case 6:printf("seis "); break;
       case 7:printf("siete "); break;
       case 8:printf("ocho "); break;
       case 9:printf("nueve "); break;
       default: ;
   }
}

void Decenas(int n){
    switch(n){
       case 1:printf("diez "); break;
       case 2:printf("veinte "); break;
       case 3:printf("treinta "); break;
       case 4:printf("cuarenta "); break;
       case 5:printf("cincuenta "); break;
       case 6:printf("sesenta "); break;
       case 7:printf("setentaq "); break;
       case 8:printf("ochenta "); break;
       case 9:printf("noventa "); break;
   }
}

void Centenas(int n){
    switch(n){
       case 1:printf("cien "); break;
       case 2:printf("doscientos "); break;
       case 3:printf("trecientos "); break;
       case 4:printf("cuatrocientos "); break;
       case 5:printf("quinientos "); break;
       case 6:printf("seiscientos "); break;
       case 7:printf("setecientos "); break;
       case 8:printf("ochecientos "); break;
       case 9:printf("novecientos "); break;
   }
}

void Millares(int n){
	switch(n){
       case 1:printf("mil "); break;
       case 2:printf("dos mil "); break;
       case 3:printf("tres mil "); break;
       case 4:printf("cuatro mil "); break;
       case 5:printf("cinco mil "); break;
       case 6:printf("seis mil "); break;
       case 7:printf("siete mil "); break;
       case 8:printf("ocho mil "); break;
       case 9:printf("nueve mil "); break;
   }
}

void Especiales(int n){
	switch(n){
       case 1:printf("once "); break;
       case 2:printf("doce "); break;
       case 3:printf("trece "); break;
       case 4:printf("catorce "); break;
       case 5:printf("quince "); break;
       case 6:printf("dieciseis "); break;
       case 7:printf("diecisiete "); break;
       case 8:printf("dieciocho "); break;
       case 9:printf("diecinueve "); break;
   }
}
