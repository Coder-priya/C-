#include<iostream>
using namespace std;
int main(){
  int low=0, high=n-1, mid, key=29;
  int arr[] = {5,9,10,16,19,20,24,29};
  while (low<=high){
    mid= (low + high)/2;
    if(arr[mid]==key){
      cout<<"Element found at index "<<mid+1;
      break;
    }
    else if(arr[mid]<key){
      low = mid+1;
    }
    else {
      high = mid-1;
    }
  }
}
