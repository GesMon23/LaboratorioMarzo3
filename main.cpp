#include <iostream>
#include "biblioteca.hpp"
using namespace std;
int main(int argc, char** argv) {
	int Num1, Num2, Residuo, Resultado;
	char Op;
	Op='a';
	while(Op!='0'){
		printf("CALCULADORA (LOS NUMEROS INGRESADOS DEBEN SER POSITIVOS O 0) \n");
		printf("SUMA: +\n");
		printf("RESTA: -\n");
		printf("MULTIPLICACION: *\n");
		printf("DIVISION: / \n");
		printf("SALIR: 0\n");
		printf("INGRESE SU PRIMER NUMERO: "); scanf("%d", &Num1);
		printf("INGRESE SU SEGUNDO NUMERO: "); scanf("%d", &Num2); printf("\n");
		printf("INGRESE LA OPERACION QUE DESEA REALIZAR: "); 
		cin>>Op;
		if(Op=='+'){
			Resultado=suma(Num1, Num2);
			printf("EL RESULTADO DE LA SUMA ES: %d\n\n", Resultado);
		}
		else{
			if (Op=='-'){
				Resultado=resta(Num1, Num2);
				if (Num2>Num1) printf("WARNING: EL RESULTADO SERA UN NUMERO POSITIVO Y  ES EL VALOR ABSOLUTO DE LA RESTA\n");
				printf("EL RESULTADO DE LA RESTA ES: %d\n\n", Resultado);	
			}
			else{
				if (Op=='*'){
					Resultado=mult(Num1, Num2);
					printf("EL RESULTADO DE LA MULTIPLICACION ES: %d\n\n", Resultado);	
				}
				else{
				if (Op=='/'){
					if(Num2==0) printf("ERROR: LA OPERACION SOLICITADA NO ES ADMITIDA\n\n");
					else{
						Resultado=div(Num1, Num2);
						if(Num1>=Num2)Residuo=Num1%Num2;
						else Residuo=Num2%Num1;
						if(Residuo!=0){
							printf("WARNING: LA DIVISION NO ES EXACTA.\n");
							printf("DESEA CONTINUAR? S/N (EL RESULTADO SERA NO INCLUIRA DECIMALES NI SE CONOCERA EL RESIDUO): ");
							cin>>Op;
							if(Op=='S'||Op=='s') printf("EL RESULTADO DE LA DIVISION ES: %d \n\n", Resultado);
							if(Op=='N'||Op=='n') printf("\n\n");
						}
						else printf("EL RESULTADO DE LA DIVISION ES: %d\n\n", Resultado);
						}
					}
				}
			}
		}
	}
	system("pause");
}
