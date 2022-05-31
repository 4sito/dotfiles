#include "corso.h"

float percentuale_superamento_test(Studente s[], int n_studenti, int esame){




}

Studente miglior_studente(Studente s[], int n_studenti){

Studente s;
int medie[n_studenti];
int indice = 0, media;

media = calcola_media(s[0]);

for(int i = 0; i < n_studenti; i++){
    
    medie[i] = calcola_media(s[i]);
    if( media < medie[i] ){
        indice = i;
        media = medie[i];
        }         

    }

 s = s[indice];
 
 return s;   
}


void ordina_studenti(Studente s[], int n_studenti){




}