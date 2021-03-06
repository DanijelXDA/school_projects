#include <stdio.h>

/*
Задатак 33: Написати функцију чији су аргументи два цела броја.
Функција треба да сабере та два броја и да врати збир тих бројева.
*/
int saberi(int x, int y) { return x + y; }


// Задатак 34: Написати функцију која ће да помножи два реална броја.
float pomnozi(float x, float y) { return x * y; }


/*Задатак 35: Написати функцију која рачуна збир квадрата бројева од 1 до N.
Број N уноси корисник и он се прослеђује у позиву функције као њен параметар.
*/
int zbirKvadrata(int n)
{
    int i, zbir = 0;

    for(i = 0; i < n; i++)
        zbir += i * i;

    return zbir;
}

/*
Задатак 36: Написати функцију која рачуна збир бројева од од 1 до N.
Број N уноси корисник и он се прослеђује у позиву функције као њен параметар.
*/
int zbir1DoN(int n)
{
    int i, zbir = 0;

    for(i = 0; i < n; i++)
        zbir += i;

    return zbir;
}

/*
Задатак 37: Написати функцију која рачуна производ бројева од од 1 до N.
Број N уноси корисник и он се прослеђује у позиву функције као њен параметар.
*/
int proizvod1DoN(int n)
{
    int i, proizvod = 1;

    for(i = 0; i < n; i++)
        proizvod *= i;

    return proizvod;
}


/*
Задатак 38: Написати функције које рачунају обим и површину квадрата.
Параметар обе функције је страница квадрата коју уноси корисник и која се
прослеђује у позиву функције.
*/
float obimKvadrata(float a) { return 4.0 * a; }
float povrsinaKvadrata(float a) { return a * a; }


/*
Задатак 39: Написати функције које рачунају обим и површину
једнакостраничног троугла.
Параметар обе функције је страница троугла коју уноси корисник и која се
прослеђује у позиву функције.
*/
float obimJednakostranicnogTrougla(float a) { return 3.0 * a; }
float povrsinaJednakostranicnogTrougla(float a) { return (a * a * 1.73) / 4.0 ; }

/*
Задатак 40: Написати функције које рачунају обим и површину правоуганика.
Параметри обе функције су странице правоугаоника које уноси корисник и које
се прослеђују у позиву функције.
*/
float obimPravougaonika(float a, float b) { return 2.0 * (a + b); }
float povrsinaPravougaonika(float a, float b) { return a * b; }

// ZADATAK 41 je radjen na casu, a mrzi me da kucam toliko koda xD, Autor

/*
Задатак 42: Написати функцију која рачуна запремину коцке.
Параметар функције је ивица коцке коју уноси корисник и која се прослеђује
у позиву функције.
*/
float zapreminaKocke(float a) { return a * a * a; }


/*
Задатак 43: Написати функцију која рачуна запремину квадра.
Параметри обе функције су ивице квадра које уноси корисник и које се
прослеђују у позиву функције.
*/
float zapreminaKvadra(float a, float b, float c) { return a * b * c; }


/*
Задатак 44: Написати програм који приказује ПРЕНОС ПАРАМЕТАРА ПО
ВРЕДНОСТИ.
Програм реализовати помоћу функције која користи својство преноса
параметара по вредности, тј. у њеном позиву у main( ) фунцији прослеђене су
две променљиве по вредности.
Унутар функције променити вредности прослеђених променљивих.
Које су вредности променљивих након извршавања функције?
*/
void prenosParametaraPoVrednosti(int x, int y) // ne menjaju se vrednosti
{
    int temp = x;
    x = y;
    y = temp;
}

/*
Задатак 45: Написати програм који приказује ПРЕНОС ПАРАМЕТАРА ПО
АДРЕСИ.
Програм реализовати помоћу функције која користи својство преноса
параметара по адреси, тј. у њеном позиву у main( ) фунцији прослеђене су две
адресе променљивих.
Унутар функције променити вредности прослеђених променљивих.
Које су вредности променљивих након извршавања функције?
*/
void prenosParametaraPoAdresi(int *x, int *y) // menjaju se vrednosti
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


/*
Задатак 46: Написати функцију која за параметар има један цео троцифрен
број.
Затим функција исписује тај цео број, па у новом реду исписује цифре тог броја
понаособ раздвојене једним размаком.
*/
void ispisiTrocifreniBroj(int broj)
{
    printf("\nCeo broj: %d\n", broj);
    printf("\nPrva cifra: %d", broj / 100);
    printf("\nDruga cifra: %d", (broj / 10) % 10);
    printf("\nTreca cifra: %d", (broj % 100) % 10);


}

/*
Задатак 47: Написати функцију void izmeni(int *broj) која за параметар има
адресу једне целобројне променљиве.
Увећати вредност те променљиве за 150.
Приказати вредност променљиве пре и после позива функције izmeni( ) у
главном програму.
*/
void izmeni(int *broj) { *broj += 150; }

/*
Задатак 48: Написати функцију која рачуна факторијел броја N.
Број N уноси корисник и он се прослеђује као параметар функције.
*/
int faktorijel(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * faktorijel(n - 1);
}


/*
Задатак 49: Написати функцију која на основу једног целог броја који уноси
корисник, рачуна и приказује фибоначијев низ.
*/
int fibonaci(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}


int main()
{
    // ispisiTrocifreniBroj(102);

    return 0;
}
