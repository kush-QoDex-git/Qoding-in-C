//                Calculating area of a rectangle
#include <stdio.h>
int main(){
    float len;
    float br;
    printf("enter the length:\t");
    scanf("%f", &len);
    printf("enter the breadth:\t");
    scanf("%f", &br);
    printf("area of rectangle :\t %f \n",len*br);

//         Area of circle

    float r;
    printf("enter radius : ");
    scanf("%f", &r);
    printf("area of circle with radius %f is : %f \n",r,(3.14)*(r*r));
   
    
    
    //      celcius to fahrenheit
    float c;
    printf("enter temp in celsius: ");
    scanf("%f", &c);
    printf("temp in fahrenheit is: %f \n",((9/5)*c)+32);


    // simple interest
    float p;
    float t;
    float rt;
    printf("enter the principal amount:\t");
    scanf("%f", &p);
    printf("enter the rate of interest per annum:\t");
    scanf("%f", &rt);
    printf("enter the time period in year(s):\t");
    scanf("%f", &t);
    printf("your interest amounts to: %f", (r/100)*p*t);


    return 0;

}


