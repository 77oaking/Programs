#include <stdio.h>
#include <stdlib.h>

void displaygrid(int gamegrid[][3]);
void displaygriddefault();
void play(int gamegrid[][3]);
int checkwin(int gamegrid[][3],int player);

int main()
{
    int gamegrid[3][3]={{-1,-1,-1},
                        {-1,-1,-1},
                        {-1,-1,-1}};

    play(gamegrid);
    system("pause");

    return 0;
}
int checkwin(int gamegrid[][3],int player){
    if((player==gamegrid[0][0]&&player==gamegrid[0][1]&&player==gamegrid[0][2]) || //1st row
       (player==gamegrid[1][0]&&player==gamegrid[1][1]&&player==gamegrid[1][2]) || //2nd row
       (player==gamegrid[2][0]&&player==gamegrid[2][1]&&player==gamegrid[2][2]) || //3rd row
       (player==gamegrid[0][0]&&player==gamegrid[1][0]&&player==gamegrid[2][0]) || //1st col
       (player==gamegrid[0][1]&&player==gamegrid[1][1]&&player==gamegrid[2][1]) || //2nd col
       (player==gamegrid[0][2]&&player==gamegrid[1][2]&&player==gamegrid[2][2]) || //3rd col
       (player==gamegrid[0][0]&&player==gamegrid[1][1]&&player==gamegrid[2][2]) || //corners
       (player==gamegrid[0][2]&&player==gamegrid[1][1]&&player==gamegrid[2][0])
       )return player;
    return -1;
}

void play(int gamegrid[][3]){
    int player=1;
    int playerchoice=0;
    int changed=0;
    int full=0;
    while(1){
        system("cls");
        displaygriddefault(gamegrid);
        printf("\n\n\n");
        displaygrid(gamegrid);
        printf("\n\n\n");

        printf("Player %d: ",player);
        scanf("%d",&playerchoice);
        changed=0;
        switch(playerchoice){
            case 1:
                if(gamegrid[0][0]==-1){
                    gamegrid[0][0]=player%2;
                    changed=1;
                }
                break;
            case 2:
                if(gamegrid[0][1]==-1){
                    gamegrid[0][1]=player%2;
                    changed=1;
                }
                break;
            case 3:
                if(gamegrid[0][2]==-1){
                    gamegrid[0][2]=player%2;
                    changed=1;
                }
                break;
            case 4:
                if(gamegrid[1][0]==-1){
                    gamegrid[1][0]=player%2;
                    changed=1;
                }
                break;
            case 5:
                if(gamegrid[1][1]==-1){
                    gamegrid[1][1]=player%2;
                    changed=1;
                }
                break;
            case 6:
                if(gamegrid[1][2]==-1){
                    gamegrid[1][2]=player%2;
                    changed=1;
                }
                break;
            case 7:
                if(gamegrid[2][0]==-1){
                    gamegrid[2][0]=player%2;
                    changed=1;
                }
                break;
            case 8:
                if(gamegrid[2][1]==-1){
                    gamegrid[2][1]=player%2;
                    changed=1;
                }
                break;
            case 9:
                if(gamegrid[2][2]==-1){
                    gamegrid[2][2]=player%2;
                    changed=1;
                }
                break;
            default:
                printf("\nInvalid input\n");

        }
        if(changed==1){

            int winner=checkwin(gamegrid,player%2);
            if(winner!=-1){
                system("cls");
                printf("Player %d is the winner.\n\n",(winner)?1:2);
                displaygrid(gamegrid);
                return;
            }
            player=(player%2)?2:1;
            full++;
            if(full==9){
                printf("Draw");
                return;
            }
        }


    }





}

void displaygriddefault(){
    for(int i=1;i<=9;i++){
        printf("\t%d\t|%s",i,(i%3==0)?"\n":"");
    }
}
void displaygrid(int gamegrid[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //printf("\t%d\t|",gamegrid[i][j]);
            switch (gamegrid[i][j]){
                case 1:
                    printf("\tX\t|");
                    break;
                case 0:
                    printf("\tO\t|");
                    break;
                case -1:
                    printf("\t \t|");
                    break;
            }
        }
        printf("\n");
    }
}
