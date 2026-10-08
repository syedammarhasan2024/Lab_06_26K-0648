# include <stdio.h>
int main(){
    
    int seats[15];
    int i;
    int booked = 0, empty = 0;
    int first_avail = -1, last_avail = -1;
    int newly_booked = 0;

    printf("\nEnter seating status for 15 seats\n"
           "0 = empty\n"
           "1 = booked\n");
    for (i = 0; i < 15; i++){
        printf("\nEnter your choice for seat %d: ", i + 1);
        scanf("%d", &seats[i]);
    }

    for (i = 0; i < 15; i++){
        if (seats[i] == 1){
            booked++;
        }
        else {
            empty++;
        }
    }

    for (i = 0; i < 15; i++){
        if (seats[i] == 0){
            first_avail = i + 1;
            break;
        }
    }

    for (i = 14; i >= 0; i--){
        if (seats[i] == 0){
            last_avail = i + 1;
            break;
        }
    }

    printf("\nTotal booked seats: %d\n", booked);
    printf("Total empty seats: %d\n", empty);

    if (first_avail != -1){
        printf("First available seat: Seat %d\n", first_avail);
        printf("Last available seat: Seat %d\n", last_avail);
    }
    else {
        printf("No seats are currently available.\n");
    }

    for (i = 0; i < 15; i++){
        if (seats[i] == 0 && newly_booked < 3){
            seats[i] = 1;
            newly_booked++;
        }
    }

    printf("\nBooked %d available seats.\n", newly_booked);

    printf("\nFinal Seating Chart:\n");
    for (i = 0; i < 15; i++){
        printf("Seat %d: %d\n", i + 1, seats[i]);
    }
}