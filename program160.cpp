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
            cout<<"inside constructor\n";

            iSize = x;  //characterstic initialisation
            Arr = new int[iSize];   //resrource allocation like malloc
        }
        //destructor

        ~ArrayX()
        {
            cout<<"inside destructor\n";
            delete []Arr;   //resource deallocation
        }
};

int main()
{
    //Static memory allocation for object
    //ArrayX aobj1(5);              //static object creation

    ArrayX *aobj1 = new ArrayX(5);  //dynamic object creation

    delete aobj1;
    cout<<"End of main \n";
    
    return 0;
}