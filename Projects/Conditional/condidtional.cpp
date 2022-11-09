/*
Name  Kodama Arisawa
Date  11/8/2022

this program will promt users to enter 5 numbers and will run functions that find the sum product min max avrage and oddity appon user input.
*/

#include <iostream>
#include <math.h>
#include <algorithm> 
#include <string>


using namespace std;

// void name(string full){
//         string first;
//     string last;
//     string full;

//     cout << "enter your full name" << endl;
//     cin >> first >> last;
//     full = first + " " + last;
//     cout << full << endl;
// }

void imput_nums(float *num1, float *num2, float *num3 ,float *num4, float *num5 ){
    string first;
    string last;
    string full;

    cout << "Enter your first and last name" << endl;
    cin >> first >> last;
    full = first + " " + last;
    


    cout << "Hello " << full <<" enter 5 numbers"<< endl;
    cin >> *num1 >> *num2 >> *num3 >> *num4 >> *num5;

}
void calc_add(float *num1, float *num2, float *num3 ,float *num4, float *num5, float *sum){
    
    *sum = ( (*num1)+(*num2)+(*num3)+(*num4)+(*num5)) ;
    cout << "The sum is " <<  *sum << endl;
}
void calc_mult(float *num1, float *num2, float *num3 ,float *num4, float *num5, float *prod){
    
    *prod = ( (*num1)*(*num2)*(*num3)*(*num4)*(*num5)) ;
    cout << "The product is " <<  *prod << endl;
}
void calc_avrage(float *num1, float *num2, float *num3 ,float *num4, float *num5, float *avg){
    // float *num1 = new float;
    // float *num2 = new float;
    // float *num3 = new float;
    // float *num4 = new float;
    // float *num5 = new float;
    // float *sum = new float;

   *avg= (((*num1)+(*num2)+(*num3)+(*num4)+(*num5))/5);
   cout << *avg << endl;
}


void max_val(float *num1, float *num2, float *num3 ,float *num4, float *num5 ){
//    float arr[0]{*num1, *num2, *num3 ,*num4, *num5} ;
//         for(i = 1;i < n; ++i)
//     {
//        // Change < to > if you want to find the smallest element
//        if(arr[0] < arr[i])
//            arr[0] = arr[i];
    //}
    cout << "The maximum value is " << std::max({*num1, *num2, *num3 , *num4, *num5}) << endl;
}
void min_val(float *num1, float *num2, float *num3 ,float *num4, float *num5 ){
//    float arr[0]{*num1, *num2, *num3 ,*num4, *num5} ;
//         for(i = 1;i < n; ++i)
//     {
//        // Change < to > if you want to find the smallest element
//        if(arr[0] < arr[i])
//            arr[0] = arr[i];
    //}
    cout << "The minimum value is " << std::min({*num1, *num2, *num3 , *num4, *num5}) << endl;
}


int main() {

    
    
    float *num1 = new float;
    float *num2 = new float;
    float *num3 = new float;
    float *num4 = new float;
    float *num5 = new float;
     float *sum = new float;
         float *avg = new float;
    float *prod = new float;
    // float *sub = new float;
    // float *mult = new float;
    // float *div = new float;
    // float *pwr = new float;
    // float *root = new float;


    imput_nums(num1, num2, num3 , num4 ,num5 );
    
    // max_val(num1, num2, num3 , num4 ,num5 );


    // cout << "Enter the number to select what you wish to retun." << endl
    // << "1 Return the sum" << endl
    // << "2 Return the product" << endl
    // << "3 Return the averege" << endl
    // << "4 Return the maximum" << endl
    // << "5 Return the minimum" << endl
    // << "6 Return the floor" << endl
    // << "7 Quit" << endl << endl;

    int imput;
    while(imput != 7){
            cout << "Enter the number to select what you wish to retun." << endl
    << "1 Return the sum" << endl
    << "2 Return the product" << endl
    << "3 Return the averege" << endl
    << "4 Return the maximum" << endl
    << "5 Return the minimum" << endl
    << "6 Return the floor" << endl
    << "7 Quit" << endl << endl;
        cin >> imput;
        //cout << "imput = " << imput<< endl;
    if(imput == 1){
        calc_add(num1,num2,num3 ,num4,num5,sum);
cout << endl;
    } else if(imput == 2){
        calc_mult(num1,num2,num3 ,num4,num5,prod);
        cout << endl;

    } else if(imput == 3){
        calc_avrage(num1,num2,num3 ,num4,num5,avg);
cout << endl;
    }else if(imput == 4){
        max_val(num1,num2,num3 ,num4,num5);
cout << endl;
    }else if(imput == 5){
         min_val(num1,num2,num3 ,num4,num5);
cout << endl;
    }else if(imput == 6){
cout << endl;
    }else if(imput == 7){
        return 0;
    }    
    
    }
    //return 0;
}
