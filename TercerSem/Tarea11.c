// Hacer un programa que solicite una cadena (getchar()), la guarde en pal, y luego la copie a pal2. 
// Finalmente, deberá imprimir (putchar) la cadena en pal2.

#include <stdio.h>

int main(){
    char pal1[80],pal2[80];
    
    int i=0;
    
    printf("Escribe una palabra [enter]!!!");
    while((pal1[i]=getchar())!='\n'){
        i++;}
    pal1[i]='\0';
    
    for(i=0;pal1[i]!='\0';i++){
        pal2[i]=pal1[i];
    }
    pal2[i]='\0';
    i=0;
    
    while(pal2[i]!='\0')
        putchar(pal2[i++]);

    return 0;
}
