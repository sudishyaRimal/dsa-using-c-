#include<iostream>
using namespace std;

    class stack 
    {
        private:
        int arr[100];
        int size;
        int top;

        public:
        stack(int s )
        {
            size=s;
            top=-1;
        }

        void push(int items)
        {
            if(top==size-1)
            {
                cout<<"stack overflow!!!";

            }
            else
        }
        {
            top++;
            arr[top]=items;
            cout<<items<<" "
        }
    };