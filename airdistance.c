#include<stdio.h>
#include<math.h>

#define EARTH_RADIUS 6371.0
double degreesToRadians(double degrees)
{
    return (degrees* 3.14915) /180.0;

}

double calculatedDistance(double la1 , double lo1, double la2  , double lo2){
    la1 =(la1);
    lo1 = (lo1);
    la2 = (la2);
    lo2 = (lo2);

    double dla = la2-la1;
    double dlo = lo2-lo1;

    double a = sin(dla / 2) * sin(dla / 2) + cos(la1) * cos(la2) * sin(dlo / 2) * sin(dlo / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

}
int main()
{
    double la1,lo1;
    double la2,lo2;
    printf("Enter the latitude and longitude of the origin in degrees");
    printf("latitude ");
    scanf("%f",&la1);
    printf("longitude");
    scanf("%f",&lo1);

    printf("Enter latitude and longitude of the destination in degrees : \n");
    printf("latitude ");
    scanf("%lf",&la2);
    scanf("%lf",&lo2);

    double distance = calculatedDistance(la1,lo1,la2,lo2);
    printf("Air distance is ",distance);
     
     return 0;


}