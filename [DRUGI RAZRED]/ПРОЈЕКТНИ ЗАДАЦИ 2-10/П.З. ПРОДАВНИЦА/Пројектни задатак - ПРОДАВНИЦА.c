#include <stdio.h>
#include <stdlib.h>

float unosProizvoda(); // Prototip funkcije
int placanjeRacuna(float); // Prototip funkcije

int main(void)
{
    float racun;

    printf("********************************************************************************");
    printf("\n\t\t\tDobrodosli u aplikaciju prodavnica!\n\n");
    printf("********************************************************************************");

    printf("\n1. Unos kupljenih proizvoda:\n\n");

    racun = unosProizvoda();

    if(placanjeRacuna(racun) == 1)
        printf("\n\nUspesno ste platili racun!\n\n");
    else
        printf("\n\nNeuspesno placanje racuna!\n\n");

    return 0;
}

float unosProizvoda()
{
    float cena[4], racun = 0;
    int i, komada[4];

    // SOK OD JABUKE 2L
    printf("\nUnesite broj kupljenih komada artikla \'Sok od jabuke 2L\':  ");
    scanf("%d", &komada[0]);
    printf("Unesite cenu za artikal \'Sok od jabuke 2L\': ");
    scanf("%f", &cena[0]);

    // PEKARSKI HLEB
    printf("\n\nUnesite broj kupljenih komada artikla \'Pekarski hleb\':  ");
    scanf("%d", &komada[1]);
    printf("Unesite cenu za artikal \'Pekarski hleb\': ");
    scanf("%f", &cena[1]);

    // POMORANDZE
    printf("\n\nUnesite broj kupljenih komada artikla \'Pomorandze\':  ");
    scanf("%d", &komada[2]);
    printf("Unesite cenu za artikal \'Pomorandze\': ");
    scanf("%f", &cena[2]);

    // COKOLADA 100GR
    printf("\n\nUnesite broj kupljenih komada artikla \'Cokolada 100gr\':  ");
    scanf("%d", &komada[3]);
    printf("Unesite cenu za artikal \'Cokolada 100gr\': ");
    scanf("%f", &cena[3]);

    // RACUNANJE RACUNA
    for(i = 0; i < 4; i++)
        racun += (komada[i] * cena[i]);

    return racun;
}

int placanjeRacuna(float racun)
{
    int izbor;
    float datiNovac;

    printf("\nUnesite nacin placanja: ");
    printf("\n\t1. Gotovina");
    printf("\n\t2. Debitna kartica");
    printf("\n\nVas izbor: ");
    scanf("%d", &izbor);

    switch(izbor)
    {
        case 1:
            racun *= 0.88; // 100% - 12% je 88% (0.88)

            printf("\nUnesite koliko novca dajete za placanje racuna od %.2f RSD: ", racun);
            scanf("%f", &datiNovac);

            if(datiNovac - racun >= 0)
                return 1;
            else
                return 0;
        case 2:
            printf("\nUnesite koliko novca dajete za placanje racuna od %.2f RSD: ", racun);
            scanf("%f", &datiNovac);

            if(datiNovac - racun >= 0)
                return 1;
            else
                return 0;
        default:
            printf("\nUneta je nevalidna opcija placanja!\n\n");
    }

    return 0;
}
