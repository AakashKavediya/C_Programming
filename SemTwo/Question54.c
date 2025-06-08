// 54. Write a program to display information of player in ascending order with respect to their batting average. Define a structure called cricket that will describe the player’s name,country name,best score,batting average.


#include <stdio.h>

struct Player {
    char name[50];
    char team[50];
    float avg;
    float bestScore;
};

int main(){
    int n;
    printf("Enter the number of player: ");
    scanf("%d", &n);
    struct Player players[n];

    for(int i = 0; i<n; i++){   
        printf("Enter the player name: ");
        scanf("%s", players[i].name);
        
        printf("Enter the team name: ");
        scanf("%s", players[i].team);

        printf("Enter the Avg score: ");
        scanf("%f", &players[i].avg);

        printf("Enter the Best Score: ");
        scanf("%f", &players[i].bestScore);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(players[j].avg > players[j+1].avg){
                struct Player temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp;
            }
        }
    }

    printf("%-30s %-30s %-10s %-10s\n", "Player Name", "Team Name", "Avg Score", "Best Score");
    printf("-----------------------------------------------------------------");
    for(int i = 0; i < n; i++){
        printf("\n %-30s %-30s %-10f %-10f \n", players[i].name, players[i].team, players[i].avg, players[i].bestScore);
    }
}