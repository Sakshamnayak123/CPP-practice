
// ASSENDING ORDER


// #include<iostream>
// using namespace std;
// int main(){
 
 
//  int arr[]={5,4,8,1,2,3};
//  for(int i=0;i<6;i++){
//     for(int j=i+1; j<6; j++){

//         if(arr[j]< arr[i]){

//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;

//         }
//     }
//  }
// for(int i=0;i<6;i++){
//     cout<<" "<<arr[i];
// }

// }







// DECENDING ORDER

// int arr[]={1,2,1,3,2,1};
// for(int i=0; i<6; i++){
//     for(int j=i+1; j<6; j++){

//         if(arr[j]>arr[i]){


//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }

// for( int i=0;i<6;i++){
//     cout<<" "<<arr[i];
// }
// }





// Remove duplicate from given array

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={1,4,3,2,1,2};
     
//     for(int i=0; i<6; i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[j]==arr[i]){

//                  arr[j]=-1;
                
//             }
//         }
        
//     }

//       for(int i=0; i<6; i++){
//         if(arr[i] != -1){
//             cout<<arr[i];
//         }
//       }

      
// }





// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={4,5,1,2,2,7,1,3,1};
//     for( int i=0; i<9 ; i++){
//         for(int j=i+1; j < 9 ; j++){
//             if(arr[j]==arr[i]){

//                 arr[j]=-1;
//             }
//         }
//     }
// for(int i=0; i<9; i++){
//     if(arr[i] != -1){
//         cout<<arr[i];
//     }
// }


// }



// #include<iostream>
// using namespace std;
// int main(){

//     int arr[10];

//     for (int i=0; i<10; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<10; i++ ){
//         cout<<arr[i]<<"\t";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){

// int arr[]={1,5,4,8,7,8};          ask

// int s=sizeof(arr)/sizeof(arr[3]);

// for(int i=0;i<s;i++){
//     cout<<arr[i]<<"\t";
// }


// }


// 

// 

// #include<iostream>
// using namespace std;
// int main (){

//     int arr[]={1,2,4,5,8,1,2,5};

//     for(int i=0;i<8;i++){
       
//         if(arr[i]!=5){
//             cout<<arr[i];
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
 
//     int arr[]={1,4,3,2,};
//     for(int i=0; i<4 ; i++){
//         if(arr[i]==4){
//             arr[i]=0;
//         } 
//         cout<<arr[i]<<"\t";
//     }

// }


// #include<iostream>
// using namespace std;
// int main(){

//     int sum=0;

//     int arr[]={1,4,3,2,6,5};
//     for(int i=0; i<6; i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum;
// }



// #include<iostream>
// using namespace std;
// int main(){

//     int sum=1;                        
                                    //    practice
//     int arr[]={1,4,3,2,6,5};
//     for(int i=0; i<6; i++){
//         sum=sum*arr[i];
//     }
//     cout<<sum;
// }


// #include<iostream>
// using namespace std;
// int main(){
//            int arr[]={10,12,45,213,874,110};


//         int mx = arr[0];
//     for(int i=1; i<6; i++){
//      if(arr[i]>mx){
//       mx=arr[i];
// }
//     }

//     cout<<mx;
// }


// #include<iostream>
// using namespace std;
// int main(){
//            int arr[]={10,12,45,213,874,110};

//           int mn=arr[0];
//           for(int i=1; i<6; i++){
//             if( arr[i]<mn){
//                 mn=arr[i];
//             }
//         }
//             cout<<mn;
        
//     }



//move zeros in the end of array
// #include<iostream>
// using namespace std;
// int main(){
//            int arr[]={10,12,45,0,213,874,110,0};
//            int j=0;

//            for(int i=0; i<8; i++){
                                                         
//             if(arr[i]!=0){
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//                 j++;

//             }

//            }
//            for(int i=0; i<8; i++){
//             cout<<arr[i];
//            }
//         }

// #include<iostream>
//  using namespace std;
//  int main(){
//                int arr[]={10,12,45,0,213,874,110,0};
//             int count=0;
                                                             
//       for(int i=0; i<8; i++){
                                                    
//             if(arr[i]==0){
//                 count++;
//             }
//         }
//         cout<<count;
//     }

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={1,2,0,0,5,0,3,0,5,8};
//     int j=0;
//     for(int i=0; i<10; i++ ){
//         if(arr[i] != 0){
//             int temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             j++;
//         }
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
    

// }