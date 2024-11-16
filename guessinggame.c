#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int mynum, usernum, i, x, invalid;
    char play_again;

    srand(time(NULL));

    do {
        printf("\n\n\n\nWelcome to GUESSING GAME\n\n");
        printf("I have a number in my mind. Can you guess it?\n\n");
        printf("Difficulty\n");
        printf("1. Easy : 10 chances to guess, 0-100 number\n");
        printf("2. Medium : 7 chances to guess, 0-150 number\n");
        printf("3. Hard : 5 chances to guess, 0-300 number\n");
        printf("4. Advance : 4 chances to guess, 0-500 number\n\n");
        printf("Choose the difficulty (1, 2, 3 or 4): ");
        scanf("%d", &x);

        invalid = 0;

        switch(x) {
            case 1:
                mynum = rand() % 101;
                printf("\n\n\nEASY\n\nYou have 10 chances to guess and the number range is 0 - 100\n\n");
                for(i = 1; i <= 10; i++) {
                    printf("\n%d. Enter your guess: ", i);
                    scanf("%d", &usernum);
                    if(usernum < 0 || usernum > 100) {
                        invalid++;
                        if(invalid == 3) {
                            printf("\nGame over! Too many Invalid Guesses.\n");
                            break;
                        }
                        printf("\n\nInvalid Guess! Please enter a number between 0 - 100.\n\n");
                        i--;
                        continue;
                    }
                    if(mynum == usernum) {
                        printf("\n\nYou got it right!\n");
                        break;
                    } else if(mynum > usernum) {
                        printf("My number is higher than %d. Please try again.\n", usernum);
                    } else {
                        printf("My number is lower than %d. Please try again.\n", usernum);
                    }
                }
                if(i > 10) {
                    printf("\n\nGAME OVER!\nThe answer was %d.\n", mynum);
                }
                break;

            case 2:
                mynum = rand() % 151;
                printf("\n\n\nMEDIUM\n\nYou have 7 chances to guess and the number range is 0 - 150\n\n");
                for(i = 1; i <= 7; i++) {
                    printf("\n%d. Enter your guess: ", i);
                    scanf("%d", &usernum);
                    if(usernum < 0 || usernum > 150) {
                        printf("\n\nInvalid Guess! Please enter a number between 0 - 150\n\n");
                        i--;
                        continue;
                    }
                    if(mynum == usernum) {
                        printf("\n\nYou got it right!\n");
                        break;
                    } else if(mynum > usernum) {
                        printf("My number is higher than %d. Please try again.\n", usernum);
                    } else {
                        printf("My number is lower than %d. Please try again.\n", usernum);
                    }
                }
                if(i > 7) {
                    printf("\n\nGAME OVER!\nThe answer was %d.\n", mynum);
                }
                break;

            case 3:
                mynum = rand() % 301;
                printf("\n\n\nHARD\n\nYou have 5 chances to guess and the number range is 0 - 300\n\n");
                for(i = 1; i <= 5; i++) {
                    printf("\n%d. Enter your guess: ", i);
                    scanf("%d", &usernum);
                    if(usernum < 0 || usernum > 300) {
                        printf("Invalid guess! Please enter a number between 0 - 300\n\n");
                        i--;
                        continue;
                    }
                    if(mynum == usernum) {
                        printf("\n\nYou got it right!\n");
                        break;
                    } else if(mynum > usernum) {
                        printf("My number is higher than %d. Please try again.\n", usernum);
                    } else {
                        printf("My number is lower than %d. Please try again.\n", usernum);
                    }
                }
                if(i > 5) {
                    printf("\n\nGAME OVER!\nThe answer was %d.\n", mynum);
                }
                break;

            case 4:
                mynum = rand() % 501;
                printf("\n\n\nADVANCE\n\nYou have 4 chances to guess and the number range is 0 - 500\n\n");
                for(i = 1; i <= 4; i++) {
                    printf("\n%d. Enter your guess: ", i);
                    scanf("%d", &usernum);
                    if(usernum < 0 || usernum > 500) {
                        printf("Invalid Guess! Please enter a number between 0 - 500\n\n");
                        i--;
                        continue;
                    }
                    if(mynum == usernum) {
                        printf("\n\nYou got it right!\n");
                        break;
                    } else if(mynum > usernum) {
                        printf("My number is higher than %d. Please try again.\n", usernum);
                    } else {
                        printf("My number is lower than %d. Please try again.\n", usernum);
                    }
                }
                if(i > 4) {
                    printf("\n\nGAME OVER!\nThe answer was %d.\n", mynum);
                }
                break;

            default:
                printf("\n\nInvalid Option!\n");
                break;
        }

        printf("\n\nDo you want to play again (y/n): ");
        scanf(" %c", &play_again);

    } while(play_again == 'y' || play_again == 'Y');

    return 0;
}
