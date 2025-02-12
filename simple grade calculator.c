#include<stdio.h>

int main()
{
    int x;
    char grade;
    
    printf("enter your score:-");
    scanf("%d",&x);
    
grade = (x>=90)?'A':(x>=80)?'B':(x>=70)?'C':(x>=60)?'D':(x>=50)?'E':'F';
    
    printf("your grade is:-  %c ",grade);
    
    switch(grade)
    {
        case'A':
                printf("Excellent work!");
                break;
                
        case 'B':
                printf("Well done");
                break;
                 
        case 'C':
                printf("good job");
                break;
            
        case 'D':
                printf("you passed,but you could do better.");
                break;
                
        case 'F':
                printf("sorry,you faild");
                break;
                
        default:
                printf("invalid grade!");
                break;
    }
    
    if(grade=='A'||grade=='B'||grade=='C'||grade=='D')
        {
            printf("congratulation!you are eligible for next level");
        }
    else 
    {
         if(grade=='F')
         {
             printf("please try again next time");
         }
         else
         {
             printf("invalid grade!");
         }
    
        return 0;
}
}