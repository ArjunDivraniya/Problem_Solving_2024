// 32.Write a program that categorizes a person’s age group based on the given age:
// Less than 13: "Child"
// Between 13 and 19: "Teenager"
// Between 20 and 59: "Adult"
// 60 and above: "Senior"


  #include <stdio.h>
#include <string.h>

int main()
{
   
int age;
scanf("%d",&age);
if(age<=13){
    printf("Child");
}else if(age<=19 && age>13){
    printf("Teenager");
}
else if(age>=20 && age<=59){
printf("Adult");
}
else
{
    printf("Senior");
}
}