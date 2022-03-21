#include<stdio.h>
#include<string.h>

int Palindromo(char []);
void Invierte(char []);
int ComparaIguales(char [],char []);
char MayAMin(char );

int main(){

    int tam;
    char pal1[80],pal2[80];

    printf("Dame una palabra: ");
    scanf("%s",&pal1);

    tam=strlen(pal1);

    if(Palindromo(pal1)==0)
        printf("\nNo es un palindromo");

    else    
        printf("\nEs un palindromo");    

    Invierte(pal1);
    printf("\n\nLa palabra invertida: %s",pal1);

    printf("\n\nDame otra palabra: ");
    scanf("%s",&pal2);

    

    if(ComparaIguales(pal1,pal2)==1)
        printf("\n\nSon iguales");

    else    
        printf("\n\nNo son iguales");  
    return 0;

    if(PalindromoInv(pal1,pal2)==0)
        printf("\nNo es un palindromo");

    else    
        printf("\nEs un palindromo");   
}

int Palindromo(char pal[]){

    int i=0,j,tam;

    tam=strlen(pal);
    j=tam-1;

    while(j>1){

        if(pal[i++]!=pal[j--]){ //No son palindromos
            return 0;
        }
    //Son palindromos
    return 1;
    }
}

void Invierte(char pal[]){
    int i=0,tam;
    char temp;

    tam=strlen(pal);

    while(i < tam/2){
        temp=pal[i];
        pal[i]=pal[(tam-1)-i];
        pal[(tam-1)-i++]=temp;
    }

}

int ComparaIguales(char pal1[],char pal2[]){
    int i=0,tam;

    MayAMin(pal1);
    MayAMin(pal2);

    tam=strlen(pal1)-1;

    for (int i=0;i<tam;i++){
      
      if(pal1[i]!=pal2[i]){ //No son iguales
        return 0;}
    
    return 1; //Son iguales
    }
    
}

int PalindromoInv(char pal1[],char pal2[]){

    int i=0,tam1,tam2;

    tam1=strlen(pal1);
    tam2=strlen(pal2);
    MayAMin(pal1);
    MayAMin(pal2);

    if(pal1==pal2){

    Invierte(pal2);    
    while(i<tam1){

        if(pal1[i++]!=pal2[i++]){ //No son palindromos
            return 0;
        }
    //Son palindromos
    return 1;
    }

    }

    else   
        return 0;
}



char MayAMin(char c){
     if(c<'a')
        return c+32;
     else
        return c;
};