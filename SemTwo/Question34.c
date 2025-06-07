// 34. Define a structure called Player with data members: Player name, team name, batting average. Create array of objects, store information about players, sort and display information of players in descending order of batting average.

#include <stdio.h>

struct Player {
    char name[50];
    char team[50];
    float avg;
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
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(players[j].avg < players[j+1].avg){
                struct Player temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp;
            }
        }
    }

    printf("%-30s %-30s %-10s\n", "Player Name", "Team Name", "Avg Score");
    printf("-----------------------------------------------------------------");
    for(int i = 0; i < n; i++){
        printf("\n %-30s %-30s %-10f \n", players[i].name, players[i].team, players[i].avg);
    }
}