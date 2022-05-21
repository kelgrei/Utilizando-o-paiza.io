#incluide <stdbool.h>
int main(){
    int idade;
    float salario = 1250.75;
    double porcentagem_desconto = 2.5;
    bool estaAprovado = false;
    char genero 'M';
    return 0; 
}
//////////////////////////////////////////
 
 #incluide <stdio.h>

int main(){
    int idade = 18;
    float salario = 1250.75;
    double porcentagem_desconto = 2.5;
    char genero 'F';
    float altura = 1.63;

    printf("\n Idade: %d",idade);
    printf("\n Salário %f",salario);
    printf("\n Desconto (%): %f",porcentagem_desconto);
    printf("\n Gênero: %c",genero);
    printf("\n Altura: %.3f",altura);
    return 0;

}

//////////////////////////////////////////

#include <stdio.h>

int main(){
    float valor1=0, valor2=0;

    printf("\n Digite o primeiro valor:");
    scanf("%f",&valor1);
    printf("\n Digite o segundo valor:");
    scanf("%f",&valor2);
    printf("\n Variavel 1 = %.2f",valor1);
    printf("\n Variavel 2 = %.2f",valor2);
}

//////////////////////////////////////////

	int main(){
	    int x = 5;
	    int y = 10;
	
	    printf("\n Valor guardado em x: %d",x);
	    printf("\n Valor guardado em y: %d",y);
	
	    printf("\n Endereco de x: %x",&x);
	    printf("\n Endereco de y: %x",&y);
}
//////////////////////////////////////////

#include <stdio.h>

#define PI 3.14

	int main(){
            const float G = 9.80;
            
            printf("\n PI = %f, PI")
            printf("\n G = %f, G");
            return 0;
}
  
