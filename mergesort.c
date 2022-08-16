#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mergesort(int arr[], int inicio, int fim);
void merge(int arr[], int inicio, int meio, int fim);
int main(){
    int arr[] = {3, 0, 7, 1, 5, 2, 4, 6}
}

int mergesort(int arr[], int inicio, int fim){
    if(inicio < fim){
        int meio = inicio + (fim - inicio) / 2;
        mergesort(arr, inicio, meio);
        mergesort(arr, meio + 1, fim);
        merge(arr, inicio, meio, fim);
    }
}

void merge(int arr[], int inicio, int meio, int fim){
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int esquerda[n1], direita[n2];

    for(int i = 0; i < n1; i++){
        esquerda[i] = arr[inicio + i];
    }
    for(int i = 0; i < n1; i++){
        direita[i] = arr[meio + i];
    }

    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2){
        if(esquerda[i] <= direita[j]){
            arr[k] = esquerda[i];
            i++;
        }
        else {
            arr[k] = direita[j];
            j++;
        }
        k++;
    }

    while(j < n2){
        arr[k] = direita[j];
        j++;
        k++;
    }

    while(i < n1){
        arr[k] = esquerda[i];
        i++;
        k++;
    }
    
}