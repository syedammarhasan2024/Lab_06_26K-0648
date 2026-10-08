# include <stdio.h>
int main(){
    
    int population[10];
    int i;

    population[0] = 1;
    population[1] = 1;

    for (i = 2; i < 10; i++){
        population[i] = population[i - 1] + population[i - 2];
    }

    for (i = 0; i < 10; i++){
        printf("Generation %d: %d\n", i + 1, population[i]);
    }
}