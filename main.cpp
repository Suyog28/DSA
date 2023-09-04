#include <iostream>
using namespace std;

int main(){

    //+ve, -Ve and zero finding
    // int num = -10;
    // if(num > 0){
    //     cout << "Number is positive" << endl;

    // } else if (num < 0)
    // {
    //     cout << "Number is negative" << endl;
    // } else{
    // cout << "Number is zero" << endl;
    // }

    //Odd and Even
    // int num =4 ;

    // if(num%2==0){
    //     cout << "Number is even" << endl;
    // } else{
    //     cout << "Number is odd" << endl;
    // }

    // for (int i = 0; i <= 10; i++){
    //     cout << i << endl;
    // }

    // for (int i = 1; i < 5;i++){
    //     cout << "monica"<< endl;
    // }

    // for (int i = 10; i >= 0; i=i-1){
    //     cout << i << endl;
    // }

    // for (int i = 10; i >= 0; i=i-2){
    //     cout << i << endl;
    // }

    // for (int i = 0; i <= 2; i++){
    //     cout << "Outer Loop "<< i << endl;
    //     for (int j = 0; j <= 2; j++){
    //         cout << "Inner Loop" << j << endl;
    //     }
    // }

    // for (int i = 1; i <= 11; i++){
    //     cout << "Suyog" << i<< endl;
    // }
    // for (int i = 1; i <= 10; i++){
    //     cout << 19 * i << endl;
    // }
    // for (int i = 1; i <= 100; i++){
    //     if( i%2 ==0){
    //         cout << i << endl;
    //     }
    // }


    //Pattern
    // * * * *
    // * * * *
    // * * * *
    // * * * *


    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 6; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //Hollow Pattern
    // * * * * * *
    // *         *
    // *         *
    // *         *
    // * * * * * *

    // for (int row = 0; row < 8;row=row+1){ //OuterLoop
    //     //InnerLoop
    //     for (int col = 0; col < 6;col=col+1){
    //         if(row ==0 || row == 7){
    //             cout <<"*";
    //         } else {
    //             if(col==0 || col==5){
    //                 cout <<"*";
    //             } else{
    //                 cout <<" ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    //Half Pyramid

    // *
    // **
    // ***
    // ****
    // *****

    // for (int row = 0; row < 5; row=row+1){
    //     for (int col = 0; col < row+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //Inverted Half Pyramid
    //******
    //*****
    //****
    //***
    //**
    //*

    // for (int row = 0; row <= 6;row=row+1){
    //     for (int col = 0; col<= 6-row; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;9*-54

    // }

//Inverted Pryamaid  of numbers

// 1 2 3 4
// 1 2 3
// 1 2
// 1 

    // for (int row = 0; row < 5; row=row+1){
    //     for (int col = 0; col < 5 - row; col=col+1){
    //         cout << col + 1 << " ";
    //     }
    //     cout << endl;
    // }
//Pryamaid  of numbers
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++){
    //     for (int col = 0; col < row+1; col++){
    //         cout << col + 1 << " ";
    //     }
    //     cout << endl;
    // }

    //back counting

    // for (int i = n; i >=1; i=i-1){
    //     cout << i << endl;
    // }


//Factorial code
    // int fact = 1;
    // if(n < 0){
    //     cout << "Number is negative" << endl;
    // } else {
    //     for (int i = 1; i <= n; i++){
    //         fact = fact * i;
           
    //     }
    //      cout << fact << endl;
    // }
   
    // int isPrime = true;

    // if(n == 0 && n==1){
    //     isPrime = false;
    // }

    // for (int i = 2; i <= n / 2; i++){
    //     if(n%i==0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout << "Number is Prime" << endl;

    // } else{
    //     cout << "Number is not prime" << endl;
    // }

// checking trigle is valid or not
    // int a, b, c;
    // cin >> a >> b >> c;
    // if((a+b)> c && (b+c)>a && (a+c)>b){
    //     cout << "Valid Trigle" << endl;
    // } else {
    //     cout << "Not A Valid Trigle" << endl;
    // }


//Print Even number from 1 to N 
//     int n;
//     cin >> n;

//     int i = 2;
//    while(i<=n){
//        cout << i << endl;
//        i = i + 2;
//    }

//find Max of three numbers

    // int a, b, c;
    // cin >> a >> b >> c;

    // if(a>b && a>c){
    //         cout << "A is gretar" << endl;
    //     } else if(b>c){
    //             cout << "B is gretar" << endl;
    //         } else {
    //     cout << "C is gretar" << endl;
    // }
}