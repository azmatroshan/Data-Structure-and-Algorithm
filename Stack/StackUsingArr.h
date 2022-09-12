#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Stack
{
    int nextE;
    int capacity;
    T *arr;
    public:
    Stack(){
        nextE=0;
        arr=new T[4];
        capacity=4;
    }
    void Push(T x)
    {
        if(nextE==capacity){
            T *newArr = new T [2*capacity];
            for(int i=0;i<nextE;i++) newArr[i]=arr[i];
            capacity*=2;
            delete []arr;
            arr=newArr;
        }
        if(nextE==-1) nextE++;
        arr[nextE++] = x;
    }
    void Top(){
        cout<<arr[nextE];
    }
    bool isEmpty(){
        return nextE == -1;
    }
    void Pop(){
        if(nextE==-1){
            cerr<<"can't pop() the empty stack\n";
            return;
        }
        arr[nextE--]=-1;
    }
    int Size(){
        return nextE;
    }
    void print()
    {
        for (int i=0;i<nextE;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
/**
 * Functions To be Implemented --->
 * Push()
 * Size()
 * Top()
 * isEmpty
 * Pop()
 **/