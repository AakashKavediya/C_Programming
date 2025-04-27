// Define a structure called Player with data members: Player name, team name, batting average. Create array of objects, store information about players, sort and display information of players in descending order of batting average.
#include <stdio.h>

struct Player {
    char name[50];
    char team[50];
    float batting_avg;
};


int main(){
    int n;
    printf("Enter number of players: ");
    scanf("%d", &n);
    //Defining the size of structure
    struct Player players[n];

    // Input
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for player %d:\n", i+1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Team: ");
        scanf("%s", players[i].team);
        printf("Batting Average: ");
        scanf("%f", &players[i].batting_avg);
    }

    // Sorting
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(players[i].batting_avg < players[j].batting_avg) {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

     // Output
    printf("\nPlayers sorted by batting average (descending order):\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s, Team: %s, Batting Average: %.2f\n",
               players[i].name,
               players[i].team,
               players[i].batting_avg);
    }

    return 0;
}