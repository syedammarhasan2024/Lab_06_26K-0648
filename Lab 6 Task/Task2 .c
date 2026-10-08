# include <stdio.h>
# include <ctype.h>
# include <string.h>

int main(){
    
    char password[100];
    char strongest[100];
    int scores[5];
    int i, j, len, score, count = 0;
    int max_score = -999;

    for (i = 0; i < 5; i++){
        printf("\nEnter password %d: ", i + 1);
        scanf("%s", password);

        score = 0;
        len = strlen(password);

        for (j = 0; j < len; j++){
            if (islower(password[j])){
                score = score + 1;
            }
            else if (isupper(password[j])){
                score = score + 2;
            }
            else if (isdigit(password[j])){
                score = score + 3;
            }
        }

        if (len >= 8){
            score = score + 5;
        }

        if (strstr(password, "123") != NULL){
            score = score - 3;
        }

        scores[i] = score;

        printf("Score: %d\n", score);

        if (i == 0 || score > max_score){
            max_score = score;
            strcpy(strongest, password);
        }

        if (score < 10){
            count++;
        }
    }

    printf("\nStrongest password: %s (Score: %d)", strongest, max_score);
    printf("\nNumber of passwords scoring below 10: %d\n", count);
}