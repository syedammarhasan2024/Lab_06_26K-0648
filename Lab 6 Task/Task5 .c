# include <stdio.h>
int main(){
    
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};

    int sum500 = 0, sum200 = 0, sum100 = 0;
    int total_money;
    int amount;
    int i;

    for (i = 0; i < 5; i++){
        sum500 = sum500 + notes500[i];
        sum200 = sum200 + notes200[i];
        sum100 = sum100 + notes100[i];
    }

    total_money = (sum500 * 500) + (sum200 * 200) + (sum100 * 100);

    printf("\nTotal money available in ATM is: Rs. %d", total_money);

    printf("\nEnter amount to withdraw: ");
    scanf("%d", &amount);

    // Validation checks
    if (amount > total_money){
        printf("\nInsufficient Funds");
    }
    else if (amount % 100 != 0){
        printf("\nInvalid Amount");
    }
    else {
        printf("\nTransaction Approved");
    }
}