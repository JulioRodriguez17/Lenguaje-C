#include<stdio.h>
#include<string.h>

int TamCad(char []);
int CopiaCad(char [], char []);
int VocCad(char []);

int main(){

    char pal1[80], pal2[80];
    int n;

    printf("Dame una palabra:");
    scanf("%s",pal1);
    //pal2 == pal1;
    //n=CopiaCad(pal1, pal2);
    //printf("La palabra copiada fue %s, y tiene %d caracteres.\n",pal2,n);
	
	printf("\nLa palabra es %s y tiene %d vocales",pal1,VocCad(pal1));
    
	return 0;
}

int TamCad(char cadena[]){
     int i=0;

     while(cadena[i++]!='\0');

     return i-1;
};
int CopiaCad(char orig[], char dest[]){
     int i=0;

     while(orig[i]!='\0'){
          dest[i]=orig[i];
          i++;
     }
     dest[i]='\0';

     return i;

};

int VocCad(char cad[]){
	int i=0,voc=0;
	for(i=0;cad[i]!='\0';i++){		
	
		if(cad[i]=='A' || cad[i]=='E' || cad[i]=='I' || cad[i]=='O' || cad[i]=='U' ){
			voc++;
		}
		
		else if(cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u'){
			voc++;
		}
	}
return voc;		
}
