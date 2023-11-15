#include<iostream>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f=0;
        b=0;
    }
    void enque(int val){
      if(b == 5){
        cout<< "queue is full"<<endl;
        return;
      }
        arr[b] = val;
        b++;
    }
    void deque(){
       if(f-b == 0){
           cout<<"queue is empty"<<endl;
           return;
       }
       f++;
    }
    int size(){
       return b-f;
    }
    int front(){
       if(f-b==0){
           cout<<"queue is empty"<<endl;
           return -1;
       } 
       return arr[f];
    }
    int back(){
       if(f-b==0){
           cout<<"queue is empty"<<endl;
           return -1;
       }
       return arr[b-1];
    }
    bool empty(){
       if(size() == 0) return true;
       else return false;
    }
    void display(){
       for(int i=f; i<b; i++){
          cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
};
int main(){
    Queue q;
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.display();
    q.enque(50);
    q.enque(60);
    q.display();
    q.deque();
    q.display();
}
