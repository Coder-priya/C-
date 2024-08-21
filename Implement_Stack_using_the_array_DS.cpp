            #include<iostream>
            using namespace std;
            class Stack{
            public:
                int arr[5];
                int idx;
                Stack(){
                    idx = -1;
                }
                void push(int val){
                    if(idx==sizeof(arr)/sizeof(arr[0])-1){
                        cout<<"stack is full"<<endl;
                        return;
                    }
                        idx++;
                        arr[idx] = val;
                 }
                void pop(){
                    if(idx == -1){
                         cout<<"stack is empty!"<<endl;
                         return;
                    }
                         idx--;
                }
                int top(){
                    if(idx == -1){
                        cout<<"stack is empty"<<endl;
                        return -1;
                    }
                    return arr[idx];
                }
                int size(){
                    return idx+1;
                }
                bool empty(){
                    if(size() == 0) return true;
                    else return false;
                }
                void display(){
                        if(idx>=0) {
                            cout<<"Stack elements are:"<<endl;
                            for(int i=idx; i>=0; i--){
                                 cout<<arr[i]<<" ";
                                 cout<<endl;
                            }
                        }
                        else{
                            cout<<"Stack is empty";
                        }
                 }
            };
            int main(){
                Stack s;
                int x;
                s.push(10);
                s.push(20);
                s.push(30);
                s.push(40);
                s.display();
                s.push(50);
                s.push(60);
                s.display();
                cout<<"size is: "<<s.size()<<endl;
                s.pop();
                s.display();
                cout<<s.size();
            }
