#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void ordina_la_fila()
{
    int p = 0;
    time_t t;
    srand((unsigned) time(&t));
    char risposta_r_fila[50];
    printf("\n_________________________________________________________________________________________________________________\n");
    printf("ordina la fila\n");
    printf("                                                                              La tariffa e 5 euro ogni mezzo ora\n");
    printf("\nscegli tra le file disponibili: %d                                per ritorna al main page puoi scrivere \'Ritorna\' \n", rand() % 9);
    scanf("%s", risposta_r_fila);
    printf("\nQuale fila vuoi scegliere?\n");
    while(p == 0)
    {
        
        if(risposta_r_fila[0] == '1' || risposta_r_fila[0] == '2' || risposta_r_fila[0] == '3' || risposta_r_fila[0] == '4' || risposta_r_fila[0] == '5' || risposta_r_fila[0] == '6' || risposta_r_fila[0] == '7' || risposta_r_fila[0] == '8')
        {
            printf("\nOra stai alla fila %s\n", risposta_r_fila);
            p++;
            
        }
        else if(risposta_r_fila[0] != 'r' && risposta_r_fila[1] != 'i' && risposta_r_fila[2] != 't' && risposta_r_fila[3] != 'o' && risposta_r_fila[4] == 'r' && risposta_r_fila[5] != 'n' && risposta_r_fila[6] != 'a')
        {
            printf("\nErrore dell'inserimento\n");
            
        }
        else
        {
            p--;
        }
    }
}

void parla_con_stander()
{
    int b = 0;
    int a;
    char risposta[90];
    char risposta2[4];
    int donazione;
    int c = 0;
    char commento[90];
    printf("\n\nhai un posto in fila!\n");
    printf("\nora puoi parlare con lo stander!\n");
    printf("inserisci 1 per iniziare la chat o 2 per finirla\n");
    scanf("%d", &a);
    while(b == 0)
    {
        if(a == 1)
        {
            printf("stander: ciao stander sono lo stander, mi potresti dire quanto sei lontano cosi ti dico quanto prima venire?\n");
            scanf("%s", risposta);
            printf("grazie a dopo!\n");
            b++;

        }
        else if(a == 2)
        {
           printf("fine chat\n");
           b++;
        }
        else
        {
            printf("errore inserimento\nriprova\n");
            scanf("%d", &a);
        }
    }
    printf("vuoi fare una donazione allo stander?\n");
    scanf("%s", risposta2);
    while(c == 0)
    {
        if(risposta2[0] == 's' && risposta2[1] == 'i')
        {
            printf("di quanto vuoi fare la donazione?\n");
            scanf("%d", &donazione);
            printf("hai donato %d allo stander!\n", donazione);
            printf("aggiugni una recenzione allo stander.\n\n");
            scanf("%s", commento);
            printf("grazie della tua recensione!\n");
            c++;   
        }
        else if(risposta2[0] == 'n'&& risposta2[1] == 'o')
        {
            printf("grazie di aver provato Qskip!\n");
            c++;
        }
        else
        {
            printf("errore nell'inserimento\n");
        }
    }

}

void abbonamento()
{
    printf("\n__________________________________________________________________________________________________________________________________________\n");
    printf("Pagina dell'abbonamento\n");
    int risposta_abb;
    int q_abb = 0;
    printf("\n\nHai questi due abbonamenti che possono procedere\n\n 1:Gratis                   2:premium\n\n GRATIS                     4.99 euro/mese\n                    servizi gratuiti per il primo mese di prova se continui con il nostro abbonamento\n                    priorità di scelta da parte degli stander sugli abbonati gratis  aggiornamenti in tempo reale sullo status delle tue file preferite\n                    l'offerta famiglia per occupare più posti contemporaneamente\n");
    scanf("%d", &risposta_abb);
    while(q_abb == 0)
    {
        if(risposta_abb == 1)
        {
            printf("\n\nHai scelto abbonamento gratis\n\n");
            q_abb++;
        }
        else if(risposta_abb == 2)
        {
            q_abb++;
            char scelta_pagamento[10];
            printf("\nHai scelto abbonamento premium!\n");
            while(q_abb == 1)
            {   
                printf("\nQuale metodo di pagamento vuoi utilizzare?\n\n 1. paypal     2. wallet    3. satispay\n Puoi direttamente con il numero davanti\n\n");
                scanf("%s", scelta_pagamento);
                if(scelta_pagamento[0] == '1' || scelta_pagamento[0] == '2' || scelta_pagamento[0] == '3')
                {
                    printf("\nGrazie per il pagamento\n");
                    q_abb++;
                }
                else
                {
                    printf("\nErrore dellínserimento\n");    
                }
            }
        }
        else
        {
            printf("\nErrore dell'inserimento\n");
        }
    }
}

