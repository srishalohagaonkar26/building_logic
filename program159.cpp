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
            cout<<"nside constructor\n";

            iSize = x;  //characterstic initialisation
            Arr = new int[iSize];   //resrource allocation like malloc
        }
        //destructor

        ~ArrayX()
        {
            cout<<"nside destructor\n";
            delete []Arr;   //resource deallocation
        }
};

int main()
{
    //Static memory allocation for object
    //ArrayX aobj1(5);              //static object creation

    ArrayX *aobj1 = new ArrayX(5);  //dynamic object creation
    
    return 0;
}