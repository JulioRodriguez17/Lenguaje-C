#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void InvierteRec(char [],int,int );
int PalindromoRec(char [],int ,int);
int ComparaIgualesRec(char [],char [],int,int);
int PalindromoInvRec(char [],char [],int ,int);
int TamCadena (char []);

int main(){

    int tam;
    char pal1[80],pal2[80];

    printf("Dame una palabra: ");
    scanf("%s",&pal1);

    
    
	tam=TamCadena(pal1)-1;
    PalindromoRec(pal1,0,tam)?printf("Si es palindroma.\n"):printf("No es palindroma.\n");
    InvierteRec(pal1,tam,0);
    printf("\n\nLa palabra invertida: %s",pal1);
    InvierteRec(pal1,tam,0);
    printf("\n\nDame otra palabra: ");
    scanf("%s",&pal2);
    ComparaIgualesRec(pal1, pal2,0,tam)?printf("Si son iguales.\n"):printf("No son iguales.\n");
   
     
}


int PalindromoRec(char pal[],int i,int j){

    if(j>1){

        if(pal[i++]!=pal[j--]){ //No son palindromos
            return 0;
            
        }
    PalindromoRec(pal,i+1,j-1);
    return 1;
    }
}

void InvierteRec(char pal[],int tam,int i){
    char temp;

    if(i < tam/2){
        temp=pal[i];
        pal[i]=pal[tam-i];
        pal[tam-i]=temp;

        InvierteRec(pal,tam,i+1);
    }
    return (pal);
}

int ComparaIgualesRec(char pal1[],char pal2[],int i,int tam){
    if(TamCadena(pal1)!=TamCadena(pal2))
    {
        return 0;}
    else
    {
        if(i<tam){
            if(pal1[i]!=pal2[i]){ //No son iguales
            return 0;}
            ComparaIgualesRec(pal1,pal2,i+1,tam);
    return 1; //Son iguales
    } 
    }
}


int TamCadena (char cadena[]){
    int i=0;

    while (cadena[i]!='\0')
        i++;
    return i;
}

int PalindromoInvRec(char pal1[],char pal2[],int i,int tam){  

InvierteRec(pal2,tam,i); 
if(i<tam){

     if(pal1[i++]!=pal2[i++]){ //No son palindromos
            return 0;
    }
//Son palindromos
PalindromoInvRec(pal1,pal2,i+1,tam);
return 1;
}
}