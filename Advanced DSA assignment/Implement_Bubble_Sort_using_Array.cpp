#include <iostream>
using namespace std;
int main() {
  int n=8;
  int arr[]= {5, 1, 4, 2, 8, 3, -80, 99};
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j]>arr[j+1]){
        
        //swap
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  cout<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
