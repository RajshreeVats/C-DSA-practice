#include<iostream>

using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

int main () {
    struct stack st;
    cout<<"enter size of array";
    cin>>st.size;
    st->size = new int[st->size];
    st.top = -1;
}