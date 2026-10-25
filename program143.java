import java.util.*;

class program141
{
    public static int Summation(int Arr[])
        {
            int iSum = 0; iCnt = 0;

            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                System.out.println(Arr[iCnt]);
            } 
        }
    public static void main(String[] args) 
    {

        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;
        
        System.out.println("Enter the no.of elements : ");
        int iLength = sobj.nextInt();
        
        int Brr[] = new int[iLength];   //like malloc in C for dynamic memory allocation 

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++);
        {
            Brr[iCnt] = sobj.nextInt();     //just like scanf hyachane array cha data store zhala
        }
        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++);
        {
            System.out.println(Brr[iCnt]);
        }

        int iRet = Summation(Brr);

        System.out.println("Summation is : "+iRet);
        Brr = null;
        System.gc();
    }
}