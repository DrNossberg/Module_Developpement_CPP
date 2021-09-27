/*
** Cnam en partenariat avec l'ITII, 2021
** Projet :
**    TP
** Author :
**    Antoine Orion
** File description :
**    
*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <ctime>

int somme(int a, int b) {
    return (a + b);
}

void inverse(int &a, int &b) {
    int c = a;

    a = b;
    b = c;
}

void inverse_ptr(int *a, int *b) {
    int c = *a;

    *a = *b;
    *b = c;
}

void pointer_attribution(int *a, int *b, int *c) {
    *c = somme(*a, *b);
}

void reference_attribution(int const &a, int const &b, int &c) {
    c = somme(a, b);
}

int get_random(void) {
    return (1 + (rand() % RAND_MAX));
}

int create_tab(int size, int sort_order) {
    int tab[size];

    srand((unsigned)(time(NULL)));
    for (int a = 0 ; a < size; a++)
        tab[a] = get_random();
    for (auto i : tab )
        std::cout << i << " ";
    std::cout << std::endl;
    for (int i = 0, touched; i < size -1; i++) {
        touched = 0;
        for (int node = 0; node < size - 1; node++) {
            if (sort_order == 'A' && tab[node] > tab[node + 1]) {
                inverse_ptr(&tab[node], &tab[node + 1]);
                touched = 1;
            }
            if (sort_order == 'D' && tab[node] < tab[node + 1]) {
                inverse_ptr(&tab[node], &tab[node + 1]);
                touched = 1;
            }
        }
        if (!touched)
            break;
    }
        /*printf("touched : %d\n", touched);*/

/*       */

    std::cout << "Sorted array : ";
    for (auto i : tab )
        std::cout << i << " ";
    std::cout << std::endl;
    return (0);

}

int main(int argc, char const *argv[])
{
    int a = 4, b = 3, c = 0;
    int tab_size = 0;
    char sort_order = '\0';

    printf("Somme : %d + %d = %d\n", a, b, somme(a,b));
    printf("Inverse : %d,%d => ", a, b);
    inverse(a,b);
    std::cout << a << ", " << b << std::endl;
    pointer_attribution(&a, &b, &c);
    printf("Attribution (pointers) : %d + %d = %d\n", a, b, c);
    c = 0;
    reference_attribution(a, b, c);
    printf("Attribution (reference) : %d + %d = %d\n", a, b, c);
        
    std::cout << "Please entre a tab size :" << std::endl;
    std::cin >> tab_size;
    std::cout << "Witch order do you want it to be sorted in ?" << std::endl;
    std::cout << "A : Ascending | D : Descending :" << std::endl;
    std::cin >> sort_order;

    create_tab(tab_size, sort_order);
    return 0;
}