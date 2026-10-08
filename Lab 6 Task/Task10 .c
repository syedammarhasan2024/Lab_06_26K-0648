# include <stdio.h>
int main(){

    int sum = 0, num, count = 0;

    do {

        printf("Enter withdrawl amount: ");
        scanf("%d", &num);

        if (num != 0){
            sum = sum + num;
        }

        count++;
    } while (num != 0);

    printf("\nThe number of transactions are: %d", (count - 1) );
    printf("\nThe total amount withdrawn is: %d", sum);

}