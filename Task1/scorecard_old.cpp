#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name;
    int score;
};

void add(Player board[], int& size, int capacity, string name, int score) {
    if (size < capacity) {
        board[size].name = name;
        board[size].score = score;
        size++;
    } else {
        int lowest_index = 0;
        for (int i = 1; i < capacity; i++) {
            if (board[i].score < board[lowest_index].score) {
                lowest_index = i;
            }
        }

        
        if (score > board[lowest_index].score) {
            board[lowest_index].name = name;
            board[lowest_index].score = score;
        }
    }


    for (int i = 1; i < size; i++) {
        Player key = board[i];
        int j = i - 1;
        while (j >= 0 && key.score > board[j].score) {
            board[j + 1] = board[j];
            j--;
        }
        board[j + 1] = key;
    }
}

void show(Player board[], int size) {
    for (int i = 0; i < size; i++) {
        cout << (i + 1) << ". Name: " << board[i].name << ", Score: " << board[i].score << endl;
    }
}

int main() {
    int capacity;
    cout << "Enter the maximum number of players on the scoreboard: ";
    cin >> capacity;
    
    Player board[capacity];
    int size = 0;

    cout << "Game Start" << endl;

    while (true) {
        string name;
        cout << "Name: ";
        cin >> name;
        if (name == "over") {
            break;
        }

        int score;
        cout << "Score: ";
        cin >> score;

        add(board, size, capacity, name, score);

        cout << "Current scoreboard:" << endl;
        show(board, size);
        cout << endl;
    }

    cout << "Game over" << endl;

    return 0;
}
