#include <stdio.h>

float calcola_media(Studente s){

float media;
int i;

for(i = 0; i < N_VOTI; i++){

    media += s.voti[i];

}

media /= N_VOTI;

return media;

}


int sufficienza_studente(Studente s){

if( calcola_media(s) >= 18 ) 
    return 1;
else
    return 0;

}

void print_studente(Studente s){

    // nome cognome 
    // voti

    printf("%s %s\n", s.nome, s.cognome);
    for(int i = 0; i < N_VOTI; i++)
        printf("%i ", s.voti[i]);

    printf("\n");

}
