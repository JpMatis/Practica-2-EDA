/*
1. Elaborar un programa en lenguaje C donde:
a) Se declaren variables de tipo: int, char, double, long, float y short.
b) Se declare un apuntador para cada una de las variables anteriores.
c) Se asigne la dirección de memoria a cada apuntador de la variable correspondiente. Usar el
operador de dirección(&)
d) Mostrar que el valor apuntado por el apuntador es igual que la dirección de memoria de la
variable que apunta.
e) Asignar un valor a las variables.
f ) Usar el operador(*) para imprimir los valores de las variables usando los apuntadores.
g) Modificar los valores de las variables mediante el operador (*) y los apuntadores.
h) Mostrar que al modificar mediante el apuntador se modifica el valor de la variable.
*/
#include<stdio.h>

int main(){
	//A) y B)
	int *ip, a;
	char *cp, b;
	double *dp, c;
	long *lp, d;
	float *fp, e;
	short *sp, f;
	//C)
	ip = &a;//ip apunta a la direccion de la variable a
	cp = &b;//cp apunta a la direccion de la variable b
	dp = &c;//dp apunta a la direccion de la variable c
	lp = &d;//lp apunta a la direccion de la variable d
	fp = &e;//fp apunta a la direccion de la variable e
	sp = &f;//sp apunta a la direccion de la variable f
	//D)
	/*
	Para poder imprimir la direccion de la variable apuntada se usa el operador &, para el caso de la variable que apunta no se
	requiere usar de el operador ya que la variable apuntador contiene la direccion de la variable a la que apunta por lo que 
	no se usa ningun operador para tal proposito
	*/
	printf("El valor apuntado por el apuntador es: \t\t\t%p\nLa direccion de memoria de la variable que apunta es:   %p\n", &a, ip);
	printf("El valor apuntado por el apuntador es: \t\t\t%p\nLa direccion de memoria de la variable que apunta es:   %p\n", &b, cp);
	printf("El valor apuntado por el apuntador es: \t\t\t%p\nLa direccion de memoria de la variable que apunta es:   %p\n", &c, dp);
	printf("El valor apuntado por el apuntador es: \t\t\t%p\nLa direccion de memoria de la variable que apunta es:   %p\n", &d, lp);
	printf("El valor apuntado por el apuntador es: \t\t\t%p\nLa direccion de memoria de la variable que apunta es:   %p\n", &e, fp);
	printf("El valor apuntado por el apuntador es: \t\t\t%p\nLa direccion de memoria de la variable que apunta es:   %p\n", &f, sp);
	//E)
	/*
	Se asignan valores a las variables
	*/
	a = 35;
	b = 'B';
	c = 123455557777;
	d = 643565477;
	e = 3.3333;
	f = 0;
	//F)
	/*
	Se usa el operador * para imprimir el contenido de la variable apuntada por la variable apuntador
	*/
	printf("\n");
	printf("El valor de la variable a es: %d\n", *ip);
	printf("El valor de la variable b es: %c\n", *cp);
	printf("El valor de la variable c es: %lf\n", *dp);
	printf("El valor de la variable d es: %ld\n", *lp);
	printf("El valor de la variable e es: %f\n", *fp);
	printf("El valor de la variable f es: %d\n", *sp);
	//G)
	/*
	Usando el operador * podemos asignar valores a las variables que son apuntadas
	*/
	*ip = 8;
	*cp = 'H';
	*dp = 222222222;
	*lp = 11111111;
	*fp = 5.12345;
	*sp = 9;
	//H)
	/*
	Se imprime el contenido de las variables apuntadas para comprobar que si se asigno un valor 
	haciendo uso del operador *
	*/
	printf("\nNuevo valor de a: %d\n", a);
	printf("Nuevo valor de b: %c\n", b);
	printf("Nuevo valor de c: %lf\n", c);
	printf("Nuevo valor de d: %ld\n", d);
	printf("Nuevo valor de e: %f\n", e);
	printf("Nuevo valor de f: %d\n", f);
	
	return 0;
}
