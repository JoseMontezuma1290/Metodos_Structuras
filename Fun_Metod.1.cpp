#include <iostream>
using namespace std;

//  metodos y funciones = ejecutan una porcio de codigo N cantidad de veses seguidas
//  metodo = no retora un tipo de dato
//  funcion retorna un tipo de dato

//80 linea de codigo en 10 lugares distintos = 800 lineas de codigo
// de las cuales 80 son iguales
// crean una funcion o un metodo = y lo manda a llamar 10 veces = 80 lineas de codigo y 10 llamdao a funciones 

void suma(int &num1, int &num2);
int suma(int num1, int num2, int num3);


main(){
	
	int a=10,b=20;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	suma(a,b);
	
	/*cout<<suma(10,20)<<endl;
	cout<<suma(10,20,40)<<endl;
	//cout<<resta(10,20)<<endl;*/
	
	system("pause");
}

/*
int suma(int num1, int num2, int num3){
	int resultado =0;
	resultado = num1+num2+num3;
	
	return resultado;
}

/* funcion que resta dos valores 
int resta(int num1, int num2){
	int resultado =0;
	resultado = num1-num2;
	
	return resultado;
}*/

//funcion que sume dos valores 
int suma(int num1, int num2, int num3){
	int resultado =0;
	resultado = num1+num2;
	
	return resultado;
}

// Metodo  y envio de parametros por referencia
void suma(int &num1, int &num2){
	int resultado =0;
	num1+=1;  //11
	num2+=1;  //21
	resultado = num1+num2; //32
	cout<<resultado<<endl;
}
