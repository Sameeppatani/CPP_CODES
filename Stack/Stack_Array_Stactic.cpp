#include<iostream>
using namespace std;
#include<climits>
class stackusingArray{
     int*data;
    int indexes;
    int capacity;
    public:

        stackusingArray(int size){
            data=new int[size];
            indexes=0;
            capacity=size;
        }
        int size(){
        return indexes;
        }
        bool isEmpty(){
        return indexes==0;
        }
        void push(int value){
            if(indexes==capacity){
                cout<<"stack full";
            }
            data[indexes]=value;
            indexes++;
        }
        int pop(){
            if(isEmpty()){
                cout<<"underflow";
                return INT_MIN;
            }
            indexes--;
            return data[indexes];
        }
        int top(){
        return data[indexes-1];
        }
};

int main(){
    stackusingArray s(5);
    s.push(1);
    s.push(2);
    cout<<s.pop();



}

