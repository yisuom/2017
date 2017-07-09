#include<stdio.h>
int main(void)
{
int cups;                      /*声明杯                      */
double pint,ounce,soupspoon,teaspoon;/*声明品脱，盎司，汤勺，茶勺  */
printf("Please print cups\n");
scanf("%d",&cups);
pint=2.0*cups;
ounce=cups/8;
soupspoon=cups/16;
teaspoon=cups/48;
printf("Then,%dcups,means%fpint or %founce or %fsoupspoon or%fteaspoon.\n",cups,pint,ounce,soupspoon,teaspoon);
return 0;
}
