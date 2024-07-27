#include <stdio.h>

int main(void) {
  double tax,due;
  printf("Enter the amount of your taxable income:");
  scanf("%lf",&tax);
  if (tax>170050)
  {
    due= 34647.50+((tax-170050)*.32);
     printf("Your tax due amount is %.2lf",due);
  }
  else if (tax>89075 && tax<=170050)
    {
    due = 15213.50+((tax-89075)*.24);
       printf("Your tax due amount is %.2lf",due);
    }
  else if (tax>41775 && tax<=89075)
    {
    due = 4807.50+((tax-41775)*.22);
       printf("Your tax due amount is %.2lf",due);
    }
  else if (tax>10275 && tax<=41775)
    {
    due = 1027.50+((tax-10275)*.12);
       printf("Your tax due amount is %.2lf",due);
    }
  else if (tax>=0 && tax<=10275)
    {
    due = tax*(.1);
       printf("Your tax due amount is %.2lf",due);
    }
  else
  {
    printf("Invalid amount entered!");
  }
  return 0;
}