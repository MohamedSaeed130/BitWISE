#include <stdio.h>
#include <stdlib.h>

void Get_Max(int,int);


int main()
{
    unsigned int n=0;
    unsigned int k=0;
   scanf("%i %i",&n,&k);
   Get_Max(n,k);


return 0;
}
void Get_Max(int a,int b)
{
    int AndMax=0;
    int OrMax=0;
    int XorMax=0;
    for (int i=1;i<a;i++)
    {
        for(int j=i+1;j<=a;j++)
        {/* And operation*/
            if((i&j)<b)
            {
                if((i&j)>AndMax)
                {
                    AndMax=(i&j);
                }

            }
        /* Or Operation*/
            if((i|j)<b)
            {
                if((i|j)>OrMax)
                {
                    OrMax=(i|j);
                }

            }
        /*Xor Operation*/
            if((i^j)<b)
            {
                if((i^j)>XorMax)
                {
                    XorMax=(i^j);
                }

            }
        }
    }
    printf("%i\n",AndMax);
    printf("%i\n",OrMax);
    printf("%i\n",XorMax);

}
