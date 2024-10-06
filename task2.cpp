#include<iostream>
#include<cmath>
using namespace std;
float calvolume(float l,float w,float h,float v,string unit);
main(){
    float length,width,height,volume;
    string unit;
    cout<<"Enter the length of pyramid (in meters):";
    cin>>length;
    cout<<"Enter the width of pyramid (in meters):";
    cin>>width;
    cout<<"Enter the height of pyramid (in meters):";
    cin>>height;
    float unitvol=calvolume(length,width,height,volume,unit);
    cout<<unitvol;
    
}
float calvolume(float l,float w,float h,float v,string unit){
    v=(l*w*h)/3;
    cout<<"Enter the desired output unit(millimeters,centimeters,meters,kilometers):";
    cin>>unit;
    if(unit=="millimeters"){
        v=v*1000*1000*1000;

    }
    if(unit=="centimeters"){
        v=v*100*100*100;

    }
    if(unit=="meters"){
        v=v;

    }
    if(unit=="kilometers"){
        v=v/(1000*1000*1000);

    }
    return v;




}