#include "corso.h"

float percentuale_superamento_test(Studente s[], int n_studenti, int esame){

// calcolare percentuale superamento di un esame, non contare gli esami non dati
int passati = 0;
float perc;

for(int i = 0; i < n_studenti; i++)
    if(s[i].voti[esame] >= 18 && s[i].voti[esame] <= 30)
        passati++;

perc = (passati * 100.0) / n_studenti;

return perc;

}

Studente miglior_studente(Studente s[], int n_studenti){

Studente migliore;
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

 migliore = s[indice];
 
 return migliore;   
}


void ordina_studenti(Studente s[], int n_studenti){




}