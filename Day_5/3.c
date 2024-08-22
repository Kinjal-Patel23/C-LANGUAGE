#include <stdio.h>

int main()
{
    int maths, science, english, avg;

    printf("Enter the value of Maths: ");
    scanf("%d",&maths);

    if(maths > 0){
        if(maths < 100){
            printf("Enter the value of Science: ");
            scanf("%d",&science);

            if(science > 0){
                if(science < 100){
                    printf("Enter the value of English: ");
                    scanf("%d",&english);

                    if(english > 0){
                        if(english < 100){

                            printf("Marks is Valid \n");

                            avg = (maths + science + english) / 3;

                            printf("Average is: %d",avg);
                        }
                        else
                        {
                            printf("Enter the valid marks of English...\n");
                        }
                    }
                    else
                    {
                        printf("Enter the valid marks of English...\n");
                    }
                }
                else
                {
                    printf("Enter the valid marks of Science...\n");
                }
            }
            else
            {
                printf("Enter the valid marks of Science...\n");
            }
        }
        else
        {
            printf("Enter the valid marks of Maths...\n");
        }
    }
    else
    {
        printf("Enter the valid marks of Maths...\n");
    }
}