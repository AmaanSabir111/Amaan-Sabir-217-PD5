#include<iostream>
using namespace std;
float totalAmountxCalc(char code,float price,float totalAmount,float finalAmount);
main(){
    char code;
    float price = 0.0;
    float totalAmount = 0.0,finalAmount = 0.0;
    cout<<"Enter the vehicle type code (M,E,S,V,T):";
    cin>>code;
    cout<<"Enter the price of vehicle:$";
    cin>>price;
    finalAmount=totalAmountxCalc(code,price,totalAmount,finalAmount);
    cout<<"The final price of a vehicle of type "<<code<<" after adding the totalAmountx is:$"<<finalAmount;
}
float totalAmountxCalc(char code,float price,float totalAmount,float finalAmount){
    if(code=='M'){
        totalAmount=price*(6.0/100.0);
        finalAmount=price+totalAmount;

    }
    else if(code=='E'){
        totalAmount=price*(8.0/100.0);
        finalAmount=price+totalAmount;

    }
    else if(code=='S'){
        totalAmount=price*(10.0/100.0);
        finalAmount=price+totalAmount;

    }
    else if(code=='V'){
        totalAmount=price*(12.0/100.0);
        finalAmount=price+totalAmount;

    }
    else if(code=='T'){
        totalAmount=price*(15.0/100.0);
        finalAmount=price+totalAmount;

    }
    return finalAmount;


}