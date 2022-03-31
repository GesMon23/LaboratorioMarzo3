#include "biblioteca.hpp"
int suma(int a, int b){
	return a+b;
}
int resta(int a, int b){
	if(a>=b){
		return a-b;
	}
	else{
		return b-a;
	}
}
int mult(int a, int b){
	return a*b;
}
int div(int a, int b){
	if(a>=b){
		return a/b;
	}
	else{
		return b/a;
	}
}
