# include <stdio.h>
int main(){

    int marks[15], highest, lowest;
    int sum = 0, count = 0, range;
    float avg;

    for (int i = 0; i < 15; i++){
        printf("\nEnter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < 15; j++){
        if (marks[j] + 5 > 100){
            marks[j] = 100;
        }
        else {
            marks[j] += 5;
        }
    }

    highest = marks[0];
    lowest = marks[0];

    for (int i = 0; i < 15; i++){
        sum = sum + marks[i];

        if (marks[i] > highest){
            highest = marks[i];
        }
        if (marks[i] < lowest){
            lowest = marks[i];
        }
        if (marks[i] == 100){
            count++;
        }
    }

    avg = sum / 15.0;
    range = highest - lowest;

    printf("\nUpdated Marks After Bonus: ");
    for (int i = 0; i < 15; i++){
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    printf("\nNew class average: %.2f", avg);
    printf("\nStudents with exactly 100: %d", count);
    printf("\nHighest marks: %d", highest);
    printf("\nLowest marks: %d", lowest);
    printf("\nRange: %d", range);
}