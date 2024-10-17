#include<stdio.h>
#include<string.h>


int main(){
	
	char string[] = "String";
	char string2[3] = {'A', 'B', 'C'};
	//string = vetor de caracteres
	
	printf("%s\n", string);
	printf("%s\n", string2);
	
	//scanf = ler só até o primeiro espaço
	//fgets = ler com espaço
	
	char string3[10];
	printf("Frase: ");
	fgets(string3, 10, stdin);
	printf("Frase: %s\n", string3);
	
	//funções - biblioteca
	char string4[] = "AlgoritmosLinguagemC";
	int tam = strlen(string4); //tamanho da string
	printf("Tamanho: %d\n", tam);
	
	//cópia
	char strcopia[10];
	strcpy(strcopia, string3); 
	printf("Copia: %s", strcopia);
	
	//concatenar
	
	char string5[] = "Algoritimos";
	char string6[] = " Programacao";
	strcat(string5, string6);
	printf("Cancatenacao: %s\n", string5);
	
	
	//comparação de strings
	char stringA[12] = "Testa";
	char stringB[12] = "Test";
	printf("String A: %s\n", stringA);
	printf("String B: %s\n", stringB);
	printf("Valor da primeira comparacao: %d\n\n", strcmp(stringA, stringB));
	
	//-1 string B maior que A
	
	
	return 0;
}
