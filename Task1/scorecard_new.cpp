#include <iostream>
#include <string>
using namespace std;

/*
    Problem Statement:
    - You are building a scoreboard system where players can be added with their names and scores.
    - The scoreboard has a fixed capacity, meaning once it is full, you need to decide whether to replace
      the player with the lowest score with a new player.
    - The scores on the board should be displayed in descending order.
    - Input continues until the name "over" is entered, which ends the game and stops input.
*/

// Structure to store player information (name and score)
struct Player {
    string name;   // Player's name
    int score;     // Player's score
};

/*
    Function: add
    Description:
    - Adds a new player to the scoreboard if there is space available.
    - If the board is full, the player with the lowest score is replaced if the new player's score is higher.
    - After insertion, the scoreboard is sorted in descending order by score.

    Parameters:
    - Player board[]: The array representing the scoreboard.
    - int& size: The current number of players on the scoreboard (passed by reference so it can be updated).
    - int capacity: The maximum capacity of the scoreboard.
    - string name: The name of the player to be added.
    - int score: The score of the player to be added.
*/
void addPlayer(Player board[], int& size, int capacity, string playerName, int playerScore) {
    // If there is space in the scoreboard, add the player directly
    if (size < capacity) {
        board[size].name = playerName;
        board[size].score = playerScore;
        size++; // Increment the current size of the scoreboard
    } else {
        // Find the player with the lowest score
        int lowestIndex = 0;
        for (int i = 1; i < capacity; i++) {
            if (board[i].score < board[lowestIndex].score) {
                lowestIndex = i;
            }
        }

        // If the new player's score is higher than the lowest, replace that player
        if (playerScore > board[lowestIndex].score) {
            board[lowestIndex].name = playerName;
            board[lowestIndex].score = playerScore;
        }
    }

    // Sort the scoreboard in descending order by score (insertion sort algorithm)
    for (int i = 1; i < size; i++) {
        Player currentPlayer = board[i];
        int j = i - 1;
        // Shift elements that have a lower score to the right
        while (j >= 0 && currentPlayer.score > board[j].score) {
            board[j + 1] = board[j];
            j--;
        }
        board[j + 1] = currentPlayer; // Place the current player in the correct position
    }
}

/*
    Function: showScoreboard
    Description:
    - Displays the current scoreboard with player names and their scores in descending order.
    
    Parameters:
    - Player board[]: The array representing the scoreboard.
    - int size: The current number of players on the scoreboard.
*/
void showScoreboard(Player board[], int size) {
    for (int i = 0; i < size; i++) {
        // Display the player's rank, name, and score
        cout << (i + 1) << ". Name: " << board[i].name << ", Score: " << board[i].score << endl;
    }
}

int main() {
    // Ask the user for the maximum number of players on the scoreboard
    int capacity;
    cout << "Enter the maximum number of players on the scoreboard: ";
    cin >> capacity;

    // Initialize the scoreboard and size
    Player board[capacity];
    int size = 0; // Current number of players on the board

    cout << "Game Start" << endl;

    // Continue to add players until "over" is entered as a name
    while (true) {
        string playerName;
        cout << "Name: ";
        cin >> playerName;

        if (playerName == "over") {
            break; // Exit the loop if "over" is entered
        }

        int playerScore;
        cout << "Score: ";
        cin >> playerScore;

        // Add the new player to the scoreboard
        addPlayer(board, size, capacity, playerName, playerScore);

        // Show the updated scoreboard
        cout << "Current scoreboard:" << endl;
        showScoreboard(board, size);
        cout << endl;
    }

    cout << "Game over" << endl;

    return 0;
}
