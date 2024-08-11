#include <iostream>

using namespace std;

class stack
{
   int a[5];
   int top;

   stack(){
   top=-1;
   }

   void push(int v)
   {
       if (top<a)
       {
           a[top]=v
           top++;s

       }
       else
       {
            std::cout<<"overflow";
       }
   }
    int main(){
    Stack s;
    s.push(8);
    }
};
