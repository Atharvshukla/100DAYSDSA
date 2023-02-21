#include <iostream>
using namespace std;
int main(){
  int arr[5];
  int rev_arr[5];

  
  for (int i=0;i<5;i++){
    cin>>arr[i];
  } 
  
  for(int i=0;i<5;i++){
    rev_arr[5-i-1]=arr[i];
  }  
  for(int i=0;i<=4;i++){
    cout<<rev_arr[i];
  }
}
