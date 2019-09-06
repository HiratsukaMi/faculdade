// Michelly Hiratsuka Zorzi
// RA: 233.480.712.966
// Aula: Algoritmo Estrutura de dados avançado
// Dia: 06/09/2019
// 6º Semestre

#include <bits/stdc++.h>
using namespace std;

/* Função InsertonSort */

void insertonSort(int arr[], int n){
	
	int i, key, j;
	
	for (i = 1; i < n; i++){
		
		key = arr[i];
		j = i - 1;
		
		while (j >= 0 && arr[j] > key){
			
			arr[j + 1] = arr[j];
			j = j - 1 ;
			
		}
		
		arr[j + 1] = key;
		
	}
	
}

/* Função que imprime o vetor */

void imprimeVetor (int arr[], int n){
	
	int i = 0;
	
	for (i = 0; i < n; i++){
		
		cout << arr[i] << " ";
		cout << endl; 
		
	}
	
}

/* Parte principal */

int main(){
	
	int arr[] = {23, 44, 11, 1, 50};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	insertonSort (arr, n);
	imprimeVetor (arr, n);
	
	return 0;
	
}
