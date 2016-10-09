#include<stdio.h>
#include<string.h>
int main()
{
    char one[] ="one", two[]="two", l, three[] = "three", test[10];
    int t,j, i, count, count1, count2;
    scanf("%d", &t);
    for(j=0; j<t; j++)
    {
        scanf("%s", &test);
        l = strlen(test);
        if(l==3)
        {
            count1=0;
            count2=0;
            for(i=0; i<l; i++)
            {
                if(one[i]==test[i])
                {
                    count1++;
                }
                if(two[i]==test[i])
                {
                    count2++;
                }
            }
            if(count1>=2)
            {
                printf("1\n");
            }
            if(count2>=2)
            {
                printf("2\n");
            }

        }
        else if(l==5)
        {
            count=0;
            for(i=0; i<l; i++)
            {
                if(three[i]==test[i])
                {
                    count++;
                }
            }
            if(count>=4)
            {
                printf("3\n");
            }

        }
    }
    return 0;
}