void richiesta_fila()
{
 char siono[4];
 int a = 0;
 int tariffa;
 char risposta_r[4];
 char pagamento_extra[20];
 char motivazione[60];
    while(a == 0)
    {
        a++;
        time_t t;
        srand((unsigned) time(&t));
        printf("\n\nhai %d utenti disponibili\n", rand() % 10);  
        printf("\nvuoi accentarne una?\n");
        scanf("%s", siono);
        while(a == 1)
        {
            if(siono[0] == 's' && siono[1] == 'i')
            {
                        
                printf("la tariffa di partenza é 10 euro l'ora\n");
                printf("vuoi chiedere un pagamento extra?\n");
                scanf("%s", risposta_r);
                if(risposta_r[0] == 's'&& risposta_r[1] == 'i')
                {
                    printf("di quanto vuoi aumentare la tua tariffa all'ora?\n");
                    scanf("%s", pagamento_extra);
                    printf("esprimi la tua motivazione in poche parole\n");
                    scanf("%s", motivazione);
                    printf("hai accettato la fila!\n");
                }
                else if(risposta_r[0] == 'n'&& risposta_r[1] == 'o')
                {
                printf("hai deciso di continuare con la tariffa standard.\n");
                printf("perfetto hai accettato la fila!");
                }
            }
            else if(siono[0] == 'n'&& siono[1] == 'o')
            {
                    a++;
            }
            else
            {
                printf("errore dell'inserimento\n");
                a--;
            }
            
        }
    }
        
    
}

void parla_con_utente()
{
    int b = 0;
    int a;
    char risposta[90];
    while(b == 0)
    {
        printf("\n\nhai accettato la fila ora puoi parlare con l'utente\n");
        printf("\ninserisci 1 per iniziare la chat o 2 per finirla\n");
        scanf("%d", &a);
        if(a == 1)
        {
            printf("utente: ciao stander sono l'utente, grazie per avermi accettato, mi potresti dire quanto prima dovrei venire?\n");
            scanf("%s", risposta);
            printf("grazie a dopo!\n");
            b++;
        }
        else if(a == 2)
        {
           printf("fine chat\n");
           b++;
        }
        else
        {
            printf("errore nell'inserimento");
        }
    }
}

 void status_stander()
{
    time_t t;
    srand((unsigned) time(&t));
    printf("\n\nhai completato %d file\n\n", rand() % 3)
;
}



void pagina_utente()
{
    int online;
    online = 1;
    char inserimento[5];

    while(online = 1)
    {
        printf("_______________________________________________________________________________________________________________\n");
        printf("Main Page di utente                                                          Qskip\n\n");
        printf("\n1:Ordina la tua fila        2:Parla con il tuo stander     3:Abbonamento (passa a premium)          4:leave;\n\nPuò direttamente inserire il numero della funzione che vorresti fare\n\n\n");
        scanf("%s", inserimento);
        if(inserimento[0] == '1' && inserimento[1] == '\0')
        {
            ordina_la_fila();
        }
        else if(inserimento[0] == '2' && inserimento[1] == '\0')
        {
            parla_con_stander();

        }
        else if(inserimento[0] == '3' && inserimento[1] == '\0')
        {
            abbonamento();
        }
        else if(inserimento[0] != '4')
        {
            printf("\nErrore del inserimento\n");
        }
        else
        {
            goto leave;
        }

    }
    leave:
    printf("\nGrazie per l'utilizzo, utente\n");
    online = 0;
    return;
    

}


 void pagina_stander()
{
    int online;
    online = 1;
    char inserimento[4];

    while(online = 1)
    {
        printf("___________________________________________________________________________________\n");
        printf("Main Page di stander                                                          Qskip\n\n");
        printf("\n1:Richiesta della fila    2:Parla con utente    3:status stander         4: leave;\n\nPuò direttamente inserire il numero della funzione che vorresti fare\n\n\n");
        scanf("%s", inserimento);
        if(inserimento[0] == '1' && inserimento[1] == '\0')
        {
            richiesta_fila();

        }
        else if(inserimento[0] == '2' && inserimento[1] == '\0')
        {
            parla_con_utente();

        }
        else if(inserimento[0] == '3' && inserimento[1] == '\0')
        {

            status_stander();
        }
        else if(inserimento[0] != '4')
        {
            printf("\nErrore del inserimento\n");
        }
        else
        {
            goto leave;
        }

    }
    leave:
    printf("\nGrazie per l'utilizzo, utente\n");
    online = 0;
    return;

}

void sign_in()
{
    char password[30];
    char nome_signin[30];
    printf("\nInserisci il nome o email del account e password\n");
    printf("\nInserisci il nome del account o l'email personale: ");
    scanf("%s", nome_signin);
    printf("\nInserisci il password: ");
    scanf("%s", password);
    printf("\n\n\nInserimento successo...\n");
}

