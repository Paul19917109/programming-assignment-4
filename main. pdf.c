
#include <stdio.h>

int
main ()
{
  int chem, phy, math;
  float avg;
  printf ("Enter the marks of Maths: \n");
  scanf ("%d", &math);
  printf ("Enter the marks of Physics: \n");
  scanf ("%d", &phy);
  printf ("Enter the marks of Chemistry: \n");
  scanf ("%d", &chem);
  
  if(chem <0 ||chem >100 || math<0 || phy<0 || math>100 || phy>100){
      printf("Invalid Value Entered Check on Your Values and Try Again");
  }
  else{
      avg = (chem + phy + math) / 3;
  printf ("The average score is:  %0.1f\n", avg);
  if (avg >= 80)
    {
      printf ("Your Grade is A");
    }
  else if (avg >= 70)
    {
      printf ("Your Grade is B");
    }
  else if (avg >= 60)
    {
      printf ("Your Grade is C");
    }
  else if (avg >= 50)
    {
      printf ("Your Grade is D");
    }
  else if (avg >= 40)
    {
      printf ("Your Grade is E");
    }
    else if (avg >= 0)
    {
      printf ("Your Grade is F");
    }
  else
    {
      printf ("Invalid");
    }
  }
  return 0;
}
