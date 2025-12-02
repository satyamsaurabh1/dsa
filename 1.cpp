// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int a;

//     for(int i = 1 ;i <=10 ; i++){
//         a=i*t; 
//         cout<<a<<endl;


//     }
// }

#include<iostream>
using namespace std;
int main(){
    // int a,b,c;
    // cin>>a>>b>>c;
    // cout<<a+b+c;

int a;
cin>>a;
bool th = true;
if(th<=1){
    th = false;
}
else{
    for(int i = 2;i<=a;i++){
        if(th %2 == 0){
            th = false;
        }
    }
}
if (th)
        cout << a << " is a prime number.";
    else
        cout << a << " is not a prime number.";
    return 0;
}