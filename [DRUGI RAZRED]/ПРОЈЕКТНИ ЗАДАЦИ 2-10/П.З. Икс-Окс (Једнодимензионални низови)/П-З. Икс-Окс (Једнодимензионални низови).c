#include <stdio.h>
#include <stdlib.h>

int meni(int *, int []);
int odigrajPotez(int *, int []);
void prikaziTablu(int []);

int main(void)
{

    int tabla[9] = {0};
    int igrac = 1; // 1 -> prvi igrac; 2 -> drugi igrac
    int kraj = 0; // nije kraj igre

    printf("********************************************************************************");
    printf("\n\t\t\tDobrodosli u XO (Iks-Oks)\n\n");
    printf("********************************************************************************");

    do
    {
        kraj = meni(&igrac, tabla);
    }
    while(kraj != 3);

    return 0;
}


int meni(int *igrac, int tabla[])
{
    int izbor;

    printf("\n\nIzaberite opciju: \n");
    printf("\t1. Odigraj potez\n");
    printf("\t2. Prikazu tablu\n");
    printf("\t3. Kraj igre\n");
    printf("\nVas izbor: ");
    scanf("%d", &izbor);

    printf("\n\n\n"); // novi red

    switch(izbor)
    {
        case 1:
            odigrajPotez(igrac, tabla);
            break;
        case 2:
            prikaziTablu(tabla);
            break;
        case 3:
            printf("\n\t\t\t\tG A M E    O V E R   !\n\n\n\n\n");
            return 3;

        default:
            printf("\nNevalidna opcija!\n");
            return 0;
    }
}


int odigrajPotez(int *igrac, int tabla[])
{
    int i, nereseno = 0;

    if(*igrac == 1)
    {
        printf("Na potezu je igrac X (iks)\n");
    }
    else            // O
    {
        printf("Na potezu je igrac O (oks)\n");
    }
    printf("Unesite poziciju za unos (dozvoljene od 1 od 9): \n\n");
    printf("\t-------------\n");
    printf("\t| 1 | 2 | 3 |\n");
    printf("\t-------------\n");
    printf("\t| 4 | 5 | 6 |\n");
    printf("\t-------------\n");
    printf("\t| 7 | 8 | 9 |\n");
    printf("\t-------------\n");
    printf("\nIzaberite polje: ");

    int pozicija;
    scanf("%d", &pozicija);

    if(pozicija < 1 || pozicija > 9)
        printf("Izabrana pozicija ne postoji");
    else
    { // POZICIJA - 1 JER INDEKSI NIZA IDU U INTERVALU OD 0 DO N - 1!!

        if(tabla[pozicija - 1] == 1 || tabla[pozicija - 1] == 2)
        {
            printf("\nIzabrana pozicija je vec popunjena.");
        }
        else
        {
            if(*igrac == 1)
            {
                tabla[pozicija - 1] = 1;
                *igrac = 2;
            }
            else
            {
                tabla[pozicija - 1] = 2;
                *igrac = 1;
            }
        }
    }

    printf("\nPobednik je: ");

    if( // POBEDNIK JE X
        (tabla[0] == 1 && tabla[1] == 1 && tabla[2] == 1)
        ||
        (tabla[3] == 1 && tabla[4] == 1 && tabla[5] == 1)
        ||
        (tabla[6] == 1 && tabla[7] == 1 && tabla[8] == 1)
        ||
        (tabla[0] == 1 && tabla[3] == 1 && tabla[6] == 1)
        ||
        (tabla[2] == 1 && tabla[4] == 1 && tabla[6] == 1)
        ||
        (tabla[2] == 1 && tabla[5] == 1 && tabla[8] == 1)
        ||
        (tabla[0] == 1 && tabla[4] == 1 && tabla[8] == 1)
        ||
        (tabla[2] == 1 && tabla[4] == 1 && tabla[6] == 1)
    )
    {
        printf("IGRAC 1 - X (Iks)\n\n");
        return 3; // KRAJ IGRE
    }
    else if( // POBEDNIK JE O
        (tabla[0] == 2 && tabla[1] == 2 && tabla[2] == 2)
        ||
        (tabla[3] == 2 && tabla[4] == 2 && tabla[5] == 2)
        ||
        (tabla[6] == 2 && tabla[7] == 2 && tabla[8] == 2)
        ||
        (tabla[0] == 2 && tabla[3] == 2 && tabla[6] == 2)
        ||
        (tabla[2] == 2 && tabla[4] == 2 && tabla[6] == 2)
        ||
        (tabla[2] == 2 && tabla[5] == 2 && tabla[8] == 2)
        ||
        (tabla[0] == 2 && tabla[4] == 2 && tabla[8] == 2)
        ||
        (tabla[2] == 2 && tabla[4] == 2 && tabla[6] == 2)
    )
    {
        printf("IGRAC 2 - O (Oks)\n\n");
        return 3; // KRAJ IGRE
    }
    else
    {
        printf("Nema pobednika.\n\n");
    }

    // PROVERA
        for(i = 0; i < 9; i++)
        if(tabla[i] != 0) // da li je tabla popunjenja
            nereseno++;

    if(nereseno == 9)
    {
        printf("\n\n\t\t\t\tNERESENO!!!\n\n");
        return 3;
    }

    return 0;
}

void prikaziTablu(int tabla[])
{
    char znak[9];
    int i;

    // konvertovanje u znak
    for(i = 0; i < 9; i++)
    {
        if(tabla[i] == 0) // prazno polje
            znak[i] = ' ';
        else if(tabla[i] == 1) // X
            znak[i] = 'X';
        else                    // O
            znak[i] = 'O';
    }

    printf("\n\nPrikaz tabele:\n\n");
    printf("\t-------------\n");
    printf("\t| %c | %c | %c |\n", znak[0], znak[1], znak[2]);
    printf("\t-------------\n");
    printf("\t| %c | %c | %c |\n", znak[3], znak[4], znak[5]);
    printf("\t-------------\n");
    printf("\t| %c | %c | %c |\n", znak[6], znak[7], znak[8]);
    printf("\t-------------\n");

    return;
}
