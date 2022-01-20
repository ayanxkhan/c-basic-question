#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("***Welcome To The Game***\n");
    char name[34];
    printf("Enter Your name:");
    scanf("%s",name);/*by scanf if we give a whitespace betwwen the name so it will return word upto whitespace only
    TO avoid this we use gets and puts() here*/
    printf("Enjoy your game %s!!\n",name);

    //we have included stdlib library for rand().rand() generates random number to us
    //we have included time.h library for time(0) so that we will have different number generated each time
    int number,guess,nguesses=1;
    srand(time(0));//time(0) writtens time in seconds so it generates almost different number
    number=rand()%100+1;//generates number between 1 to 100
    //printf("The number is %d\n",number);
    //keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please\n");
        }
        else if(guess<number)
        {
            printf("Higher number please\n");
        }
        else{
            printf("You guessed it in %d attempt\n",nguesses);
        }
        nguesses++;
    }
    while(guess!=number);
    
    return 0;
}