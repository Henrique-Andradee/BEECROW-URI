#include <stdio.h>
int main()
{
    double a=0.0, M[12][12]; //tamanho dos vetores
    char T[2];
    int C,x,y;
    scanf("%d", &C);
    scanf("%s", &T);
    for(x=0;x<=11;x++) //repetição até a 11ª linha 
    {
        for(y=0; y<=11; y++)
        {
        scanf("%lf", &M[x][y]);
        if(x==C)
            a+=M[x][y];
        }
    }
    if(T[0]=='S') //se for soma
        printf("%.1lf\n",a);
    else if(T[0]=='M') //se for media
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }
    return 0;
}