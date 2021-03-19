#include <stdio.h>
/* C�digo programado por Portillo L�pez Juan Manuel, Bola�os G�mez Mart�n y
Gonz�lez Zamora Leonardo el 12/Marzo/2021. */
void suma(float *a, float *b, float *c){
	printf("Asignale un valor a la primer variable: ");
	scanf("%f", a); //Se escribe as� para guardar el valor en la direcci�n de memoria de "a"
	printf("Asignale un valor a la segunda variable: ");
	scanf("%f", b); //Se escribe as� para guardar el valor en la direcci�n de memoria de "b"
	*c=*a + *b;  //Realizamos las operaciones con las respectivas notaciones de los apuntadores.
}
void resta(float *a, float *b, float *c){
	printf("Asignale un valor a la primer variable: ");
	scanf("%f", a);
	printf("Asignale un valor a la segunda variable: ");
	scanf("%f", b);
	*c=*a-*b; //Realizamos las operaciones con las respectivas notaciones de los apuntadores.
}
void multiplicacion(float *a, float *b, float *c){
	printf("Asignale un valor a la primer variable: ");
	scanf("%f", a);
	printf("Asignale un valor a la segunda variable: ");
	scanf("%f", b);
	*c=(*a)*(*b); //Realizamos las operaciones con las respectivas notaciones de los apuntadores.
}
void division(float *a, float *b, float *c){
	printf("Asignale un valor a la primer variable: ");
	scanf("%f", a);
	printf("Asignale un valor a la segunda variable: ");
	scanf("%f", b);
	*c=(*a)/(*b); //Realizamos las operaciones con las respectivas notaciones de los apuntadores.
}

int main(){
	float a,b,c;
	int select;
	int rep=1;
	printf("************Operaciones aritmeticas**********\n\n");
	
 while(rep==1){ //Se llama a la estructura while para crear una iteraci�n que nos permite repetir el proceso cuantas veces lo deseemos.
	printf("Seleccione la operacion aritmetica que desea realizar:\n1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n\n");
	scanf("%i",&select);
	
	switch(select){  //La estructura switch nos permite seleccionar la funci�n correspondiente a la operaci�n aritm�tica que decidimos realizar.
		case 1: suma(&a, &b, &c);//Pasamos los par�metros de la funci�n por referencia para que los valores en la funci�n suma se guarden en la misma direcci�n de memoria que en main.
		break;
		case 2: resta(&a, &b, &c);//Pasamos los par�metros de la funci�n por referencia para que los valores en la funci�n resta se guarden en la misma direcci�n de memoria que en main.
		break;
		case 3: multiplicacion(&a, &b, &c);//Pasamos los par�metros de la funci�n por referencia para que los valores en la funci�n multiplicacion se guarden en la misma direcci�n de memoria que en main.
		break;
		case 4: division(&a, &b, &c);//Pasamos los par�metros de la funci�n por referencia para que los valores en la funci�n division se guarden en la misma direcci�n de memoria que en main.
		break;
		default: printf("Selecci�n no v�lida"); //Default se utiliza en caso de que el usuario ingrese un valor que no corresponda a ninguna operacion aritmetica.
		break;
	}
	
	printf("El resultado de la operacion es: %f \n\n", c);
	
	printf("�Desea realizar otra operacion?\n1)Si    2)No\n");
	scanf("%d",&rep);
}
	return 0;
	
}
