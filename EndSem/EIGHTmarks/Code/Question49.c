/*
Write a program to display information of player in ascending order with respect to their batting
average. Define a structure called cricket that will describe the player’s name,country name,best
score,batting average.
*/

#include <stdio.h>

struct Player {
    char name[50];
    char country[50];
    int best_score;
    float batting_avg;
};

int main() {
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    
    struct Player players[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Country: ");
        scanf("%s", players[i].country);
        printf("Best Score: ");
        scanf("%d", &players[i].best_score);
        printf("Batting Average: ");
        scanf("%f", &players[i].batting_avg);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (players[j].batting_avg > players[j+1].batting_avg) {
                struct Player temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp;
            }
        }
    }

    printf("\n%-20s %-20s %-15s %-20s\n", "Player Name", "Country", "Best Score", "Batting Average");
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-20s %-15d %-20.2f\n",
               players[i].name,
               players[i].country,
               players[i].best_score,
               players[i].batting_avg);
    }

    return 0;
}
