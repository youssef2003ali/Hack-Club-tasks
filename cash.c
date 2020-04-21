#include <stdio.h>
#include <cs50.h>
#include<math.h>
int main(void)
{
    float dollars = get_float("how much Change owed");
    printf("Change owed %f\n", dollars);
    int cents = round(dollars * 100);
    printf("int cents %i\n", cents);
    int twentyfivecent = 0 ;
    int tencent = 0;
    int fivecent = 0;
    int onecent = 0;
        while (cents > 25)
        {
            twentyfivecent ++;
            cents = cents - 25 ;
        }
            while (cents > 10)
            {
                tencent++;
                cents = cents - 10 ;
            }
            while (cents > 5)
            {
                fivecent++;
                cents = cents - 5 ;
            }
            while  (cents > 1)
            {
                onecent++;
                cents = cents - 1 ;
            }

          printf("no of 25cents: %i\n", twentyfivecent);
          printf("no of 10 cents: %i\n", tencent);
          printf("no of 5cents: %i\n", fivecent);
          printf("no of onecents: %i\n", onecent);
}
