#include<stdio.h>
#include<string.h>

int CopiaCad(char [], char []);
void Recurrencia(char [],char [],char , char);

int main(){
	char pal1[80],pal2[80];
	char car1, car2;
	
	printf("Ingrese la cadena:");
	scanf("%s",&pal1);
	
	printf("Dame los caracteres a remplazar:");
	
	printf("\nCaracter 1:");
	scanf(" %c",&car1);
	
	printf("\nCaracter 2:");
	scanf(" %c",&car2);
		
	Recurrencia(pal1,pal2,car1,car2);
	
	printf("\n%s",pal2);
}


int CopiaCad(char orig[], char dest[]){
     int i=0;

     while(orig[i]!='\0'){
          dest[i]=orig[i];
          i++;
     }
     dest[i]='\0';

     return i;

};

void Recurrencia(char orig[],char dest[],char co, char cp){
	int i;
	
	CopiaCad(orig,dest);
	
	while(dest[i]!='\0'){
          if(dest[i]==co){
          		dest[i]=cp;
		  }
          i++;
     }
}


