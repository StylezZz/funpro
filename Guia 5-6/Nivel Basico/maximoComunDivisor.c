#include <stdio.h>

int cantDivisores(int numero){
    int cantidad=0,i=1;
    while(i<=numero){
        if(numero%i==0){
            cantidad++;
        }
        i++;
    }
    return cantidad;
}

int obtenerDivisores(int num,int pos){
    int cant=0,i=1;
    while(i<=num){
        if(num%i==0){
            cant++;
            if(cant==pos){
                return i;
            }
        }
        i++;
    }
}

int esDivisor(int divisor,int num){
    return (num%divisor==0);
}


int main(){
    int a,b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    int menor,mcd;
    if(a<b){
        menor=a;
    }else{
        menor=b;
    }

    int i=cantDivisores(menor);
    while(i>=1){
        int divisor=obtenerDivisores(menor,i);
        if(esDivisor(divisor,a) && esDivisor(divisor,b)){
            mcd=divisor;
            break;
        }
        i--;
    }
    printf("El maximo comun divisor es: %d", mcd);

    return 0;
}