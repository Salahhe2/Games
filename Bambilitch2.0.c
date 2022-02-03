#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>



void main()
{
int value=1;
short number;
int score_u=0;
int score_p=0;

//game starting menu
printf( "\n\n Do you want to play the game? Type 1 for Yes and 0 for No. Type 2 for instructions\n\t");
scanf("%i", &value);

//option validation error message
while (!((value <= 2) && (value >= 0))) {
        printf("I can see you are a little slow, dear. Try again. And... take your time.\n");
        fflush(stdin);
        //input another number
        scanf("%i", &value);
}
    //instructions
    if(value == 2){
        printf(" This is a game/puzzle/challenge. The purpose of the game is to win the game and get the prize.\n There is a solution, you can win. And, yes, it is very simple. But it might take some time.\n\t Don't give up. Good luck!\n\n");
        value=1;
    }

//the actual game part
while(value == 1) {
    //ask for number
    printf("\n Pick a number from 1 to 9\n\t");
    scanf("%i", &number);
    fflush(stdin);
        //option validation error message
        while (!((number <= 9) && (number >= 1))) {
            printf(" Oh, dear! Have you been drinking? Try again. \n\t");
            //input another number
            scanf("%i", &number);
            fflush(stdin);
        }

    //enter random number from 0 to 9
    int randomnumber;
    srand(time(NULL));
    randomnumber = rand() % 10;
    printf("\n\tI pick %i.\n", randomnumber);

    //compare the two values
    if (number == randomnumber){
        printf("\n Ha ha! You win.\n");
        score_u++;
    }else {
            if(number < randomnumber){
                printf(" Mine is bigger. I win!\n");
            }else {
                printf(" Mine is smaller. I win!\n");
            }score_p++;
        }
    //initiate another round
    printf("\n\t***\n\n Do you want to play another round? Type 1 for Yes and 0 for No.\n\t");
    scanf("%i", &value);
    //printf("%i", value);
        //option validation error message
        while (!((value <= 1) && (value >= 0))) {
            printf(" 1 or 0. It's not rocket science, really.\n");
            fflush(stdin);

            //input another number
            scanf("%i", &value);
           // printf("%i", value);
        }
}//the end of the game part

//game score output
printf("\n   Game Over\n\t Your score is %i\n\t My score is %i", score_u, score_p);
if(score_p>=1){
    if(score_u==score_p){
        printf("\n You have won the game! You are a worthy adversary.\n\tHere is your prize:\n           .'\   /`.\n         .'.-.`-'.-.`.\n    ..._:   .-. .-.   :_...\n  .'    '-.(o ) (o ).-'    `.\n :  _    _ _`~(_)~`_ _    _  :\n:  /:   ' .-=_   _=-. `   ;\  :\n:   :|-.._  '     `  _..-|:   :\n :   `:| |`:-:-.-:-:'| |:'   :\n  `.   `.| | | | | | |.'   .'\n    `.   `-:_| | |_:-'   .'\n      `-._   ````    _.-'\n          ``-------''\n");
    }else {if(score_u<score_p){
        printf("\n Mine is bigger. I win the game. No prize for you!");
        }else {
        printf("\n Mine is smaller. I win the game. No prize for you!");
            }
        }
}
//to keep the console open
printf("\n\n Thank you for playing.");
scanf("%i", &value);
}


