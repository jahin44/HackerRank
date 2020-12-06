
#include <iostream>
#include<stdio.h>
#include<cmath>


using namespace std;

int main() {

   int i,c=0,j,x1,x2,v1,v2;
   long long int k1=0,k2=0;
   cin>>x1>>v1>>x2>>v2;
   if(x1>=0 && x2>=0 && x1<=10000 && x2<=10000 && v1 >=1 && v2>=1 && v1<=10000 && v2<=10000){
     k1=x1+v1;
     k2=x2+v2;
     for(i=0;i<100000;i++){
        if(k1==k2){
           c=1;
           break ;
        }
        else{
              k1=k1+v1;
              k2=k2+v2;
              if(k1<k2){
                if(v1<v2){
                  break;                  
                }
              }
              if(k1>k2){
                if(v1>v2){
                  break;
                }
              }

        }
     }
      
     if(c==1){
      cout<<"YES";
     }
     else{  cout<<"NO";}


   }
   


   
  return 0;
}


