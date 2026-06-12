#include<stdio.h>
int main()
{
    int height,lenght,width,volume,weight;
    printf("Height of box:");
    scanf("%d",&height);
    printf("Width of box:");
    scanf("%d",&width);
    printf("Lenght of box:");
    scanf("%d",&lenght);
    volume = height*lenght*width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n",lenght,width,height);
    printf("Volume of the box: %d\n",volume);
    printf("Dimensional weight: %d\n",weight);
}