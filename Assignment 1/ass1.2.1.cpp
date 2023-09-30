#include <iostream>
struct Date
{
  int dd;
  int mm;
  int yy;
};
void initDate(struct Date *ptrDate)
{
  ptrDate->dd = 0;
  ptrDate->mm = 0;
  ptrDate->yy = 0;
}
void acceptDateFromConsole(struct Date *ptrDate)
{
  printf("enter the day");
  scanf("%d", &ptrDate->dd);
  printf("enter the month");
  scanf("%d", &ptrDate->mm);
  printf("Enter the year");
  scanf("%d", &ptrDate->yy);
}
void printDateOnConsole(struct Date *ptrDate)
{
  printf("Date is %d/%d/%d", ptrDate->dd, ptrDate->mm, ptrDate->yy);
}
bool isleapyear(struct Date *ptr)
{
  if ((ptr->yy % 4 == 0 && ptr->yy % 100 != 0) || (ptr->yy % 4 == 0 && ptr->yy % 400 == 0))
    return true;
  else
    return false;
};

int main()
{
  int sc;
  struct Date d1;
  bool isleap;

  do
  {
    printf("1.Date default");
    printf("2.Accept Date");
    printf("3.Print date");
    printf("4. Leap Year");
    printf("5.Enter your Choice");
    scanf("%d", &sc);

    switch (sc)
    {
    case 1:
      initDate(&d1);
      printDateOnConsole(&d1);
      break;
    case 2:
      printDateOnConsole(&d1);
      break;
    case3:
      acceptDateFromConsole(&d1);
      break;
    case4:
      if (isleapyear(&d1))
        printf("This is a leap year\n");
      else
        ("this is not a leap year\n");
    }
  }while (sc != 0);
    
    
    return 0;
    
  }
  

