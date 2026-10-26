//calculadora
#include<stdio.h>
main(){
//variables para mis numeros
int numeroUno;
int numeroDos;

//variable para operaciones
int suma;
int resta;
int multiplicacion;
int division;

printf("calculadora promax\n");
//pedir numeroUno
printf("ingresa un numero:");
scanf("%d",&numeroUno);

//pedir numero Dos
printf("ingrsar otro numero:");
scanf("%d",&numeroDos);

//operaciones
suma=numeroUno+numeroDos;
printf("el resultado de la suma es:%d", suma);

//operaciones
resta=numeroUno+numeroDos;
printf("el resultado de la resta es:%d", resta);

//operaciones
multiplicacion=numeroUno+numeroDos;
printf("el resultado de la multiplicacion es:%d", multiplicacion);

//operaciones
division=numeroUno+numeroDos;
printf("el resultado de la division es:%d", division);
}
