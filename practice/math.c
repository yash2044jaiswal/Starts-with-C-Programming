#include<math.h>
#define pi 3.1416
#define MAX 360

main()
{
    int angle;
    float x,y;
    angle=0;
    printf("angle cos(angle)\n\n");
    while(angle<=MAX){
        x=(pi/MAX)*angle; 
        y=cos(x);
        printf("%15d %13.4f\n",angle,y);
        angle=angle+1;
    }
}