#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "draw.h"
#include "pakhsh.h"
void shuffle_card(int *card);

int main()
{   
    int AllCard[44];
    int playersCards[4][11];
    int hokm;
    shuffle_card(AllCard);
    int endplay=1;
    pakhsh(AllCard, playersCards, &hokm);
    int EachTeamPoint[2]={0,0};
    while (endplay)
    {
    int playingCardNum[4] = {0,0,0,0};
    int playingCardSym[4] = {0,0,0,0};
    int pointOfEachTeam[2]={0,0};
    draw(playingCardSym,playingCardNum,pointOfEachTeam);
    for (int i=0;i<11;i++)
    {
        
                printf("%c%d ", playersCards[0][i]/11 + 'A',playersCards[0][i]%11);
    }
    printf("\n");
    for (int i=0;i<11;i++)
    {
        
                printf("%d  ",i);
    }
        



    endplay=0;
    if((EachTeamPoint[0]==6)||(EachTeamPoint[1]==6))
    {
        endplay=0;
    }
    }
    
}
void shuffle_card(int *card)
{
    int i, r, temp;
    for (temp = 0, i = 0; temp < 44; i++, temp++)
        card[temp] = i;
    srand(time(NULL));
    for (i = 43; i > 0; i--)
    {
        r = rand() % i;
        temp = card[i];
        card[i] = card[r];
        card[r] = temp;
    }
}