#include<iostream>
using namespace std;

class ArrayX
{
    //access specifier of summation is private
   int Summation(int Arr[], int iSize)
{
    int iCnt =0, iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum =iSum + Arr[iCnt];
    }
    return iSum;
}
};

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    ArrayX aobj;    //static object creations

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

    iRet = aobj.Summation(Brr, iLength);

    cout<<"Summation is : "<<iRet<<endl;
    
    delete []Brr;   
    return 0;
}