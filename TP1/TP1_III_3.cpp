/*
** Cnam, 2021
** Projet :
**    TP
** Author :
**    Antoine Orion
** File description :
**    Guessing game but the computer guesses
*/

#include <iostream>

#include "color.hpp"


using namespace std;

void victory_msg() {
    cout << "██╗     ███████╗████████╗███████╗     ██████╗  ██████╗ ██╗" << endl;
    cout << "██║     ██╔════╝╚══██╔══╝██╔════╝    ██╔════╝ ██╔═══██╗██║" << endl;
    cout << "██║     █████╗     ██║   ███████╗    ██║  ███╗██║   ██║██║" << endl;
    cout << "██║     ██╔══╝     ██║   ╚════██║    ██║   ██║██║   ██║╚═╝" << endl;
    cout << "███████╗███████╗   ██║   ███████║    ╚██████╔╝╚██████╔╝██╗" << endl;
    cout << "╚══════╝╚══════╝   ╚═╝   ╚══════╝     ╚═════╝  ╚═════╝ ╚═╝" << endl;
}

int main(int argc, char const *argv[]) {
    const int borne_max     = 1000;
    const int borne_min     = 0;
    int max                 = borne_max;
    int min                 = borne_min;
    int attempts            = 0;
    string buff;

    cout << "Hello ! Welcome to the guess game !" << endl;
    cout << "Your goal will be to make ME guess the number of your choice, in the range " << endl;
    cout << "of 0 to 1000" << endl;
    cout << endl;
    cout << "Have you made your decision ? (Y/N)" << endl;
    cin >> buff;
    if (buff[0] != 'Y' && buff[0] != 'y') {
        cout << "Fine, exec again me when you do then :)" << endl;
        return (0);
    }
    do {
        cout << "Is your number " << ((min + max) / 2) << " ?" << endl;
        cout << "Y : Yes | L : It's less | M : It's more $ " << flush;
        attempts++;
        cin >> buff;
        if (buff[0] == 'Y' || buff[0] == 'y')
            break;
        if (buff[0] == 'M' || buff[0] == 'm')
            min =  ((min + max) / 2);
        else
            max = ((min + max) / 2);
        printf("min : %d, max : %d\n", min, max);
    } while (min != max && min - max != -1);
    if (buff[0] != 'Y' && buff[0] != 'y')
        cout << "Huuu seem like there is a mistake somewhere... ?" << endl << endl << endl << "You woudn\'t lie to me, woudn\'t" << RED << " you" << WHITE<< " ?" << endl << "Attempts : " << attempts << endl;
    else {
        victory_msg();
        cout << "I guessed right in "  << attempts << " attempts" << endl;
    }
    return (0);
}
