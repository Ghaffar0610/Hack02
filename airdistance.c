#include<stdio.h>
#include<stdio.h>

double degreesToRadians(double degrees)
{
    return degrees* M_PI /180.0;

}

double calculateDistance(double la1 , double lo1, double la2 , double la2 , double lo2){
    la1 = degreesTORadians(la1);
    lo1 = degreesToRadians(lo1);
    la2 = degreesToRadians(la2);
    lo2 = degreesToRadians(lo2);

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
    scanf("%f"&la2);
    scanf("%f"&lo2);

    double distance = calculatedDistance(la1,lo1,la2,lo2);
    printf("Air distance is ",distance);
     
     return 0;


}