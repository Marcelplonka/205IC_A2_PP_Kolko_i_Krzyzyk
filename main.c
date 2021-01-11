#include <stdio.h>

void generujTablice(char tab[3][3]);

void instrukcje();

void rysujTablice(char tab[3][3]);

char gracze(char tab[3][3], char gracz);

int warunkiWygranej(char tab[3][3], char gracz);

int kolejnosc = 1;


int main() {
    int i = 1;
    char tab[3][3];
    char gracz1 = '0', gracz2 = 'X';
    instrukcje(tab);
    generujTablice(tab);
    rysujTablice(tab);

    switch(kolejnosc) {
        case 1:
            gracze(tab, gracz1);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz1) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz1);
                rysujTablice(tab);
                return 0;
            }

        case 2:
            gracze(tab, gracz2);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz2) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz2);
                rysujTablice(tab);
                return 0;
            }

        case 3:
            gracze(tab, gracz1);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz1) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz1);
                rysujTablice(tab);
                return 0;
            }

        case 4:
            gracze(tab, gracz2);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz2) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz2);
                rysujTablice(tab);
                return 0;
            }

        case 5:
            gracze(tab, gracz1);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz1) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz1);
                rysujTablice(tab);
                return 0;
            }

        case 6:
            gracze(tab, gracz2);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz2) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz2);
                rysujTablice(tab);
                return 0;
            }

        case 7:
            gracze(tab, gracz1);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz1) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz1);
                rysujTablice(tab);
                return 0;
            }

        case 8:
            gracze(tab, gracz2);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz2) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz2);
                rysujTablice(tab);
                return 0;
            }

        case 9:
            gracze(tab, gracz1);
            kolejnosc = kolejnosc + 1;
            rysujTablice(tab);
            if (warunkiWygranej(tab, gracz1) == 1) {
                printf("\n\nGracz %c wygrywa!\n", gracz1);
                rysujTablice(tab);
                return 0;
            }
            break;

    }
    printf("\n\n Remis!\n");
    rysujTablice(tab);
}

void generujTablice(char tab[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tab[i][j] = ' ';
        }
    }
}

void instrukcje()
{
    printf("\tKolko i krzyzyk\n");
    printf("Wybierz numer od 1 - 9 i zagraj:\n\n");

    printf("  1 | 2 | 3  \n");
    printf(" ---+---+---\n");
    printf("  4 | 5 | 6  \n");
    printf(" ---+---+---\n");
    printf("  7 | 8 | 9 \n\n");

    return;
}

void rysujTablice(char tab[3][3]) {
    printf("\n");
    printf("  %c | %c | %c\n", tab[0][0], tab[0][1], tab[0][2]);
    printf(" ---+---+---\n");
    printf("  %c | %c | %c\n", tab[1][0], tab[1][1], tab[1][2]);
    printf(" ---+---+--- \n");
    printf("  %c | %c | %c", tab[2][0], tab[2][1], tab[2][2]);
}

char gracze(char tab[3][3], char gracz) {
    int wybor;
    printf("\nGracz %c - prosze umiescic znak. \n", gracz);
    scanf("%i", &wybor);
    if (wybor < 4) {
        if (tab[0][(wybor - 1) % 3] == ' ') {
            tab[0][(wybor - 1) % 3] = gracz;
        } else {
            printf("To miejsce jest juz zajete. Wybierz inne: \n");
            gracze(tab, gracz);
        }
    }
    if (wybor > 3 && wybor < 7) {
        if (tab[1][(wybor - 1) % 3] == ' ') {
            tab[1][(wybor - 1) % 3] = gracz;
        } else {
            printf("To miejsce jest juz zajete. Wybierz inne: \n");
            gracze(tab, gracz);
        }
    }
    if (wybor > 6 && wybor < 10) {
        if (tab[2][(wybor - 1) % 3] == ' ') {
            tab[2][(wybor - 1) % 3] = gracz;
        } else {
            printf("To miejsce jest juz zajete. Wybierz inne: \n");
            gracze(tab, gracz);
        }
    }
    if (wybor >= 10) {
            printf("\nPodales zla liczbe. Wybierz inna!");
            gracze(tab, gracz);
        }
}

int warunkiWygranej(char tab[3][3], char gracz) {
    if (tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2] && tab[0][0] != ' ')
        return 1;

    else if (tab[1][0] == tab[1][1] && tab[1][1] == tab[1][2] && tab[1][0] != ' ')
        return 1;
    else if (tab[2][0] == tab[2][1] && tab[2][1] == tab[2][2] && tab[2][0] != ' ')
        return 1;
    else if (tab[0][0] == tab[1][0] && tab[1][0] == tab[2][0] && tab[0][0] != ' ')
        return 1;
    else if (tab[0][1] == tab[1][1] && tab[1][1] == tab[2][1] && tab[0][1] != ' ')
        return 1;
    else if (tab[0][2] == tab[1][2] && tab[1][2] == tab[2][2] && tab[0][2] != ' ')
        return 1;
    else if (tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[1][1] != ' ')
        return 1;
    else if (tab[2][0] == tab[1][1] && tab[1][1] == tab[0][2] && tab[1][1] != ' ')
        return 1;
}



