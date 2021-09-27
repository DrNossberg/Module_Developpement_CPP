    /*
** Cnam en partenariat avec l'ITII, 2021
** Projet :
**    Tennis_Game
** Author :
**    Antoine Orion
** File description :
**    Calculation of the winner of a tennis match
*/

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
    string firstname;
    string lastname;

    cout << "Hello user ! What's you fullname ? " << flush;
    cin >> firstname;
    cin >> lastname;
    transform(firstname.begin(), firstname.end(), firstname.begin(), ::tolower);
    transform(lastname.begin(), lastname.end(), lastname.begin(), ::toupper);
    firstname[0] = toupper(firstname[0]);
    cout << "Hello " << firstname << " " << lastname << " ! I hope you're having a great day so far." << endl;
    return (0);
}