#include<iostream>
using namespace std;
int main(){

    //count tne frequrency of element

    int arr[]={4,5,5,4,2,3,2,5,9};
    
    for(int i=0; i<9; i++){
    
        if(arr[i]!=-1){
        int count=1;
        for(int j=i+1; j<9; j++){
           if(arr[j]==arr[i]){
            arr[j]=-1;
            count++;

           }
           

        }
        
      
        cout<<arr[i]<<"="<<count<<endl;

    }

   
    }
   
}


// int arr[]={8,1,7,4,6,2,2,4};
// for(int i=0; i<8; i++){
//     if(arr[i]!=-1){
//   for(int j=i+1; j<8; j++){
//     if(arr[j] == arr[i]){
//         arr[j]=-1;


       
//     }
//   }
// cout<<arr[i];
// }
// }
// }