#include<iostream>
using namespace std;
int main(){
  int n=9, key=15;
  int arr[] = {1, 3, 6, 8, 9, 11, 15, 21, 23};
  for(int i=0; i<9; i++){
    if(arr[i]==key){
      cout<<"Element found at index "<<i+1;
      break;
    }
  }
}
