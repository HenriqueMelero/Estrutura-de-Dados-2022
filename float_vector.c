//ARQUIVO DE IMPLEMENTAÇÕES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "float_vector.h"

struct float_vector{
    int capacity; //No. maximo de elementos
    int size; //Quantidade atual de elementos
    float *data; //Vetor de floats
};

FloatVector *create(int tam){

    FloatVector *vet = (FloatVector *)calloc(1, sizeof(FloatVector));
    vet->capacity = tam;
    vet->size = 0;
    vet->data = (float*) calloc(vet->capacity, sizeof(float));

    return vet;
};

void destroy(FloatVector **vet_ref){
    FloatVector *vet = *vet_ref;
    free(vet->data);
    free(vet);
}

int size(const FloatVector *vet){
    return vet->size;
}

int capacity(const FloatVector *vet){
    return vet->capacity;
}

float at(const FloatVector *vet, int pos){
    if(pos < 0 || pos >= vet->size){
        fprintf(stderr, "Error: Invalid position!\n");
        fprintf(stderr, "Index [%d] is out of bounds\n");
        exit(EXIT_FAILURE);
    };

    return vet->data[pos];
}

float get(const FloatVector *vet, int pos){
    return vet->data[pos];
}

void append(const FloatVector *vet, float n){
    if(_isfull(vet)){
    {
        fprintf(stderr, "Error in append!\n");
        exit(EXIT_FAILURE);
    }
    vet->data[vet->size++] = n;
}

void print(const FloatVector *vet);{
    if(pos == 0){
        fprintf(stderr, "No data to print!\n");
        exit(EXIT_FAILURE);
        }
    
}