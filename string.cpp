#include <iostream>
using namespace std;

int main(){

//     string s="jatin";
//     cout<<s<<endl;

// cout<<s[0]<<endl;
// cout<<s[4]<<endl;
// cout<<s[5]<<endl;
// cout<<s[6]<<endl;


// ..............................................................................................
// reverse


// string s="jatin";
// int i=0;
// int j=s.length()-1;
// while(i<j){
//        char temp=s[i];
//        s[i]=s[j];
//        s[j]=temp;
//        i++;
//        j--;
// }

// ...........................................................................
// palindrom

// string s="amsam";
// int i=0;
// int j=s.length()-1;

// while(i<j){
//            if(s[i]!=s[j]){
//             cout<<"not palindrom";
//             return 0;
//            }
//            i++;
//            j--;
// }

//     cout<<" palindrom";
//     return 0;
// }

// ....................................................................................

string s="{{()}}";
int cur=0,sqr=0,par=0;

int size=s.length()-1;

for(int i=0; i<s.length(); i++){

    if(s[i]=='{'){
        cur++;
    }

    else if(s[i]=='('){
        par++;
    }

    else if(s[i]=='['){
        sqr++;
    }



    else if(s[i]=='}'){
        cur--;
    }

    else if(s[i]==')'){
        par--;
    }

    else if(s[i]==']'){
        sqr--;
    }
}