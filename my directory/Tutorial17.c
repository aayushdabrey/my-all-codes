#include<stdio.h>

int main(int argc, char const *argv[])  
{
    //label:
   // printf("we are inside label");
    //goto end ;
    //printf("Hello Aayush\n");
    //goto label;
   // end: 
   // printf("we are at end");
   int num;
for (int i = 0; i < 8; i++)
{
    printf("%d", i);
    for (int j = 0; j < 8; j++)
    {
        printf("Enter the number . enter 0 to exit\n");
        scanf("%d", &num);
        if (num==0){
            goto end;
        }
    }
    
}

end:
    return 0;
}
