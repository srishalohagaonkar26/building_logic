#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Time Complexity (N)

bool LinearSearch(int Arr[], int iSize, int iNo) //function prototype
{
    int iCnt = 0;
    int iSum = 0, iCount = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
       if (iCount == 0)
       {
            return false;
       }
       else
       {
        return true;
       }
    }
     
}

int main()
{
    int iLength = 0; int iCnt = 0; int iValue = 0;  //ata user kadun elemnt ghyaych ahe jo serahc krychay so i Value
    int *Brr = NULL; 
    bool bRet = false;
    
    printf("Enter the number of elements : ");
    scanf("%d",&iLength); //atta size user kadun ghetli

    Brr = (int * )malloc(sizeof(int) * iLength);

    printf("enter the elements : \n");

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    printf("Enter the element that you want to search : ");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr , iLength , iValue);
    
    if (bRet == true)
    {
        printf("Element is not present \n");
    }
    else
    {
        printf("Element is present \n");
    }

    return 0;
}