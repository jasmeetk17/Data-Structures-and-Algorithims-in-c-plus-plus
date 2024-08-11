#include <iostream>
int main() {
     // declaring  the variables
    int i,size,pos,data,n;
    //input the size of an array array to be inserted

    std::cout<<"Size of the array"<<"\n";
    std::cin>>size;

    // declare the array
    int a[size];

    // how many element to be insert in an array
    std::cout<<"How many element wants you want to insert"<<"\n";
    std::cin>>n;

    // enter the element in array
    std::cout<<"Enter the elements"<<"\n";
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }

    //print the array before insertion
    std::cout<<"Print the Array before insertion"<<"\n";
    for (i=0;i<n;i++)
    {
        std::cout<<a[i]<<"\n";
    }

    // enter the position and data to be insert
    std::cout<<"enter the position and data to be inserted"<<"\n";
    std::cin>>pos>>data;

    // shifting the element by traversing array to the given position
    for (i=n;i>=pos;i--)
    {
        // add the previous index of data to next index for shifting until we reach the exact position where we want to insert
        a[i+1]=a[i];
    }

    // add element to the given position
    a[pos]=data;

    std::cout<<"Print the Array after insertion"<<"\n";
    for (i=0;i<n+1;i++)
    {
        std::cout<<a[i]<<"\n";
    }
    return 0;
}
