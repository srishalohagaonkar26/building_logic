#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr;
        int iSize;

        ArrayX()
        {

        }
        ArrayX(int x)
        {
            iSize = x; 
            Arr = new int[iSize];  
        }
        
        ~ArrayX()
        {
            delete []Arr;   
        }
};

int main()
{
   ArrayX *aobj1 = new ArrayX(5);  //dynamic object creation

   cout<<"aobj1->iSize\n";
    //LOGIC (ithun asnare function call)

    delete aobj1;
    
    return 0;
}