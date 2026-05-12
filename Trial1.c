#include<stdio.h>

  struct date
  {
    unsigned int dd;
    unsigned int mm;
    unsigned int yy;
    };
    struct student
    {
      char name[30];
      int roll;
      float fee;
      struct date dob;
      };
      void main()
      {
      struct student rec;
       rec.name;
       rec.roll;
       rec.fee;
       rec.dob.dd;
       rec.dob.mm;
       rec.dob.yy;
       
       scanf("%s%d%f%d%d%d", rec.name, &rec.roll, &rec.fee, &rec.dob.dd, &rec.dob.mm, &rec.dob.yy);
       printf("\n Name: %s\n Roll: %d\n Fee: %f\n Date of birth: %d:%d:%d", rec.name, rec.roll, rec.fee, rec.dob.dd, rec.dob.mm, rec.dob.yy);
       
       getchar();
       };
       