#include<iostream>
using namespace std;
void projectTimeCalculation(int h,int n,int nOfW,int oneDay,int tHours);
main(){
    int h,d,nOfW,oneDay,tHours;
    cout<<"Enter the needed hours:";
    cin>>h;
    cout<<"Enter the days that the firm has:";
    cin>>d;
    cout<<"Enter the number of all workers:";
    cin>>nOfW;
    projectTimeCalculation(h,d,nOfW,oneDay,tHours);
    

}
void projectTimeCalculation(int h,int d,int nOfW,int oneDay,int tHours){
    oneDay=552;
    tHours=552*nOfW*d;
    int inHm=tHours/60;
    if(inHm-h>h){
        cout<<"Yes! "<<(9*nOfW*d)-h<<" hours left.";
    }
    if(inHm-h<h){
        cout<<"Not enough time!"<<h-inHm<<"needed.";
    }
   

}