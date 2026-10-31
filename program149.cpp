#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    cout<<"Enter the no of elements : \n";
    cin>>iLength;

    Brr = new int[iLength]; //just like malloc in C
    
    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iLength; iCnt++)   //ha loop why??
    {
        cin>>Brr[iCnt];
    }
    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)   //ha loop why??
    {
        cout<<Brr[iCnt]<<endl;
    }
    delete []Brr;   //why []Brr ???

    return 0;
}