#include<stdio.h>
#include<stdio.h>

double degreesToRadians(double degrees){
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