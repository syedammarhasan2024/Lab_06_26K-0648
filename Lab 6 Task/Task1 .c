# include <stdio.h>
int main(){
    int arr[12];
    int sum = 0, count = 0, highest, lowest;
    float avg;
    for (int i = 0; i < 12; i++){
        printf("Enter the number of cars on signal %d: ", (i+1));
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / 12;
    highest = arr[0];
    lowest = arr[0];

    for (int j = 0; j < 12; j++){
        if (arr[j] > avg){
            count++;
        }
        if (arr[j] > highest){
            highest = arr[j];
        }
        if (arr[j] < lowest){
            lowest = arr[j];
        }
    }
    printf("\nAverage cars waiting are: %.2f", avg);
    printf("\nHighest cars waiting are: %d", highest);
    printf("\nLowest cars waiting are: %d", lowest);
    printf("\nThe difference is: %d", (highest - lowest));
    printf("\nThe number of overloaded signals is: %d", count);
}