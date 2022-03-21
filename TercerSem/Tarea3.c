#include<stdio.h>

void iTabla(int);
int Potencia(int,int);
int Factorial(int);
void TablaPot(int, int);
void TablaFact(int);

int main(){
	int i;
	int a,b,c;
	
	/*printf("Cual tabla quieres?=");
	scanf("%d",&t);
	iTabla(t);*/
	
	printf("Cual es la base y su exponente?:");
	scanf("%d %d",&a,&b);
	TablaPot(a,b);
	
	printf("Cual numero quiere su factorial?");
	scanf("%d",&c);
	TablaFact(c);
	
	
  return 0;
}

void iTabla(int t){
	int i;
	for(i=1;i<=10;i++){
		printf("%d*%d=%d \n",t,i,t*i);
	}
}

int Potencia(int a,int b){
	int i,r=1;
	for(i=1;i<=b;i++){
	r=r*a;	
	}
	return (r);
}

int Factorial(int a){
	int i,r=1;
	for(i=1;i<=a;i++){
	r=r*i;	
	}
	return (r);
}

void TablaPot(int a, int b){
	int i;
	for(i=1;i<=b;i++){		
		printf("%d^%d=%d\n",a,i,Potencia(a,i));
	}
}

void TablaFact(int f){
	int i;
	for(i=1;i<=f;i++){
	printf("%d! = %d\n",i,Factorial(i)); 
	}
}
