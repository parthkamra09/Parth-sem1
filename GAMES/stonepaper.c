#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer, playerScore = 0, computerScore = 0;
    char *choices[] = {"Rock", "Paper", "Scissors"};

    srand(time(NULL));  // Seed for random number

    while (1) {
        printf("\n--- Rock Paper Scissors Game ---\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &player);

        if (player == 4) {
            printf("\nFinal Score -> You: %d | Computer: %d\n", playerScore, computerScore);
            printf("Thanks for playing!\n");
            break;
        }

        if (player < 1 || player > 4) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        computer = rand() % 3 + 1;

        printf("You chose: %s\n", choices[player - 1]);
        printf("Computer chose: %s\n", choices[computer - 1]);

        if (player == computer) {
            printf("Result: It's a Draw!\n");
        } 
        else if ((player == 1 && computer == 3) ||
                 (player == 2 && computer == 1) ||
                 (player == 3 && computer == 2)) {
            printf("Result: You Win!\n");
            playerScore++;
        } 
        else {
            printf("Result: Computer Wins!\n");
            computerScore++;
        }

        printf("Current Score -> You: %d | Computer: %d\n", playerScore, computerScore);
    }

    return 0;
}
