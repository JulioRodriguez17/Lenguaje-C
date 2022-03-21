#include<stdio.h>
#include<string.h>

char MinAMay(char);
char MayAMin(char);
int EsVocal(char);
int EsConsonante(char);
int NumConsonantes(char []);
int NumVocales(char []);
int TamCad(char []);
int CopiaCad(char [], char []);
int CopiaCadN(char [], char [], int);
int LexCar(char [],char []);
void cambio(char [], char [], char, char);
void PegaCadenas(char [], char [], char []);
void PegaCadenas2(char [], char [], char []);
void PegaCadenasN(char [], char [], int);
void PasaAMayusculas(char [], char []);
void PasaAMinusculas(char [], char []);

int main(){

    char pal1[80], pal2[80], pal3[80],c1, c2;
    int n;

    printf("Dame dos palabras:");
    scanf("%s %s",pal1,pal2);
    printf("%s \t%s \t%d",pal1,pal2,LexCar(pal1,pal2));
    
    if (LexCar(pal1, pal2) > 0)
        printf ("\n%s > %s", pal1, pal2);
    else if (LexCar(pal1,pal2) == 0)
        printf ("\n%s = %s", pal1, pal2);
    else if (LexCar(pal1,pal2) < 0)
        printf ("\n%s < %s", pal1, pal2);
	
	/*printf("Dame una palabra y un entero:");
    scanf("%s%d",pal1,&n);
    CopiaCadN(pal1,pal2,n);
    printf("%s\t%s\n",pal1,pal2);

    printf("Dame dos palabras y un entero:");
    scanf("%s%s%d",pal1,pal2,&n);
    PegaCadenasN(pal1, pal2, n);
    printf("%s\t%s\n",pal1,pal2);


    printf("Dame dos palabras:");
    scanf("%s%s",pal1,pal2);
    PegaCadenas2(pal1,pal2,pal3);
    printf("%s\t%s\t%s\n",pal1,pal2,pal3);


    printf("Dame una palabra y dos caracteres:");
    scanf("%s %c %c",pal1,&c1,&c2);
    cambio(pal1,pal2,c1,c2);
    printf("%s\t%s\t%c\t%c\n",pal1,pal2,c1,c2);
    getchar();
    printf("La palabra %s, tiene:\n",pal1);
    printf("%d caracteres, y\n",TamCad(pal1));
    printf("%d vocales, y\n",NumVocales(pal1));
    printf("%d consonantes.\n",NumConsonantes(pal1));
    PasaAMayusculas(pal1,pal2);
    printf("%s en mayusculas es %s.\n",pal1,pal2);
    PasaAMinusculas(pal2,pal1);
    printf("%s en mayusculas es %s.\n",pal2,pal1);
*/
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

int CopiaCadN(char origen[], char destino[], int n){
     int i;
     for(i=0;i<n;i++)
         destino[i]=origen[i];
     destino[i]='\0';
};

char MinAMay(char c){
     if(c>'Z')
        return c-32;
     else
        return c;
};

char MayAMin(char c){
     if(c<'a')
        return c+32;
     else
        return c;
};

int EsVocal(char c){
   char x=MinAMay(c);
   return ((x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U'));
}

int NumVocales(char pal[]){
     int i=0,vocales=0;

     while(pal[i]!='\0'){
        if(EsVocal(pal[i]))
             vocales++;
        i++;
     };

     return vocales;
};

int EsConsonante(char c){
     return !EsVocal(c);
};
int NumConsonantes(char pal[]){
     int i=0,consonantes=0;

     while(pal[i]!='\0'){
        if(EsConsonante(pal[i]))
             consonantes++;
        i++;
     };
     return consonantes;
};

void PasaAMayusculas(char origen[], char destino[]){
     int i=0;

     while(origen[i]!='\0'){
          destino[i]=MinAMay(origen[i]);
          i++;
     }
     destino[i]='\0';
};


void PasaAMinusculas(char origen[], char destino[]){
      int i=0;

     while(origen[i]!='\0'){
          destino[i]=MayAMin(origen[i]);
          i++;
     }
     destino[i]='\0';
};

void cambio(char origen[], char destino[], char a, char b){
    int i = 0;
    while(origen[i]!='\0'){
         if(origen[i]==a)
             destino[i] = b;
         else
             destino[i]=origen[i];
         i++;
    }
     destino[i]='\0';
};

void PegaCadenas(char origen1[], char origen2[], char destino[])
{
    int i=0, j=0;

     while(origen1[i]!='\0'){
          destino[i]=origen1[i];
          i++;
     }
     while(origen2[j]!='\0'){
          destino[i]=origen2[j];
          i++;
          j++;
     }
     destino[i]='\0';
}
void PegaCadenas2(char origen1[], char origen2[], char destino[]){
      CopiaCad(origen1,destino);
      CopiaCad(origen2,destino+TamCad(origen1));
};

void PegaCadenasN(char origen[], char destino[], int n){
     int i=0,j=0;
     i=TamCad(destino);
     for(j=0;j<n;j++)
         destino[i++]=origen[j];
     destino[i]='\0';
}

int LexCar(char pal1[],char pal2[]){
	
	int n=0,m=0,i=0;
	
	n=TamCad(pal1);
	m=TamCad(pal2);
	
	if(n<m){
		for(i=0;i<m;i++){
			if(pal1[i]>pal2[i]) return 1;
				
			else if(pal1[i]<pal2[i]) return -1;
			
			else return 0;
		}
	}
	
	else if(n>m){
		for(i=0;i<n;i++){
			if(pal1[i]>pal2[i]) return 1;
				
			else if(pal1[i]<pal2[i]) return -1;
			
			else return 0;
		}	
	}
	
	else{
		for(i=0;i<n;i++){
			if(pal1[i]>pal2[i]) return 1;
				
			else if(pal1[i]<pal2[i]) return -1;
			
			else return 0;
		}	
	}
	
	//return strcmp(pal1,pal2); //Funcion strcmp comprara lexicamente dos palabras
}
