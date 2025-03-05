#include<iostream>
using namespace std;
int main(){

    // int n;
    // cout<<"size";
    // cin>>n;

    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cout<<"n element="<<i+1;
    //     cin>>arr[i];

    // }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<endl;
    // }

//...................................................
// max no.

// int arr[]={20,10,15,30,40};
// int max =arr[0];
// for (int i =1; i<5; i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }
// }

// cout<<"Maximum element of array is="<<max ;
// }

//.......................................................
// min. no.

// int arr[]={15,45,78,20,11,3};
// int min=arr[0];
// for (int i=1;i<6;i++){
//     if(arr[i]<min){
//       min=arr[i];
//     }
// }
// cout<<"small no. is"<<min;
// }

// .......................................................
// sum of arry

// int arr[]={10,20,30,40,50,60,};
// int sum=0;

// for(int i=0; i<6; i++){
//     sum+=arr[i];
// }
// cout<<sum;
// }

// .......................................................
// 2nd largest

// int arr[]={5,6,8,7,4,3};
// for(int i=0; i<2; i++){
//     for(int j=i+1; j<6; j++){
//         if(arr[j]>arr[i]){
//             int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//         }
//     }
// }

//     cout<<arr[1]<<" ";
// }

// ........................................................
// Kth largest element

// int arr[]={14,12,15,13,11,10,18,9};
// int k;
// cout<<"kth";
// cin>>k;
// for(int i=0; i<k; i++){
//     for(int j=i+1;j<8;j++ ){
//         if(arr[j] > arr[i]){
//             int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//         }
//     }
// }
// cout<<arr[k-1];
// }

// .............................................................
// Remove duplicate
// int arr[]={1,4,13,5,5,8,1,6};
// for(int i=0;i<8;i++){
//     for(int j=i+1;j<8;j++){
//         if(arr[j]==arr[i]){
//             arr[j]= -1;
//         }
//     }
// }
// cout<<"unique no";

// for(int i=0;i<8;i++){
//     if(arr[i]!=-1){
//     cout<<arr[i]<<endl;
// }
// }
// }

// .................................................................
// Frequency of element

int arr[]={1,2,4,5,2,1,3,5,7};

for(int i=0; i<9; i++){
    if(arr[i]!= -1){

    int count=1;
    for(int j=i+1; j<9; j++){
        if(arr[j]==arr[i]){
            arr[j]=  -1;
            count++;

        }
    }


        cout<<arr[i]<<"="<<count<<endl;
    }
}
}