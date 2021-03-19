/*
4. Responda.
a) ptr:
b) *ptr:
c) ptr[0]:
d) *ptr+ 6:
e) *(ptr+6):
f ) *ptr(-1):
g) ptr[-1]:
h) ptr[9]:
i) Escriba la dirección de arr:
j) Escriba la dirección de ptr:
k) Escriba la dirección a la que apunta ptr:
*/
#include<stdio.h>
#include<string.h>
int main(){
	int arr[10];
	int *ptr;
	
	arr[1] = 5; // equivale a *(arr+1) = 5;
	ptr = &arr[2];
	//A)
	printf("a. %p\n", ptr);//Imprime la direccion de memoria apuntada por ptr la cual es arr[2]
	//B)
	printf("b. %p\n", *ptr);//Imprime la direccion contenida en la variable apuntada por ptr
	//C)
	printf("c. %p\n", ptr[0]);//Imprime la direccion de memoria del primer elemento del arreglo apuntado por ptr
	//D)
	printf("d. %p\n", *ptr+6);//Imprime 6 posiciones despues de la direccion contenida en el arreglo apuntado por ptr
	//E)
	printf("e. %p\n", *(ptr+6));//Imprime la direccion de memoria del quinto elemento del arreglo apuntado ptr
	//F
	//printf("f. %p\n", *ptr(-1));//No es posible ya que el compilador interpreta la instrucción como si ptr fuera una función a la que se le está pasando un argumento
	//G
	printf("g. %p\n", ptr[-1]);//Imprime una dirección de memoria que es inexistente o que no ha sido reservada 
	//H
	printf("h. %p\n", ptr[9]);//Imprime una dirección de memoria que es inexistente o que no ha sido reservada
	//I
	printf("i. Direccion de arr: %p\n", &arr);//Se imprime la direccion de memoria del arreglo arr
	//J
	printf("j. Direccion de ptr: %p\n", &ptr);//Se imprime la direccion de memoria de la variable apuntador ptr
	//K
	printf("Direccion a la que apunta ptr: %p\n", ptr);//Se imprime la direccion a la que apunta ptr

	return 0;
}
