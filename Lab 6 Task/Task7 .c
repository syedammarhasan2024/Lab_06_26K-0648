# include <stdio.h>
int main(){

    int num, tempnum, digit = 0, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    tempnum = num;

    while (tempnum != 0){
        digit = tempnum % 10;
        reverse = reverse * 10 + digit;
        tempnum = tempnum / 10;
    }

    if (reverse == num){
        printf("\nPalindrome confirmed");
    }
    else {
        printf("\nIt isnt a palindrome");
    }
}