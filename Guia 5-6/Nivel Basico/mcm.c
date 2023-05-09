#include<stdio.h>

int esMultiplo(int a,int b){
	if(a%b==0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int num1,num2;
	printf("Ingrese dos n�meros (A,B): ");
	scanf("%d %d",&num1,&num2);
	
	int mayor,mcm;
	
	if(num1>num2){
		mayor = num1;
	}else{
		mayor = num2;
	}
	mcm =mayor;
	int i=1;
	while(i<=100){
		int multiplo = mayor*i;
		if(esMultiplo(multiplo,num1) && esMultiplo(multiplo,num2)){
			mcm = multiplo;
			break;
		}
		i++;
	}
	
	printf("El mcm de %d y %d es %d\n",num1,num2,mcm);
	
	
	
	return 0;
}
