#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Nome: Michelly Hiratsuka Zorzi
RA: 233.480.712.966
Semestre: 6º Ccomp */

using namespace std;

int i = 0;

struct lista {

	int numP;
	int numR;
	char placa[7];
	char nomeC[30];
	char corC[30];
	char marcaC[30];
	char propC[30];
	
};

struct lista veiculo[5];

void incluirVeiculo(){
	
		system("cls");
		printf("\nDigite o nome do proprietário do carro: \n");
		scanf("%s", &veiculo[i].propC);
		printf ("\nDigite o nome do carro: \n");
		scanf("%s", &veiculo[i].nomeC);
		printf("\nDigite a placa do carro: \n");
		scanf("%s", &veiculo[i].placa);
		printf("\nDigite a marca do carro: \n");
		scanf("%s", &veiculo[i].marcaC);
		printf("\nDigite a cor do carro: \n");
		scanf("%s", &veiculo[i].corC);
		printf("\nDigite o número de rodas do carro: \n");
		scanf("%d", &veiculo[i].numR);
		printf("\nDigite o número de portas do carro: \n");
		scanf("%d", &veiculo[i].numP);
		system("pause");

}

void listarVeiculos(){
	
	for (i = 1; i <=5; i++){
		
		system("cls");
		printf("Lista de veículos cadastrados: \n\n");
		printf("Proprietário: %s \n", veiculo[i].propC);
		printf("Veículo: %s \n", veiculo[i].nomeC);
		printf("Placa: %s \n", veiculo[i].placa);
		printf("Marca: %s \n", veiculo[i].marcaC);
		printf("Cor: %s \n", veiculo[i].corC);
		printf("Número de rodas: %d \n", veiculo[i].numR);
		printf("Número de portas: %d \n", veiculo[i].numP);
		system("pause");
		
	}
	
}	

void sair(){
	
	system("cls");
    printf("Fechando o sistema.\n\n");
    system("pause");
    exit(0);
	
}

main (){
	
	int m;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		
		system("cls");
		printf("Digite a opção que deseja: \n\n");
		printf("1 - Incluir veículo\n");
		printf("2 - Listar veículos cadastrados\n");
		printf("3 - Fechar o programa\n\n");
		scanf("%d", &m);
	
		switch (m){
		
			case 1:
			
				i++;
				incluirVeiculo();
				break;
		
			case 2:
		
				listarVeiculos();
				break;
			
			case 3:
			
				sair();
				break;
			
			default:
			
				system("cls");
				printf("Digite uma opção válida.\n");
				system("pause");
				break;
				
		}
	} while (m !=0);
}
