#include <iostream>
#include <iomanip>
#include <ctime>
#include "Player.h"
#include "Die.h"
#include "Cate_Assignment6.h"

using namespace std;

/*
*        STUDENT : Jeff Cate
*       COURSE # : ITDEV185-900
*   ASSIGNMENT # : 6 - Dice Game
*/

void displayWinner(Player &winner) {
    cout << "The winning player is player"<< winner.getPlayerNumber() << " amount = " << winner.getSumOfDice() << endl
         << endl;
    int count = 0;
    for (Die d : winner.dice) {
        if (count < 10) {
            cout << "die"<< count << ":  " << winner.getSingleDieValue(d) << "    ";
        }
        else {
            cout << "die"<< count << ": " << winner.getSingleDieValue(d) << "    ";
        }
        if ((count % 5) == 0) {
            cout << endl;
        }
        count++;
    }
}
void displayPlayers(Player players[], int size) {
    for (int i = 0; i < size; i++) {
        if (i < 10) {
            cout << " ";
        }
        if (i % 5 == 0) {
            cout << players[i].getPlayerNumber() << ": " << players[i].getSumOfDice() << endl;
        }
        else {
            cout << players[i].getPlayerNumber() << ": " << players[i].getSumOfDice() << "\t";
        }
    }
    cout << endl;
}

Player& getWinner(Player players[], int size) {

    int winningPlayerNumber = 0;
    for (int i = 0; i < size; i++) {
        players[i].play();
        if (players[i].getSumOfDice() > players[winningPlayerNumber].getSumOfDice()) {
            winningPlayerNumber = i;
        }
    }
    Player& winningPlayer = players[winningPlayerNumber];
    return winningPlayer;
}

void setPlayerNumbers(Player team[], int size) {
    for (int i = 0; i < size; i++) {
        team[i].setPlayerNumber(i);
    }
}

int main() {

    srand((unsigned int)time(0));
    const int playersSize = 100;

    Player players[playersSize];
    setPlayerNumbers(players, playersSize);
    Player winner = getWinner(players, playersSize);
    //displayPlayers(players, playersSize);
    displayWinner(winner);

    

    char end = getchar();
    return 0;
}
