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
    ArrayX aobj1(5);
    
    return 0;
}