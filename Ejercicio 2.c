/*
2. Elaborar un programa en lenguaje C donde:
a) Se declare un apuntador de los siguientes tipos: int, char double, long, float y short
b) Asignarles espacio para almacenar un dato de su tipo correspondiente mediante llamadas a malloc.
c) Mostrar las direcciones de memoria para cada una de las variables anónimas
d) Asignar un valor a las variables anónimas.
e) Imprimir el valor asignado.
f ) Liberar la memoria asignada para las variables que apuntan los apuntadores.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	//A)
	int *ip;
	char *cp;
	double *dp;
	long *lp;
	float *fp;
	short *sp;
	//B)
	ip = (int*)malloc(sizeof(int));//Mediante el uso de la funcion malloc se reserva memoria del tamaño de tipo de dato int
	cp = (char*)malloc(sizeof(char));//Mediante el uso de la funcion malloc se reserva memoria del tamaño de tipo de dato char
	dp = (double*)malloc(sizeof(double));//Mediante el uso de la funcion malloc se reserva memoria del tamaño de tipo de dato double
	lp = (long*)malloc(sizeof(long));//Mediante el uso de la funcion malloc se reserva memoria del tamaño de tipo de dato long
	fp = (float*)malloc(sizeof(float));//Mediante el uso de la funcion malloc se reserva memoria del tamaño de tipo de dato float
	sp = (short*)malloc(sizeof(short));//Mediante el uso de la funcion malloc se reserva memoria del tamaño de tipo de dato short
	//C)
	/*
	Se usa el operador & para obtener a la direccion de memoria de las variables anonimas reservadas por malloc 
	las cuales estan siendo apuntadas por ip, cp, dp, lp, fp, sp
	*/
	printf("Direccion de memoria de variable anonima int: %p\n", &ip);
	printf("Direccion de memoria de variable anonima char: %p\n", &cp);
	printf("Direccion de memoria de variable anonima double: %p\n", &dp);
	printf("Direccion de memoria de variable anonima long: %p\n", &lp);
	printf("Direccion de memoria de variable anonima float: %p\n", &fp);
	printf("Direccion de memoria de variable anonima short: %p\n", &sp);
	//D)
	/*
	Se usa el operador * para poder asignar un valor a las variables anonimas 
	*/
	*ip = 1;
	*cp = 'A';
	*dp = 1111111;
	*lp = 222222222;
	*fp = 3.333333;
	*sp = 4;
	//E)
	/*
	Para imprimir el contenido de las variables anonimas se hace uso del operador *
	ya que de esta manera se accede al contenido de dichas variables 
	*/
	printf("El valor de la variable anonima es: %d\n", *ip);
	printf("El valor de la variable anonima es: %c\n", *cp);
	printf("El valor de la variable anonima es: %lf\n", *dp);
	printf("El valor de la variable anonima es: %ld\n", *lp);
	printf("El valor de la variable anonima es: %f\n", *fp);
	printf("El valor de la variable anonima es: %d\n", *sp);
	//F)
	/*
	Finalmente se libera la memoria reservada por malloc para dicho espacio pueda quedar a disposicion de algun otro proceso
	*/
	free(ip);
	free(cp);
	free(dp);
	free(lp);
	free(fp);
	free(sp);
	return 0;
}
