#include<stdio.h>
#include<time.h>

int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
  //  printf("the number is %d",number);
    do
    {
        printf("Guess the number between 1 to 100 \n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("LOWER NUMBER PLEASE \n");
        }
        else if(guess < number)
        {
            printf("LARGER NUMBER PLEASE \n");
        }
        else{
            printf("YOU GUESSED IT %d attempts \n",nguesses);
        }
        nguesses++;
    } while (guess!=number);
    
    return 0;
}