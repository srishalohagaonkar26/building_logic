#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private :
        int *Arr;
        int iSize;

    public :    
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

    //LOGIC (ithun asnare function call)

    cout<<aobj1->iSize,"\n";    //error

    aobj1->Arr = NULL;      //error
    aobj1->iSize = 0;       //error
    
    delete aobj1;
    
    return 0;
}