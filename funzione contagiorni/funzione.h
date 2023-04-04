int conta(Data dataI, Data dataF) // funziona solo con lo stesso anno di inizio e fine
{
    int tot = 0;
    int totMesi = 0;
    int totGiorni = 0;
    int totAnni = 0;
    int mesi[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


    if(dataI.mese == 2 || dataF.mese == 2 || dataI.anno == dataF.anno)
    {
        // controllo anno bisestile se febbraio è il mese iniziale o finale
            if (dataI.anno % 4 == 0 && (dataI.anno % 100 != 0 || dataI.anno % 400 == 0))
            {
                mesi[1] = 29; // se è bisestile cambio il valore del mese del febbraio nell array per fare il calcolo giusto.
                if (dataI.mese == 2 && dataI.giorno > 29) // controllo che utente non inserisca numero maggiore a 29
                {
                    printf("\nSe anno è bisestile febbraio non può essere maggiore di 29, riprova.");
                    return -1;
                }
                
            }
            if((dataF.anno % 4 == 0 && (dataF.anno % 100 != 0 || dataF.anno % 400 == 0))){
                mesi[1] = 29;
                if(dataF.mese == 2 && dataF.giorno > 29){
                    printf("\nSe anno è bisestile febbraio non può essere maggiore di 29, riprova.");
                    return -1;
                }
            }
            else
            { // se l'anno non è bisestile controllo che utente non inserisca un numero maggiore a 28
                if ((dataI.mese == 2 && dataI.giorno > 28) || dataF.mese == 2 && dataF.giorno > 28) 
                {
                    printf("\nSe anno non è bisestile febbraio non può superare 28, riprova.");
                    return -1;
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

    else if (dataI.anno == dataF.anno && dataI.mese != dataF.mese){
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

        printf("\nTotale:%d\n", tot);
        totMesi = dataF.mese - dataI.mese;
        printf("Totale dei mesi:%d",totMesi);

        return tot;
    }
    }
    
    
    
      

                
       

                                // diversi

    if(dataI.anno != dataF.anno){
         if(dataI.anno % 4 == 0 && (dataI.anno % 100 != 0 || dataI.anno % 400 == 0)){// anno bisestile 
                mesi[1] = 29;
            } // se gli anni sono diversi
        totAnni = dataF.anno - dataI.anno; // calcolo anni tra la data di inizio e quella di fine
        totGiorni = (mesi[dataI.mese - 1] - dataI.giorno) + dataF.giorno; // giorni nel mese di inizio e finale
        for(int i = dataI.mese; i < 12; i++) // somma dei giorni in tutti i mesi rimanenti dell'anno di inizio
        {
            
            totGiorni += mesi[i];
        }
        totMesi = 12 - dataI.mese + 1; // mesi rimanenti nell'anno di inizio

        for(int j = dataI.anno + 1; j < dataF.anno; j++) // intermedi
        {   
            if(j % 4 == 0 && (j % 100 != 0 || j % 400 == 0))// anno bisestile 
            {
                mesi[1] = 29;
            }
            for(int k = 0; k < 12; k++) // somma giorni e mesi per ogni anno intermedio
            {
                totGiorni += mesi[k];
                totMesi++;
            }
        }
        
        for(int l = 0; l < dataF.mese - 1; l++){ // somma dei giorni in tutti i mesi dal primo al mese di fine nell'anno di fine
            if(l % 4 == 0 && (l % 100 != 0 || l % 400 == 0)){// anno bisestile 
                mesi[1] = 29;
            }
            totGiorni += mesi[l];
            totMesi++;
        }

        printf("\nTotale dei giorni lavorati:%d", totGiorni);
        printf("\nTotale dei mesi lavorati:%d", totMesi);
        printf("\nTotale degli anni lavorati:%d",totAnni);
        return totGiorni;
    }

    }


