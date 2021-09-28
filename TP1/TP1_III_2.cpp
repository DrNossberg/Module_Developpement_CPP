/*
** Cnam en partenariat avec l'ITII, 2021
** Projet :
**    TP
** Author :
**    Antoine Orion
** File description :
**    Guessing number
**    
*/

#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int get_random(void) {
    return (1 + (rand() % 100));
}

int main(int argc, char const *argv[]) {
    int goal, guess, try_count = 0;

    srand((unsigned)(time(NULL)));
    goal = get_random();
    cout << "Hello ! Welcome to the guess game !"
    << endl << "Goal of the game : gessing the right number." << endl;
    do {
        cout << "   Please enter a number :  " << flush;
        cin >> guess;
        try_count++;
        if (guess > goal)
            cout << "It's less!" << endl;
        if (guess < goal)
            cout << "It's more!" << endl;
    } while (guess != goal);
    cout << "Well done !" << endl << "You guessed right in only " << try_count << " attempts !" << endl;
    return (0);
}