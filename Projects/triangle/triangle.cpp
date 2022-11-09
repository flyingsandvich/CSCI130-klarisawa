/*
Name Kodama Arisawa
Date 11/8/2022

Wtite a Program that determinse area and perimiter of rectangle
-Must use Pointers
-must use functions to find area and perimiter
-must primot user to enter length and width of a rectangle
*/

#include <iostream>
#include <math.h>

using namespace std;

void imput_sides(float *length, float *width, float *height){
   do{
    cout << "enter three sides of a triangle"<< endl;
    cin >> *length >> *width >> *height;
    if(*length <= 0 || *width <= 0 || *height <=0){
        cout << "Plese enter positive numbers"<< endl;
        //cin >> *length >> *width;
       // break;
    }
   }while(*length <= 0 || *width <= 0 || *height <=0);
}
void calc_area(float *length ,float *width, float *area, float *height , float *s){
    
    *s = (((*length) + (*width) + (*height))/2 );
    *area = sqrt(*s*((*s - (*length)) * (*s - (*width)) * (*s - (*height)))) ;
    //cout << "area =" <<  *area << endl;
}
void calc_perim(float *length ,float *width, float *perim , float *height){
    *perim = ((*length) + (*width) + (*height));
   // cout << "perimeter =" << *perim << endl;
}
void print_info(float *length ,float *width, float *perim, float *area, float *height){
    cout << "the triangle with sides "<< *length << ", " << *width << ", " << *height << " has an perimiter of " << *perim << ", and an area of " << *area << endl;
}


int main(){
    float *side1 = new float;
    float *side2 = new float;
    float *length = new float;
    float *width = new float;
    float *area = new float;
    float *perim = new float;
    float *height = new float;

    imput_sides(width, length, height);

    calc_area(width, length, area, height, side1);

    calc_perim(width, length, perim , height);

    print_info(length, width, perim, area, height);

    return 0;
}