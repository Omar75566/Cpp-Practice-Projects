#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int choice(string msg) {
    int UserChoice;
    cout << "Welcome to Rock, Paper, Scissors Game!" << '\n' << "--------------------------------------------" << '\n';
    cout << msg << '\n' << "[0] Rock, [1] Paper, [2] Scissors" << '\n';
    cin >> UserChoice;
    return UserChoice;
}

int BotPlay() {
    int BotMove;
    srand((unsigned)time(NULL));
    BotMove = rand() % 3;  
    return BotMove;
}

string result(int UserChoice, int BotChoice) {
    if (UserChoice == BotChoice) {
        cout << "Bot chose the same as you" << "\n" << "DRAW" << "\n";
        return "DRAW";
    }
    else if (UserChoice == 0 && BotChoice == 1) {
        cout << "Bot chose paper" << "\n" << "YOU LOST" << "\n";
        return "YOU LOST";
    }
    else if (UserChoice == 0 && BotChoice == 2) {
        cout << "Bot chose scissors" << "\n" << "YOU WON" << "\n";
        return "YOU WON";
    }
    else if (UserChoice == 1 && BotChoice == 0) {
        cout << "Bot chose rock" << "\n" << "YOU WON" << "\n";
        return "YOU WON";
    }
    else if (UserChoice == 1 && BotChoice == 2) {
        cout << "Bot chose scissors" << "\n" << "YOU LOST" << "\n";
        return "YOU LOST";
    }
    else if (UserChoice == 2 && BotChoice == 0) {
        cout << "Bot chose rock" << "\n" << "YOU LOST" << "\n";
        return "YOU LOST";
    }
    else if (UserChoice == 2 && BotChoice == 1) {
        cout << "Bot chose paper" << "\n" << "YOU WON" << "\n";
        return "YOU WON";
    }
    return "";
}

int main() {
    int UserChoice = choice("Choose from below: ");
    int BotChoice = BotPlay();
    result(UserChoice, BotChoice);
    return 0;
}
