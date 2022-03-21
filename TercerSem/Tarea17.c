#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char pais;
    char capital;
    char gentilicio;
    char idioma;
    char moneda;
    int  habitantes;
} Paises;

Paises LeerPais(char *arr[]);
void EscribePais(Paises);

int main(int argc, char *argv[]){
    
FILE *entrada = fopen("Paises.txt","r");
int n=0;
char paises[70],*mundo[100];
Paises a;
while (fgets(paises,"\n",entrada)!=EOF)
{
    mundo[n]=(char*)malloc(sizeof(char)*100);
    strcpy(mundo[n++],paises);
}

EscribePais(LeerPais(mundo));

return 0;
}

Paises LeerPais(char *arr[]){
    Paises a;
fscanf(arr,"%s %s %s %s %s %d",&a.pais,&a.capital,&a.gentilicio,&a.idioma,&a.moneda,&a.habitantes);
}

void EscribePais(Paises a){

printf("%s\t%s\t%s\t%s\t%s\t%d",a.pais,a.capital,a.gentilicio,a.idioma,a.moneda,a.habitantes);

}