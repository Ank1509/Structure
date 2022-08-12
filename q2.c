#include<stdio.h>

    struct date
    {

      int yy;
        int mm;
        int dd;
        int yy1;
        int mm2;
        int dd3;
    };
    float age(struct date x)
    {
      int dob=(x.yy*365+x.mm*12+x.dd);
      int present=(x.yy1*365+x.mm2*12+x.dd3);
      return ((present-dob)/365);
    };
    


int main(){
    struct date x;
    printf("Enter your date of birth: \n");
    scanf("%d%d%d",&x.yy,&x.mm,&x.dd);
    printf("Entered date %d/%d/%d\n",x.yy,x.mm,x.dd);
    printf("Enter presnet date: ");
    scanf("%d%d%d",&x.yy1,&x.mm2,&x.dd3);
    printf("Entered date %d/%d/%d\n",x.yy1,x.mm2,x.dd3);

    float s=age(x);
    printf("Your age is %f",s);

}