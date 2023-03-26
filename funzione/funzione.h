
int conta(Data dataI, Data dataF) // funziona solo con lo stesso anno di inizio e fine
{
    int tot = 0;
    int mesi[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    if (dataI.mese > dataF.mese || dataI.anno != dataF.anno) // confronto il mese di inizio con mese finale e verifico che gli anni siano uguali
    {
        printf("\nData sbagliata, riprova.");
        return -1;
    }

// controllo anno bisestile se febbraio è il mese iniziale o finale
    if (dataI.mese == 2 || dataF.mese == 2 ) // 
        {
            if (dataI.anno % 4 == 0 && (dataI.anno % 100 != 0 || dataI.anno % 400 == 0))
            {
                mesi[1] = 29; // se è bisestile cambio il valore del mese del febbraio nell array per fare il calcolo giusto.
                printf("\n%d e' bisestile", dataI.anno);
                if (dataI.mese == 2 && dataI.giorno > 29) // controllo che utente non inserisca numero maggiore a 29
                {
                    printf("\nData sbagliata, riprova.");
                    return -1;
                }
                else if(dataF.mese == 2 && dataF.giorno > 29)
                {
                     printf("\nData sbagliata, riprova.");
                     return -1;
                }
            }
            else
            { // se l'anno non è bisestile controllo che utente non inserisca un numero maggiore a 28
                if ((dataI.mese == 2 && dataI.giorno > 28) || dataF.mese == 2 && dataF.giorno > 28) 
                {
                    printf("\nData sbagliata, riprova.");
                    return -1;
                }
            }
        }

    if (dataI.anno == dataF.anno && dataI.mese == dataF.mese) // se i mesi e gli anni sono uguali
    {
        tot = dataF.giorno - dataI.giorno; // basta fare sottrazione
        printf("\nIl giorno di inizio:%d ", dataI.giorno);
        printf("\nIl giorno finale:%d ", dataF.giorno);
        printf("\nTotale dei giorni lavorati:%d\n ", tot);
        return tot;
    }

    else {
        printf("\nLa somma dei giori lavorati del mese d' inizo e finale: ");

        tot = (mesi[dataI.mese - 1] - dataI.giorno) + dataF.giorno; // calcolo giorni del mese di inizio e finale
        printf("%d", tot);
        printf("\nI giorni lavorati in altri mesi: ");

        for (int i = dataI.mese; i < dataF.mese - 1; i++) 
        {
            if (i == 1) // controllo anno bisestile se febbraio è in mezzo
            {
                if (dataI.anno % 4 == 0 && (dataI.anno % 100 != 0 || dataI.anno % 400 == 0))
                {
                    mesi[i] = 29;
                    printf("\n%d e' bisestile", dataI.anno);
                }
                
            }
            printf("\n%d + ", tot);
            tot = tot + mesi[i]; // sommo al totale i giorni dei mesi in mezzo
            printf("%d = %d\n", mesi[i], tot);
        }

        printf("\nTotale:%d\n ", tot);
        return tot;
    }
}