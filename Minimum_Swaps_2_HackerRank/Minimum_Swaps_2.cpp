//Minimum Swaps 2
//Terminated due to timeout 
//if you can solve in my Approach
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>

//1 3 5 2 4 6 7

using namespace std;
int an,ab=0,bi,c,si;
int cha(int ar[],int sar[],int arr[] ){
 int cu=0;
 ::bi=0;
 ::c=0;
 ::si=0;
 for(int i=0;i< ::an;i++){
   if(ar[i]==sar[i]){
      arr[i]=0;
    cu++;
   }else {
     arr[i]=ar[i];
      ::si=i;
    if(::bi < ar[i]){
          ::bi=ar[i];
          ::c = i ;
        // cout<< ::bi<<" "<< ::c<<endl;
        }


   }

 }
// cout<< ::si<<endl;
 /* for(int i=0;i< ::an;i++){
       cout<<arr[i]<<" ";}
       cout<<endl;
//cout<<cu;*/
 return cu;
}

int main() {
  int re=0;
  int n,a,b,po=0;
  cin>> n;
  if(n>=1 && n<=100000){
     ::an=n;
     int ar[n], tmp,arr[n],sar[n];
     for(int i=0;i<n;i++){
     cin>>a;
     if(a>=1 && a<=n){
     ar[i]=a;
     sar[i]=a;
      }

  }
     sort (sar,sar+n);
   int cu = cha(ar,sar,arr);

   while(n != cu){




          tmp = ar[::si];
          ar[::si]=ar[::c];
          ar[::c]=tmp;
          re++;


    /*  for(int i=0;i< n;i++){
       cout<<ar[i]<<" ";}
       cout<<endl;*/
      cu = cha(ar,sar,arr);

   }



    //for(int i=0;i< ::an;i++){
    //cout<<arr[i]<<" ";}
    cout<<re <<endl;





  }

   return 0;

        }






