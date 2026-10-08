# include <stdio.h>
int main(){

    int stock[10], minimum[10], count = 0;
    int difference, largest = 0, largestProduct;

    for (int i = 0; i < 10; i++){

        printf("\nEnter the current stock of product %d: ", i+1);
        scanf("%d", &stock[i]);

        printf("Enter the minimum stock of product %d: ", i+1);
        scanf("%d", &minimum[i]);

        if (stock[i] < minimum[i]){
            count++;
            difference = minimum[i] - stock[i];
        }
        if (difference > largest){
            largest = difference;
            largestProduct = i + 1;
        }
    }
    printf("\nThe total reorder quantity is: %d", count);
    printf("\nThe product which requires the largest restock is: product %d", largestProduct);

}