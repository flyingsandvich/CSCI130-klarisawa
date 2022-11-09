/*
Name  Kodama Arisawa
Date  11/8/2022

this program will promt users to enter two numbers and will preform addisition subtraction multiplaication devision sqrt and power functions
*/

#include <iostream>
#include <math.h>

using namespace std;

void imput_nums(float *num1, float *num2){
  // do{
    cout << "enter 2 numbers"<< endl;
    cin >> *num1 >> *num2;
   // if(*length <= 0 || *width <= 0 || *height <=0){
       // cout << "Plese enter positive numbers"<< endl;
        //cin >> *length >> *width;
       // break;
   // }
 //  }while(*length <= 0 || *width <= 0 || *height <=0);
}
void calc_add(float *num1 ,float *num2, float *sum){
    
    *sum = ( (*num1)+(*num2)) ;
    cout << "The sum of the two numbers is" <<  *sum << endl;
}
void calc_sub(float *num1 ,float *num2, float *sub){
    
    *sub = ( (*num1)-(*num2)) ;
    cout << "The diffrence of the two numbers is = " << *sub << endl;
}
void calc_mult(float *num1 ,float *num2, float *mult){
    
    *mult = ( (*num1)*(*num2)) ;
    cout << "The product of the two numbers = " << *mult << endl;
}
void calc_div(float *num1 ,float *num2, float *div){
    
    *div = ( (*num1)/(*num2)) ;
    cout << "The quotient of the two numbers = " << *div << endl;
}
void calc_power(float *num1 ,float *num2, float *pwr){
    
    *pwr = pow( (*num1) , (*num2)) ;
 cout <<  *num1 << " to the power of " << *num2 << " = " << *pwr << endl;
}
void calc_sqrt(float *num1 ,float *num2, float *sqr){
    
    *sqr = ( sqrt(*num1)) ;
    cout << "The sqare root of =" << *num1 << " is " << *sqr << endl;
}
//void print_info(float *sum ,float *sub, float *mult, float *div, float *pwr, float *sqr, float *num1, float *num2){
 // cout << "The sum of the two numbers is  "<< *sum << endl << "The diffrence of the two numbers is " << *sub << endl << "The product of the two numbers is " << *mult 
  //<< endl << "The quotient of the two numbers is" << *div << endl << *num1 << " to the power of " << num2 << " = " << *pwr << endl << " The square root of " << num1 << " = " << *sqr << endl;

//}

int main() {
    float *num1 = new float;
    float *num2 = new float;
    float *sum = new float;
    float *sub = new float;
    float *mult = new float;
    float *div = new float;
    float *pwr = new float;
    float *root = new float;

    imput_nums(num1, num2);

    calc_add(num1, num2, sum);
    calc_sub(num1, num2, sum);
    calc_mult(num1, num2, sum);
    calc_div(num1, num2, sum);
    calc_power(num1, num2, sum);
    calc_sqrt(num1, num2, sum);


   // print_info(sum, sub ,mult, div, pwr, root, num1, num2);
        

    return 0;
}