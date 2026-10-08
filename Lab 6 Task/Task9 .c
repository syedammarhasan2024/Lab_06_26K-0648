# include <stdio.h>
int main(){
    
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
    int i;
    int flagged = 0;
    int normal_sum = 0, normal_count = 0;
    int largest = transfers[0];
    float avg = 0.0;

    printf("\nMonitoring 10 Bank Transfers:\n");

    for (i = 0; i < 10; i++){
        
        if (transfers[i] < 100){
            printf("Transfer %d: %d (Flagged as test transaction)\n", i + 1, transfers[i]);
            flagged++;
        }
        else if (transfers[i] > 200000){
            printf("Transfer %d: %d (Flagged as suspicious)\n", i + 1, transfers[i]);
            flagged++;
        }
        else {
            normal_sum = normal_sum + transfers[i];
            normal_count++;
        }

        if (transfers[i] > largest){
            largest = transfers[i];
        }
    }

    if (normal_count > 0){
        avg = normal_sum / (float)normal_count;
    }

    printf("\nTotal flagged transfers: %d\n", flagged);
    printf("Average of normal transfers: %.2f\n", avg);
    printf("Largest transfer amount: %d\n", largest);
}