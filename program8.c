/*
    step1 : Understand the problem statement
    step2 : write the algorithm 
    step3 : decide the programming language
    step4 : write the program 
    step5 : Test the program 

*/
/////////////////////////////////////////////////////////////////////////////////
//
//  step1 : Understand the problem statement
//          User is going to enter any 2 int 
//          and we have to perform addition 
//
/////////////////////////////////////////////////////////////////////////////////
//  step2 : write the algorithm 
/*
    Start 
         Accept First number No1
          Accept Secound number No2
          create a variable as Ans to store the result 
          perform the addition and store into Ans 
          display the result from Ans 

    End
*/
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
// step3 : decide the programming language
//         we select c programmming
//
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
// step4 : write the program 
//        
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//      
//          Funtion  Name : Addition 
//          Input :         Integer , Integer
//          Output :        Integer
//          Description :   perform Addition 
//          Date :          04/10/2026
//          Author :        Sarthak Babalu Gurav 
//
/////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = 0 ;

    iAns = iNo1 + iNo2;         //business logic

    return iAns;

}
/////////////////////////////////////////////////////////////////////////////////
//
//          Entry Point Of the application
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 , iValue2 , iResult ;

    printf("Enter Frist Number : \n");
    scanf("%d", &iValue1);

    printf("Enter Secound Number : \n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n", iResult);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
//      Step 5 : Test the program
//
//      Tested test Cases
//--------------------------------------------------------------------------------
//      Input 1       Input 2      Output
//--------------------------------------------------------------------------------
//          10             11           21
//          11             00           11
//          0              11           11
//          9             -20           11
//         -9              20           11
//         -9             -20          -29
//////////////////////////////////////////////////////////////////////////////////