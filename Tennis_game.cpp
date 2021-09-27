/*
** Cnam en partenariat avec l'ITII, 2021
** Projet :
**    Tennis_Game
** Author :
**    Antoine Orion
** File description :
**    Calculation of the winner of a tennis match
*/

#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void display_score(int pp_one, int pp_two, int diff) {
    vector<string> points = { "0", "15", "30", "40", "40A"};

    if ((pp_one <= 4 && pp_two <= 4) || diff <= 2) {
        cout << "Player 1 has " << (pp_one > 3 ? (pp_one > pp_two ? "40A" : "40") : points[pp_one]) << " points!" << endl;
        cout << "Player 2 has " << (pp_one > 3 ? (pp_two > pp_one ? "40A" : "40") : points[pp_two]) << " points!" << endl;
    } else
        cout << "Player " << (pp_one > pp_two ? '1' : '2') << " won!" << endl;

}

void determine_winner(int pp_one, int pp_two) {
    int diff = pp_two - pp_one;

    if (diff < 0)
        diff *= -1;
    if (pp_one > 0 && pp_two > 0)
        display_score(pp_one, pp_two, diff);
    else
        cout << "Both values should be int superior to 0!" << endl;
}

int main(int argc, char const *argv[]) {
    int intput_a;
    int intput_b;

    cout << "Please entre the number of round won by eatch players (ex: 2 3) :" << endl;
    cin >> intput_a;
    cin >> intput_b;
    determine_winner(intput_a, intput_b);
    return (0);
}