void login_stander()
{
    char password[30];
    char nome_account[30];
    char nome[30];
    char cognome[30];
    char accesso[] = "si";
    char scelta_login[15];
    char telefono[20];
    char email[20];
    int giorno;
    int mese;
    int anno;
    
    printf("\nInserisci il tuo nome e cognome?\n\n\n Nome:  Cognome:\n\n");
    scanf("%s %s", nome, cognome);
    printf("\nInserisci la tua data di nascita\ngg_mm_aaaa\n");
    scanf("%d %d %d", &giorno, &mese, &anno);
    printf("\nInserisci il nome del account: ");
    scanf("%s", nome_account);
    printf("\nInserisci il numero di telefono: ");
    scanf("%s", telefono);
    printf("\nInserisci l'email personale: ");
    scanf("%s", email);
    printf("\nInserisci il password: ");
    scanf("%s", password);

}


void login_utente()
{
    char password[30];
    char nome_account[30];
    char nome[30];
    char cognome[30];
    char indilizzo[30];
    char accesso[] = "si";
    char scelta_login[] = "si";
    int giorno;
    int mese;
    int anno;
    
    printf("\nInserisci il tuo nome e cognome?\n\nNome:  Cognome:\n\n");
    scanf("%s %s", nome, cognome);
    printf("\nInserisci la tua data di nascita\n gg_mm_aaaa\n");
    scanf("%d %d %d", &giorno, &mese, &anno);
    printf("\nInserisci il tuo indirizzo\n");
    scanf("%s", indilizzo);
    printf("\nInserisci il nome del account\n\n");
    scanf("%s", nome_account);
    printf("\nInserisci la password: ");
    scanf("%s", password);
     

}




int main()
{
    int q = 0;
    printf("Benvenuto! questa é Qskip!\nl'app perfetta per chi non vuole fare le lunghe file\n\n");
    printf("evitati anche tu ore in piedi comprando il tuo posto in fila!\n\n");
    printf("oppure guadagna anche tu solamente stando in piedi!\n\n");
    while(q == 0)
    {
        char scelta_opening[100];
        printf("Vuoi far parte anche tu di Qskip?\n");
        scanf(" %[^\n]s", scelta_opening);
        if('s' == scelta_opening[0] && 'i' ==scelta_opening[1])
        {
            q++;
            
            while(q == 1)
            {
                char equal[5];
                printf("hai giá un account?\n");
                scanf(" %[^\n]s", equal);
                if(equal[0] == 'n' && equal[1] == 'o')                
                {
                    q++;
                    char utente[] = "utente";
                    char stander[] = "stander";
                    char risposta[25];
                    
                    
                    while(q == 2)
                    {
                        printf("\nperfetto!, vuoi essere un utente o uno stander?\n");
                        scanf(" %[^\n]s", risposta);

                        if(risposta[0] == 'u' && risposta[1] == 't' && risposta[2] == 'e' && risposta[3] == 'n' && risposta[4] == 't' && risposta[5] == 'e')
                        {
                            login_utente();
                            printf("\ngrandioso! adesso puoi comprare posti in fila\n\n");                               printf("\ngrandioso! adesso puoi comprare posti in fila\n\n");   
                            q++;
                            pagina_utente();
                        }
                        else if(risposta[0] == 's' && risposta[1] == 't' && risposta[2] == 'a' && risposta[3] == 'n' && risposta[4] == 'd' && risposta[5] == 'e' && risposta[6] == 'r')
                        {
                            
                            printf("\ngrandioso! hai scelto di essere uno stander!\n\nadesso puoi iniziare a guadagnare solamente stando in piedi!\n\nprima peró devi fare il login.\n\n");
                            login_stander();
                            printf("\nhai completato il login!\n");
                            q++;
                            pagina_stander();
                            
                        }
                        
                        else
                        {
                            printf("\nErrore dell'inserimento\n\n");
                        }
                    }
                }
                else if((equal[0] == 's') && (equal[1] == 'i'))
                {
                    q++;
                    printf("\necco il sign in del account:\n");
                    sign_in();
                    while(q == 2)
                    {
                        char utente[] = "utente";
                        char stander[] = "stander";
                        char risposta1[25];
                        printf("\nperfetto!, sei un utente o uno stander?\n");
                        scanf("%s", risposta1);
                        if(risposta1[0] == 'u' && risposta1[1] == 't' && risposta1[2] == 'e' && risposta1[3] == 'n' && risposta1[4] == 't' && risposta1[5] == 'e')
                        {
                            printf("\nSign in accesso, gentile utente\n");
                            pagina_utente();
                            q++;
                        }
                        else if(risposta1[0] == 's' && risposta1[1] == 't' && risposta1[2] == 'a' && risposta1[3] == 'n' && risposta1[4] == 'd' && risposta1[5] == 'e' && risposta1[6] == 'r')
                        {
                            printf("\nSign in accesso, gentile stander\n");
                            pagina_stander();
                            q++;
                        }

                    }
                }   
                else
                {
                    printf("\nErrore dell'inserimento\n");
                }
                
            }
            
        }
        else if('n' == scelta_opening[0] || 'N' == scelta_opening[0])
        {
            printf("\nSperiamo di rivederti presto\n");
            q--;
        }
        else
        {
            printf("\nErrore della risposta\n");
        }
    }
}       
    
