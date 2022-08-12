#include <stdio.h>
struct stu
{
  int roll;
  char name[100];
  int dd;
  int mon;
  int yr;
  float cgpa;
  int tot;
};
void asc(struct stu *s, int n)
{
  struct stu temp;
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n - i-1; j++)
	 {
	   if (s[i].tot < s[i + 1].tot)
	     {
	      temp = s[i];
	      s[i] = s[i + 1];
	      s[i + 1] = temp;
	    }
	  }
    }
  for (int i = 0; i < n; i++)
    {
      printf ("roll number:%d\n", s[i].roll);
      printf ("Name:%s\n", s[i].name);
      printf ("DOB:%d %d %d\n", s[i].yr, s[i].mon, s[i].dd);
      printf ("CGPA: %.2f\n", s[i].cgpa);
    }
}

int main ()
{
  int n;
  printf ("Enter the no of students:");
  scanf ("%d", &n);
  struct stu s[n];
  for (int i = 0; i < n; i++)
    {
      printf ("Enter the details for %d student:\n", i + 1);
      printf ("Enter the roll number:");
      scanf ("%d", &s[i].roll);
      printf ("Enter the name:");
      scanf (" %[^\n]s", s[i].name);
      printf ("Enter your DOB in year/mon/day format:");
      scanf ("%d%d%d", &s[i].yr, &s[i].mon, &s[i].dd);
      printf ("Enter your CGPA:");
      scanf ("%f", &s[i].cgpa);
      s[i].tot = s[i].yr * 365 + s[i].mon * 360 + s[i].dd;
    }
  printf("The details of student in increasing order of age is displayed below:\n");
  asc (s, n);
  return 0;
}
