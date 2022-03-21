#include<stdio.h>

int main(){

    int n,i,x,c1=0,c2=0;

    printf("Dame un numero:");
    scanf("%d",&x);
	
	/*for(i=0;((x>>i)&1==1);i++){
			c1++;
 	}*/
 	
 	((x>>i)&1==1)?c1++ && i++:c2++ && i++;
    
	printf("El numero de 1's es: %d y de 0's es: %d",c1,c2);
    
    return 0;
}

