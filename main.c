#include <stdio.h>
#include "funzioni.h"

int main() {
    char scelta;
    int ris;
    int risultato=0;

    printf("Scegli l'operazione:\n");
    printf("addizione = Q\nsottrazione = W\nmoltiplicazione = E\ndivisione = S\n");
    printf("Inserisci la tua scelta: ");
    scanf(" %c", &scelta); 

    if (scelta == 'Q' || scelta == 'W' || scelta == 'E' || scelta == 'S') {
        if (scelta == 'Q')
            risultato = addizione();
        else if (scelta == 'W')
            risultato = sottrazione();
        else if (scelta == 'E')
            risultato = moltiplicazione();
        else if (scelta == 'S')
            risultato = divisione();

        printf("Risultato: %d\n", risultato);
    } 

    return 0;
}

