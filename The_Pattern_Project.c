/***************************************************************************************
*  @File:  The_Pattern_Project.c
*  @Brief: This project is a menu-driven C program that allows a user 
*          to select from a collection of predefined text-based patterns. 
           Based on the user's numeric input, the program calls a specific function
           to print the corresponding pattern to the console. 
* @Author: Parth Supekar (supekarparth82343@gmail.com).
* @Date:   21/09/2025.
****************************************************************************************/

// Header files
#include <stdio.h>

// Function Declarations
void Pattern01(void);
void Pattern02(void);
void Pattern03(void);
void Pattern04(void);
void Pattern05(void);
void Pattern06(void);
void Pattern07(void);
void Pattern08(void);
void Pattern09(void);
void Pattern10(void);
void Pattern11(void);
void Pattern12(void);
void Pattern13(void);
void Pattern14(void);
void Pattern15(void);
void Pattern16(void);
void Pattern17(void);
void Pattern18(void);
void Pattern19(void);
void Pattern20(void);
void Pattern21(void);
void Pattern22(void);
void Pattern23(void);
void Pattern24(void);
void Pattern25(void);
void Pattern26(void);
void Pattern27(void);
void Pattern28(void);
void Pattern29(void);
void Pattern30(void);
void Pattern31(void);
void Pattern32(void);
void Pattern33(void);
void Pattern34(void);
void Pattern35(void);
void Pattern36(void);
void Pattern37(void);
void Pattern38(void);
void Pattern39(void);
void Pattern40(void);
void Pattern41(void);
void Pattern42(void);
void Pattern43(void);
void Pattern44(void);
void Pattern45(void);
void Pattern46(void);
void Pattern47(void);
void Pattern48(void);
void Pattern49(void);
void Pattern50(void);
void Pattern51(void);
void Pattern52(void);
void Pattern53(void);
void Pattern54(void);
void Pattern55(void);
void Pattern56(void);
void Pattern57(void);
void Pattern58(void);
void Pattern59(void);
void Pattern60(void);
void Pattern61(void);
void Pattern62(void);
void Pattern63(void);
void Pattern64(void);
void Pattern65(void);
void Pattern66(void);
void Pattern67(void);
void Pattern68(void);
void Pattern69(void);
void Pattern70(void);
void Pattern71(void);
void Pattern72(void);
void Pattern73(void);
void Pattern74(void);
void Pattern75(void);
void Pattern76(void);
void Pattern77(void);
void Pattern78(void);
void Pattern79(void);
void Pattern80(void);
void Pattern81(void);
void Pattern82(void);
void Pattern83(void);
void Pattern84(void);
void Pattern85(void);
void Pattern86(void);
void Pattern87(void);
void Pattern88(void);
void Pattern89(void);
void Pattern90(void);
void Pattern91(void);
void Pattern92(void);
void Pattern93(void);
void Pattern94(void);
void Pattern95(void);
void Pattern96(void);
void Pattern97(void);
void Pattern98(void);
void Pattern99(void);
void Pattern100(void);
void Pattern101(void);
void Pattern102(void);
void Pattern103(void);
void Pattern104(void);

/*******************************************************************************************
* @Brief : This is the main entry point of the program.
           It displays a menu to the user in a loop, accepts their choice,
           and calls the corresponding pattern function.
* @Param : void
* @Return: int - Returns 0 upon successful execution.
*******************************************************************************************/

// Entry Point Function
int main (void)
{
	// Code
	printf("Program Execution Started\n");

    // Variable to Store User Input
    int iUserChoice;


    printf("\n============================================================\n");
    printf("\n            Welcome to Pattren Printing Project             \n");
    printf("\n============================================================\n");
    printf("\n               Author : Parth Naresh Supekar                \n");
    printf("\n============================================================\n");


    // Inside an Infinite While Loop to Continuously Prompt From the User.
    while (1)
    {
    	// Taking Choice From User
    	printf("\n Enter Pattern Number: ");
    	scanf("%d", &iUserChoice);

    	if (iUserChoice == 0)
    	{
    		printf("\n Thank You ! \n");
    		break;
    	}

    	// Switch Case to Execute The Selected Pattern
    	switch (iUserChoice)
    	{
    		case 1: 
                Pattern01(); 
                break; 

			case 2:
     			Pattern02();
    			break;

			case 3:
    			Pattern03();
    			break;

			case 4:
    			Pattern04();
   				break;

			case 5:
    			Pattern05();
    			break;

			case 6:
    			Pattern06();
    			break;

			case 7:
   				Pattern07();
   				break;

			case 8:
   				Pattern08();
   				break;

			case 9:
   				Pattern09();
    			break;

			case 10:
   			 	Pattern10();
    			break;

			case 11:
   			    Pattern11();
   				break;

			case 12:
   				Pattern12();
   				break;

			case 13:
  				Pattern13();
    			break;

			case 14:
   				Pattern14();
    			break;

			case 15:
   				Pattern15();
    			break;

			case 16:
  				Pattern16();
    			break;

			case 17:
  			    Pattern17();
  				break;

			case 18:
  			    Pattern18();
    			break;

			case 19:
   				Pattern19();
  				break;

 			case 20:
    			Pattern20();
    			break;

			case 21:
    			Pattern21();
    			break;

			case 22:
    			Pattern22();
    			break;

			case 23:
    			Pattern23();
    			break;

			case 24:
    			Pattern24();
    			break;

			case 25:
    			Pattern25();
    			break;

			case 26:
    			Pattern26();
    			break;

			case 27:
    			Pattern27();
    			break;

			case 28:
    			Pattern28();
    			break;

			case 29:
    			Pattern29();
    			break;

			case 30:
    			Pattern30();
    			break;

			case 31:
    			Pattern31();
    			break;

			case 32:
    			Pattern32();
    			break;

			case 33:
    			Pattern33();
    			break;

			case 34:
    			Pattern34();
    			break;

			case 35:
			    Pattern35();
			    break;

			case 36:
			    Pattern36();
			    break;

			case 37:
			    Pattern37();
			    break;

			case 38:
			    Pattern38();
			    break;

			case 39:
			    Pattern39();
			    break;

			case 40:
			    Pattern40();
			    break;

			case 41:
			    Pattern41();
			    break;

			case 42:
			    Pattern42();
			    break;

			case 43:
			    Pattern43();
			    break;

			case 44:
			    Pattern44();
			    break;

			case 45:
			    Pattern45();
			    break;

			case 46:
			    Pattern46();
			    break;

			case 47:
			    Pattern47();
			    break;

			case 48:
			    Pattern48();
			    break;

			case 49:
			    Pattern49();
			    break;

			case 50:
			    Pattern50();
			    break;

			case 51:
			    Pattern51();
			    break;

			case 52:
			    Pattern52();
			    break;

			case 53:
			    Pattern53();
			    break;

			case 54:
			    Pattern54();
			    break;

			case 55:
			    Pattern55();
			    break;

			case 56:
			    Pattern56();
			    break;

			case 57:
			    Pattern57();
			    break;

			case 58:
			    Pattern58();
			    break;

			case 59:
			    Pattern59();
			    break;

			case 60:
			    Pattern60();
			    break;

			case 61:
			    Pattern61();
			    break;

			case 62:
			    Pattern62();
			    break;

			case 63:
			    Pattern63();
			    break;

			case 64:
			    Pattern64();
			    break;

			case 65:
			    Pattern65();
			    break;

			case 66:
			    Pattern66();
			    break;

			case 67:
			    Pattern67();
			    break;

			case 68:
			    Pattern68();
			    break;

			case 69:
			    Pattern69();
			    break;

			case 70:
			    Pattern70();
			    break;

			case 71:
			    Pattern71();
			    break;

			case 72:
			    Pattern72();
			    break;

			case 73:
			    Pattern73();
			    break;

			case 74:
			    Pattern74();
			    break;

			case 75:
			    Pattern75();
			    break;

			case 76:
			    Pattern76();
			    break;

			case 77:
			    Pattern77();
			    break;

			case 78:
			    Pattern78();
			    break;

			case 79:
			    Pattern79();
			    break;

			case 80:
			    Pattern80();
			    break;

			case 81:
			    Pattern81();
			    break;

			case 82:
			    Pattern82();
			    break;

			case 83:
			    Pattern83();
			    break;

			case 84:
			    Pattern84();
			    break;

			case 85:
			    Pattern85();
			    break;

			case 86:
			    Pattern86();
			    break;

			case 87:
			    Pattern87();
			    break;

			case 88:
			    Pattern88();
			    break;

			case 89:
			    Pattern89();
			    break;

			case 90:
			    Pattern90();
			    break;

			case 91:
			    Pattern91();
			    break;

			case 92:
			    Pattern92();
			    break;

			case 93:
			    Pattern93();
			    break;

			case 94:
			    Pattern94();
			    break;

			case 95:
			    Pattern95();
			    break;

			case 96:
			    Pattern96();
			    break;

			case 97:
			    Pattern97();
			    break;

			case 98:
			    Pattern98();
			    break;

			case 99:
			    Pattern99();
			    break;

			case 100:
			    Pattern100();
			    break;

			case 101:
			    Pattern101();
			    break;

			case 102:
			    Pattern102();
			    break;

			case 103:
			    Pattern103();
			    break;

			case 104:
			    Pattern104();
			    break;

			default: 
				printf("Invalid Number Entered by User\n");
				break;
    	}
    }

    printf("Program Execution Completed\n");

    // Return Success
    return (0);
}


/**
 * @Brief: Implementation of Following Pattern C
 	        *  *  *  *  *
   			*  *  *  *  *
   		 	*  *  *  *  *
   		 	*  *  *  *  *
   		 	*  *  *  *  *
**/
void Pattern01(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
   printf("program execution started\n");

   //outer loop
   for(ole = 0; ole < 5; ++ole)
   {
     	//outer loop body

   	//inner loop
   	for(ile = 0; ile < 5; ++ile)
   	{
   		//inner loop body
   		printf("*  ");
   	}

   	printf("\n");
   }

   printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        A  A  A  A  A
      		B  B  B  B  B
      		C  C  C  C  C
      		D  D  D  D  D
      		E  E  E  E  E
**/
void Pattern02(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintCharacter = 'A';
	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			printf("%c  ", toPrintCharacter );
		}

		toPrintCharacter = toPrintCharacter + 1;
		printf("\n");
	}

	printf("program execution completed\n");

}



/**
 * @Brief: Implementation of Following Pattern C
 	        E  D  C  B  A
         	E  D  C  B  A
         	E  D  C  B  A
         	E  D  C  B  A
         	E  D  C  B  A
**/
void Pattern03(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintChar = 'E';

		//inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			printf("%c  ", toPrintChar);
			toPrintChar = toPrintChar - 1;
			
		}
		printf("\n");
	}

	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	        A  B  C  D  E
         	A  B  C  D  E
         	A  B  C  D  E
         	A  B  C  D  E
         	A  B  C  D  E
**/
void Pattern04(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body
        toPrintChar = 'A';

        //inner loop
        for(ile = 0; ile < 5; ++ile)
        {
            printf("%c  ", toPrintChar);
            toPrintChar = toPrintChar + 1;
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        E  E  E  E  E
	        D  D  D  D  D
	        C  C  C  C  C
	        B  B  B  B  B
	        A  A  A  A  A
**/
void Pattern05(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintCharacter = 'E';

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
        
        //inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			printf("%c  ", toPrintCharacter);
		}
		toPrintCharacter = toPrintCharacter - 1;
		printf("\n");
	}

	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        1  1  1  1  1  
         	2  2  2  2  2
         	3  3  3  3  3
         	4  4  4  4  4
         	5  5  5  5  5
**/
void Pattern06(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			printf("%d  ", toPrintNum);
		}
		toPrintNum = toPrintNum + 1;
		printf("\n");
	}

	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	        5  4  3  2  1
         	5  4  3  2  1 
         	5  4  3  2  1
         	5  4  3  2  1
         	5  4  3  2  1
**/
void Pattern07(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintNum = 5;

		//inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			printf("%d  ", toPrintNum);
            toPrintNum = toPrintNum - 1;
		}
		printf("\n");
	}

	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        1  2  3  4  5
         	1  2  3  4  5
         	1  2  3  4  5
         	1  2  3  4  5
         	1  2  3  4  5
**/
void Pattern08(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintNum = 1;

		//inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			printf("%d  ", toPrintNum);
			toPrintNum = toPrintNum + 1;
		}
		printf("\n");
	}

	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	        5  5  5  5  5
         	4  4  4  4  4
         	3  3  3  3  3
         	2  2  2  2  2
         	1  1  1  1  1
**/
void Pattern09 (void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 5;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			printf("%d  ", toPrintNum);
		}
		toPrintNum = toPrintNum - 1;
		printf("\n");
	}

	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        1  1  1  1  1
         	A  B  C  D  E
         	*  *  *  *  *
         	A  B  C  D  E
         	1  1  1  1  1
**/
void Pattern10(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;
	char toPrintChar;
	char toPrintStar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		if (ole == 0 || ole == 4)
		{
			toPrintNum = 1;
            
			//inner loop
			for(ile = 0; ile < 5; ++ile)
			{
				//inner loop body
				printf("%d  ", toPrintNum);
			}
			
		}

		//outer loop
		else if(ole == 1 || ole == 3)
		{
			//outer loop body
			toPrintChar = 'A';

			//inner loop
			for(ile = 0; ile < 5; ++ile)
			{
				//inner loop body
				printf("%c  ", toPrintChar);
				toPrintChar = toPrintChar + 1;
			}
		}
		else if (ole == 2)
		{
			//outer loop
			toPrintStar = '*';

			//outer loop body

		    //inner loop
		    for(ile = 0; ile < 5; ++ile){

		    	//inner loop body
		    	 printf("%c  ", toPrintStar);
		    }
		}

		printf("\n");
	}

	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        *   _   _   _   _   _
    	 	*   *   _   _   _   _
    	 	*   *   *   _   _   _
    	 	*   *   *   *   _   _
    	 	*   *   *   *   *   _
    	 	*   *   *   *   *   *
**/
void Pattern11(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile <= 5; ++ile)
		{
			//inner loop body
			if(ile <= ole){
				printf("*  ");
			}
			else
			{
				printf("_  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	        *
	 		*	*
	 		*	*	*
	 		*	*	*	*
	 		*	*	*	*	*
	 		*	*	*	*	*	*
**/
void Pattern12(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile <= 5; ++ile)
		{
			//inner loop body
			if(ile <= ole){
				printf("*  ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}

/**
 * @Brief: Implementation of Following Pattern C
 	        1
  		 	1   2
   			1   2   3
  		 	1   2   3   4
   		 	1   2   3   4   5
**/
void Pattern13(void)
{
	 //global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;

    //code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body
		toPrintNum = 1;

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile <= ole){
				printf("%d  ", toPrintNum);
				toPrintNum = toPrintNum + 1;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}

/**
 * @Brief: Implementation of Following Pattern C
 	        1
 	 		2   2
 	 		3   3 	3
 	 		4   4	4	4
 	 		5   5	5	5	5
**/
void Pattern14(void)
{
	//global variable defination
	int ole = 0; 
	int ile = 0;
	int toPrintNum = 1;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile <= ole)
			{
				printf("%d  ", toPrintNum);
			}
			else
			{
				printf("  ");
			}
		}
		toPrintNum = toPrintNum + 1;
		printf("\n");
	}

	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	        A
 		 	B   B
 		 	C   C   C
 		 	D	D   D   D
 		 	E	E   E   E	E
**/
void Pattern15(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile <= ole)
			{
				printf("%c  ", toPrintChar);
			}
			else
			{
				printf("  ");
			}
		}
		toPrintChar = toPrintChar + 1;
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        A
 		 	A  B
 		 	A  B  C
 		 	A  B  C  D
 		 	A  B  C  D	 E
**/
void Pattern16(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body
		toPrintChar = 'A';

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile <= ole)
			{
				printf("%c  ", toPrintChar);
				toPrintChar = toPrintChar + 1;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        *  *  *  *  *  *
         	*  *  *  *  *
         	*  *  *  *
         	*  *  *
         	*  *
         	*
**/
void Pattern17(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintStar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 5; ++ole)
	{
		//outer loop body
		toPrintStar = '*';

		//inner loop
		for(ile = 0; ile <= 5; ++ile)
		{
			//inner loop body
			if(ile < (6 - ole))
			{
				printf("%c  ", toPrintStar);

			}
			else
			{
				printf("  ");
			}
		}

		//move to next line after each row
        printf("\n");
        
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        5  5  5  5  5
         	4  4  4  4
         	3  3  3
         	2  2  
         	1
**/
void Pattern18(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 5;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%d  ", toPrintNum);
			}
			else
			{
				printf("  ");
			}
		}

		//move to next line after each row
        printf("\n");
        
        //decrease number after each row
		toPrintNum = toPrintNum - 1;
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        A  B  C  D  E
         	A  B  C  D
         	A  B  C
         	A  B  
         	A
**/
void Pattern19(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body
		toPrintChar = 'A';

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%c  ", toPrintChar);
                toPrintChar = toPrintChar + 1;
			}
			else
			{
				printf("  ");
			}
		}

		//move to next line after each row
        printf("\n");
        
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        E  D  C  B  A
         	E  D  C  B
         	E  D  C
         	E  D
         	E
**/
void Pattern20(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body
		toPrintChar = 'E';

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%c  ", toPrintChar);

			}
			else
			{
				printf("  ");
			}

			toPrintChar = toPrintChar - 1;
		}

		//move to next line after each row
        printf("\n");
        
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        A  A  A  A  A
         	B  B  B  B
         	C  C  C
         	D  D
         	E
**/
void Pattern21(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%c  ", toPrintChar);

			}
			else
			{
				printf("  ");
			}

		}

		toPrintChar = toPrintChar + 1;

		//move to next line after each row
        printf("\n");
        
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        1  2  3  4  5
         	1  2  3  4
         	1  2  3
         	1  2
         	1
**/
void Pattern22(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body
		toPrintNum = 1;

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%d  ", toPrintNum);
				toPrintNum = toPrintNum + 1;

			}
			else
			{
				printf("  ");
			}
		}

		//move to next line after each row
        printf("\n");
        
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        E  E  E  E  E
         	D  D  D  D
         	C  C  C
         	B  B
         	A
**/
void Pattern23(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'E';

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%c  ", toPrintChar);
			}
			else
			{
				printf("  ");
			}
		}

		toPrintChar = toPrintChar - 1;

		//move to next line after each row
        printf("\n");
        
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        5  4  3  2  1
         	5  4  3  2
         	5  4  3
         	5  4
         	5
**/
void Pattern24(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole <= 4; ++ole)
	{
		//outer loop body
		toPrintNum = 5;

		//inner loop
		for(ile = 0; ile <= 4; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%d  ", toPrintNum);
				toPrintNum = toPrintNum - 1;

			}
			else
			{
				printf("  ");
			}
		}

		//move to next line after each row
        printf("\n");
        
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        \  #  #  #  #
         	$  \  #  #
         	$  $  \
         	$  $
         	$
**/
void Pattern25(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
    printf("program execution started\n");

    //outer loop 
    for(ole = 0; ole <= 4; ++ole)
    {
        //outer loop body 

        //inner loop 
        for(ile = 0; ile <= 4; ++ile)
        {
            //inner loop body
            if(ile < (5 - ole))
            {
                if(ile == ole)
                {
                    printf("\\  ");   // diagonal
                }
                else if(ile < ole)
                {
                    printf("$  ");    // left side
                }
                else
                {
                    printf("#  ");    // right side
                }
            }
            else
            {
                printf("   ");   
            }
        }

        
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        |
          	|  |
          	|  |  /
          	|  /  _  _
          	/  _  _  _  _
**/
void Pattern26(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
    printf("program execution started\n");

    // Outer loop 
    for (ole = 0; ole <= 4; ++ole)
    {
        //outer loop body

        // Inner loop 
        for (ile = 0; ile <= 4; ++ile)
        {
            //inner loop body
            if (ile <= ole)
            {
        
                if (ole + ile == 4)
                {
                    printf("/  ");   
                }
                else if (ole + ile > 4)
                {
                    printf("_  ");   
                }
                else 
                {
                    printf("|  ");  
                }
            }
            else
            {
                printf("   "); 
            }
        }
        printf("\n");
    }

    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	        3
         	2  3
         	1  2  3
         	0  1  2  3
         	1  2  3
         	2  3
         	3
**/
void Pattern27(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int startNum;
	int count;

	 //code
    printf("program execution started\n");

    //outer loop for 7 rows
    for (ole = 0; ole < 7; ++ole)
    {
        //calculate how many numbers in this row
        if (ole <= 3)
        {
            count = ole + 1;          // first 4 rows increasing
            startNum = 3 - ole;       // start from decreasing number
        }
        else
        {
            count = 7 - ole;          // next 3 rows decreasing
            startNum = ole - 3;       // start from increasing number
        }

        //print numbers
        for (ile = 0; ile < count; ++ile)
        {
            printf("%d  ", startNum + ile);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        * 
         	*  *
         	*  *  * 
         	*  *  *  *
         	*  *  *  *  *
         	*  *  *  *
         	*  *  *
         	*  *
         	* 
**/
void Pattern28(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 9; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile < 5; ++ile)
		{
			//inner lop body
			if(ole > 4 && ile < (9 - ole))
			{
				printf("*  ");
			}
			else if(ile <= ole && ole <= 4)
			{
				printf("*  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        3
         	3  2
         	3  2  1
         	3  2  1  0
         	3  2  1
         	3  3
         	3
**/
void Pattern29(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 7; ++ole)
	{
		//outer loop body
		toPrintNum = 3;

		//inner loop
		for(ile = 0; ile < 4; ++ile)
		{
			//inner lop body
			if(ole > 3 && ile < (7 - ole))
			{
				printf("%d  ", toPrintNum);
			}
			else if(ile <= ole && ole <= 3)
			{
				printf("%d  ", toPrintNum);
			}
			toPrintNum = toPrintNum - 1;
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	        1
         	2  1
         	1  2  3
         	4  3  2  1
         	1  2  3  4  5
         	4  3  2  1 
         	1  2  3
         	2  1
         	1
**/
void Pattern30(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int rows = 9;
	int mid;
	int count;

	 //code
    printf("program execution started\n");

    mid = (rows + 1) / 2;   // middle row index (5 for 9 rows)

    //outer loop for rows
    for (ole = 1; ole <= rows; ++ole)
    {
        //calculate how many numbers in this row
        if (ole <= mid)
            count = ole;
        else
            count = 2 * mid - ole;

        //inner loop for numbers
        if (count % 2 == 1)   // odd row -> increasing
        {
            for (ile = 1; ile <= count; ++ile)
                printf("%3d", ile);
        }
        else   // even row -> decreasing
        {
            for (ile = count; ile >= 1; --ile)
                printf("%3d", ile);
        }

        //inner loop for trailing spaces (mirror effect)
        for (ile = 0; ile < (mid - count); ++ile)
            printf("   ");

        printf("\n");
    }

    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	        D
         	C  D
         	B  C  D
         	A  B  C  D
         	B  C  D
         	C  D
        	D
**/
void Pattern31(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int startChar;
	int count;

	//code
    printf("program execution started\n");

    //outer loop for 7 rows
    for (ole = 0; ole < 7; ++ole)
    {
        //calculate how many characters in this row
        if (ole <= 3)
        {
            count = ole + 1;          // first 4 rows increasing
            startChar = 3 - ole;       // start from decreasing
        }
        else
        {
            count = 7 - ole;          // next 3 rows decreasing
            startChar = ole - 3;       // start from increasing
        }

        //print characters
        for (ile = 0; ile < count; ++ile)
        {
            printf("%c  ", 'A' + startChar + ile);
        }

        printf("\n");
    }

    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	              D
               C  D
            B  C  D 
         A  B  C  D
            B  C  D
               C  D
                  D
**/
void Pattern32(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int space;
	char toPrintChar;

	//code
    printf("program execution started\n");

    //outer loop
    for (ole = 0; ole < 7; ++ole)
    {
        //calculate spaces
        if (ole <= 3)
            space = (3 - ole);
        else
            space = (ole - 3);

        //print spaces
        for (ile = 0; ile < space; ++ile)
        {
            printf("   "); // 3 spaces for alignment
        }

        //reset character to print
        if (ole <= 3)
            toPrintChar = 'D' - ole;
        else
            toPrintChar = 'A' + (ole - 3);

        //inner loop for characters
        for (ile = toPrintChar; ile <= 'D'; ++ile)
        {
            printf("%c  ", ile);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	  		      3
      		   3  2
      		3  2  1
  		 3  2  1  0
   		   	3  2  1
    		   3  2
     		      3
**/
void Pattern33(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int space;
	int count;
	int toPrintNum;

	//code
    printf("program execution started\n");

    //outer loop for 7 rows
    for (ole = 0; ole < 7; ++ole)
    {
        //calculate spaces (number of leading slots)
        if (ole <= 3)
            space = 3 - ole;
        else
            space = ole - 3;

        //print leading slots (each slot = 4 spaces to match "%4d")
        for (ile = 0; ile < space; ++ile)
        {
            printf("    "); // 4 spaces
        }

        //calculate how many numbers to print
        if (ole <= 3)
            count = ole + 1;     // top half
        else
            count = 7 - ole;     // bottom half

        //print numbers starting from 3, decreasing, with fixed width
        toPrintNum = 3;
        for (ile = 0; ile < count; ++ile)
        {
            printf("%4d", toPrintNum - ile);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     		    * 
        		 *  *
     		  *  *  * 
   		   *  *  *  * 
		*  *  *  *  * 
   		   *  *  *  *
     	      *  *  *
     		     *  *
       		        * 
**/
void Pattern34(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int spaces = 0;
	int stars = 0;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 9; ++ole)
    {
        //decide number of stars in current row
        if(ole <= 4)
            stars = ole + 1;        //top half
        else
            stars = 9 - ole;        //bottom half

        //calculate spaces before stars
        spaces = 5 - stars;

        //print spaces
        for(ile = 0; ile < spaces; ++ile)
        {
            printf("   "); // 3 spaces for alignment
        }

        //print stars
        for(ile = 0; ile < stars; ++ile)
        {
            printf("*  ");
        }

        printf("\n");
    }

    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	     		    D
         		 D  C
     		  D  C  B
   		   D  C  B  A
    	      D  C  B
     		     D  C
                    D 
**/
void Pattern35(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int space;
	int count;
	char toPrintChar;

	//code
    printf("program execution started\n");

    //outer loop for 7 rows
    for (ole = 0; ole < 7; ++ole)
    {
        //calculate spaces
        if (ole <= 3)
            space = 3 - ole;
        else
            space = ole - 3;

        //print leading slots (fixed width for alignment)
        for (ile = 0; ile < space; ++ile)
        {
            printf("    "); // 4 spaces
        }

        //how many characters to print
        if (ole <= 3)
            count = ole + 1;      // top half
        else
            count = 7 - ole;      // bottom half

        //print characters starting from 'D' downwards
        toPrintChar = 'D';
        for (ile = 0; ile < count; ++ile)
        {
            printf("%4c", toPrintChar - ile);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     		    3
               	 2  3
              1  2  3 
           0  1  2  3
              1  2  3
                 2  3
                    3 
**/
void Pattern36(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum;
	int space;

	//code
    printf("program execution started\n");

    //outer loop
    for (ole = 0; ole < 7; ++ole)
    {
        //calculate spaces
        if (ole <= 3)
            space = (3 - ole);
        else
            space = (ole - 3);

        //print spaces
        for (ile = 0; ile < space; ++ile)
        {
            printf("   "); // 3 spaces for alignment
        }

        //reset number to print
        if (ole <= 3)
            toPrintNum = 3 - ole;
        else
            toPrintNum = ole - 3;

        //inner loop for numbers
        for (ile = toPrintNum; ile <= 3; ++ile)
        {
            printf("%d  ", ile);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     D
         D  C
         D  C  B
         D  C  B  A
         D  C  B
         D  C
         D 
**/
void Pattern37(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 7; ++ole)
	{
		//outer loop body
		toPrintChar = 'D';

		//inner loop
		for(ile = 0; ile < 4; ++ile)
		{
			//inner lop body
			if(ole > 3 && ile < (7 - ole))
			{
				printf("%c  ", toPrintChar);
			}
			else if(ile <= ole && ole <= 3)
			{
				printf("%c  ", toPrintChar);
			}
			toPrintChar = toPrintChar - 1;
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     D
         D  C
         D  C  B
         D  C  B  A
         D  C  B
         D  C
         D
**/
void Pattern38(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 7; ++ole)
	{
		//outer loop body
		toPrintChar = 'D';

		//inner loop
		for(ile = 0; ile < 4; ++ile)
		{
			//inner loop body
			if(ole > 3 && ile < (7 - ole))
			{
				printf("%c  ", toPrintChar);
			}
			else if(ile <= ole && ole <= 3)
			{
				printf("%c  ", toPrintChar);
			}
			toPrintChar = toPrintChar - 1;
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     1  1  1  1  1
         2  2  2  2
         3  3  3
         4  4
         5 
**/
void Pattern39(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for (ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			if(ile < (5 - ole))
			{
				printf("%d  ", toPrintNum);
			}
			else
			{
				printf("  ");
			}
		}
		toPrintNum = toPrintNum + 1;
		printf("\n");
	}
	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	      		1
          	 2  2
   	   	  3  3  3
   	   4  4  4  4
    5  5  5  5  5
**/
void Pattern40(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile < 5; ++ile)
        {
            //inner lop body
            if(ile >= (5 - ole - 1)) 
            {
                printf("%d ", toPrintNum);
            }
            else 
            {
                printf("  ");
            }
        }
        toPrintNum = toPrintNum + 1;
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     A
                  A  B
               A  B  C
            A  B  C  D
         A  B  C  D  E
**/
void Pattern41(void)
{
	//global variable defination
	int ole = 0; 
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintChar = 'A';

		//inner loop
		for (ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			if(ile >= (5 - ole - 1))
			{
				printf("%c ", toPrintChar);
				toPrintChar = toPrintChar + 1;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		1  2  3  4  5
            	   1  2  3  4
                      1  2  3
                         1  2
                            1
**/
void Pattern42(void)
{
	//global variable defination
	int ole = 0; 
	int ile = 0;
	char toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintNum = 1;

		//inner loop
		for (ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			if(ile >= ole)
			{
				printf("%d ", toPrintNum);
				toPrintNum = toPrintNum + 1;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		A
             B  B
   	      C  C  C
       D  D  D  D
    E  E  E  E  E
**/
void Pattern43(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintChar = 'A';

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile < 5; ++ile)
        {
            //inner loop body
            if(ile >= (5 - ole - 1)) 
            {
                printf("%c ", toPrintChar);
            }
            else 
            {
                printf("  ");
            }
        }
        toPrintChar = toPrintChar + 1;
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      	1  2  4  8
         	7  5  1  2
         	4  8  7  5
         	1  2  4  8
**/
void Pattern44(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;

	//sequences
    int seq1[4] = {1, 2, 4, 8};
    int seq2[4] = {7, 5, 1, 2};
    int seq3[4] = {4, 8, 7, 5};

    printf("program execution started\n");

    //outer loop for rows
    for(ole = 0; ole < 4; ++ole)
    {
        //row 1 & 4: seq1
        if(ole == 0 || ole == 3)
        {
            for(ile = 0; ile < 4; ++ile)
                printf("%3d ", seq1[ile]);
        }
        //row 2: seq2
        else if(ole == 1)
        {
            for(ile = 0; ile < 4; ++ile)
                printf("%3d ", seq2[ile]);
        }
        //row 3: seq3
        else if(ole == 2)
        {
            for(ile = 0; ile < 4; ++ile)
                printf("%3d ", seq3[ile]);
        }
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      	A  B  C  D  E
               A  B  C  D
                  A  B  C
                     A  B
                        A
**/
void Pattern45(void)
{
	//global variable defination
	int ole = 0; 
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintChar = 'A';

		//inner loop
		for (ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			if(ile >= ole)
			{
				printf("%c ", toPrintChar);
				toPrintChar = toPrintChar + 1;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     *
                  *  *
               *  *  *
            *  *  *  *
         *  *  *  *  *
**/
void Pattern46(void)
{
	//global variable defination
	int ole = 0; 
	int ile = 0;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for (ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			if(ile >= (5 - ole - 1))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		5  5  5  5  5
            	   4  4  4  4
               	      3  3  3
                         2  2
                    	    1
**/
void Pattern47(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum = 5;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile < 5; ++ile)
        {
            //inner lop body
            if(ile >= ole)
            {
                printf("%d ", toPrintNum);
            }
            else 
            {
                printf("  ");
            }
        }
        toPrintNum = toPrintNum - 1;
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		*  *  *  *  *
                   *  *  *  *
                      *  *  *
                         *  *
                            *
**/
void Pattern48(void)
{
	//global variable defination
	int ole = 0; 
	int ile = 0;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for (ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			if(ile >= ole)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     1
                  1  2
               1  2  3
            1  2  3  4
         1  2  3  4  5
**/
void Pattern49(void)
{
	//global variable defination
	int ole = 0; 
	int ile = 0;
	char toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintNum = 1;

		//inner loop
		for (ile = 0; ile < 5; ++ile)
		{
			//inner loop body
			if(ile >= (5 - ole - 1))
			{
				printf("%d ", toPrintNum);
				toPrintNum = toPrintNum + 1;
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		E  E  E  E  E
            	   D  D  D  D
               	      C  C  C
                	     B  B
                   	        A
**/
void Pattern50(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintChar = 'E';

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile < 5; ++ile)
        {
            //inner lop body
            if(ile >= ole) 
            {
                printf("%c ", toPrintChar);
            }
            else 
            {
                printf("  ");
            }
        }
        toPrintChar = toPrintChar - 1;
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     1
                  3  2  1
               5  4  3  2  1
            7  6  5  4  3  2  1
         9  8  7  6  5  4  3  2  1
**/
void Pattern51(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;
    
     //code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //calculate max number for the current row
        toPrintNum = 2 * ole + 1;

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole)
            {
                printf("%d  ", toPrintNum);
                toPrintNum = toPrintNum - 1; // decrement for descending order
            }
            else
            {
                printf("   "); // print spaces
            }
        }
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     *
                  *  *  *
               *  *  *  *  *
            *  *  *  *  *  *  *
         *  *  *  *  *  *  *  *  *
**/
void Pattern52(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintChar;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //calculate max star for the current row
        toPrintChar = 2 * ole + 1;

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole)
            {
                printf("*  ");  
                toPrintChar = toPrintChar - 1; // decrement for descending order
            }
            else
            {
                printf("   "); // print spaces
            }
        }
        printf("\n");
    }

    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     A
                  B  A  B
               C  B  A  B  C
            D  C  B  A  B  C  D
         E  D  C  B  A  B  C  D  E
**/
void Pattern53(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n");

    //outer loop 
    for (ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for (ile = 0; ile < 4 - ole; ++ile)
        {
            printf("   ");
        }

        //print decreasing part
        for (ile = ole; ile > 0; --ile)
        {
            toPrintChar = 'A' + ile;
            printf("%c  ", toPrintChar);
        }

        //print middle A
        printf("A  ");

        //print increasing part
        for (ile = 1; ile <= ole; ++ile)
        {
            toPrintChar = 'A' + ile;
            printf("%c  ", toPrintChar);
        }

        printf("\n");
    }

    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     A
                  A  B  A
               A  B  C  B  A
            A  B  C  D  C  B  A
         A  B  C  D  E  D  C  B  A
**/
void Pattern54(void)
{
	//global variable definition
	int ole = 0;       
	int ile = 0;       
	char toPrintChar;

	//code
    printf("program execution started\n");

    //outer loop 
    for (ole = 0; ole < 5; ++ole)
    {
        //print spaces
        for (ile = 0; ile < 4 - ole; ++ile)
        {
            printf("   ");
        }

        //print increasing part
        for (ile = 1; ile <= ole + 1; ++ile)
        {
            toPrintChar = 'A' + (ile - 1);
            printf("%c  ", toPrintChar);
        }

        //print decreasing part
        for (ile = ole; ile > 0; --ile)
        {
            toPrintChar = 'A' + (ile - 1);
            printf("%c  ", toPrintChar);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     1
                  1  2  1
               1  2  3  2  1
            1  2  3  4  3  2  1
         1  2  3  4  5  4  3  2  1
**/
void Pattern55(void)
{
	//global variable definition
	int ole = 0;       
	int ile = 0;       
	int toPrintNum; 

	//code
    printf("program execution started\n");

    //outer loop 
    for (ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for (ile = 0; ile < 4 - ole; ++ile)
        {
            //inner loop body
            printf("   ");
        }

        //print increasing part
        for (ile = 1; ile <= ole + 1; ++ile)
        {
            toPrintNum = ile;
            printf("%d  ", toPrintNum);
        }

        //print decreasing part
        for (ile = ole; ile > 0; --ile)
        {
            toPrintNum = ile;
            printf("%d  ", toPrintNum);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     A
                  C  B  A
               E  D  C  B  A
            G  F  E  D  C  B  A
         I  H  G  F  E  D  C  B  A
**/
void Pattern56(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //set starting character for this row
        toPrintChar = 'A' + (2 * ole);

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            if(ile >= 4 - ole && ile <= 4 + ole)
            {
                printf("%c  ", toPrintChar);
                toPrintChar = toPrintChar - 1; // decrement for descending order
            }
            else
            {
                printf("   "); // spaces
            }
        }
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     A     
                  B  B  B
               C  C  C  C  C
            D  D  D  D  D  D  D
         E  E  E  E  E  E  E  E  E
**/
void Pattern57(void)
{
   //global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//iner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= 4 - ole && ile <= 4 + ole)
			{
				printf("%c  ", toPrintChar);
			}
			else{
				printf("   ");
			}
		}
		toPrintChar = toPrintChar + 1;
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     1     
                  3  3  3
               5  5  5  5  5
            7  7  7  7  7  7  7
         9  9  9  9  9  9  9  9  9
**/
void Pattern58(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//iner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= 4 - ole && ile <= 4 + ole)
			{
				printf("%d  ", toPrintNum);
			}
			else{
				printf("   ");
			}
		}
		toPrintNum = toPrintNum + 1;
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      		     1     
                  1  2  3
               1  2  3  4  5
            1  2  3  4  5  6  7
         1  2  3  4  5  6  7  8  9
**/
void Pattern59(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintNum = 1;

		//iner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= 4 - ole && ile <= 4 + ole)
			{
				printf("%d  ", toPrintNum);
				toPrintNum = toPrintNum + 1;
			}
			else{
				printf("   ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     5  5  5  5  5  5  5  5  5
            4  4  4  4  4  4  4
               3  3  3  3  3
                  2  2  2
                     1
**/
void Pattern60(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 5;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//iner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= ole && ile <= 8 - ole)

			{
				printf("%d  ", toPrintNum);
			}
			else{
				printf("   ");
			}
		}
		toPrintNum = toPrintNum - 1;
		printf("\n");
	}
	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	      9  9  9  9  9  9  9  9  9
            7  7  7  7  7  7  7
               5  5  5  5  5
                  3  3  3
                     1
**/
void Pattern61(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 9;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//iner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= ole && ile <= 8 - ole)

			{
				printf("%d  ", toPrintNum);
			}
			else{
				printf("   ");
			}
		}
		toPrintNum = toPrintNum - 2;
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 0
                  1  0  1
               2  1  0  1  2
            3  2  1  0  1  2  3
         4  3  2  1  0  1  2  3  4
**/
void Pattern62(void)
{
	//global variable definition
	int ole = 0;       
	int ile = 0;       
	int toPrintNum;

	//code
    printf("program execution started\n");

    //outer loop 
    for (ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for (ile = 0; ile < 4 - ole; ++ile)
        {
            //inner loop body
            printf("   ");
        }

        //left decreasing numbers 
        for (ile = ole; ile >= 0; --ile)
        {
            toPrintNum = ile;
            printf("%d  ", toPrintNum);
        }

        //right increasing numbers 
        for (ile = 1; ile <= ole; ++ile)
        {
            toPrintNum = ile;
            printf("%d  ", toPrintNum);
        }

        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     			 A
                  C  C  C
               E  E  E  E  E
            G  G  G  G  G  G  G
         I  I  I  I  I  I  I  I  I
**/
void Pattern63(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= 4 - ole && ile <= 4 + ole)
			{
				printf("%c  ", toPrintChar);
			}
			else
			{
				printf("   ");
			}
		}	
		toPrintChar = toPrintChar + 2;
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     A  B  C  D  E  F  G  H  I
            A  B  C  D  E  F  G
               A  B  C  D  E  
                  A  B  C  
                     A
**/
void Pattern64(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintChar = 'A';

		//inner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= ole && ile < 9 - ole)
			{
				printf("%c  ", toPrintChar);
				toPrintChar = toPrintChar + 1;
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     1  2  3  4  5  6  7  8  9
            1  2  3  4  5  6  7 
               1  2  3  4  5
                  1  2  3
                     1
**/
void Pattern65(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintNum = 1;

		//inner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= ole && ile < 9 - ole)
			{
				printf("%d  ", toPrintNum);
				toPrintNum = toPrintNum + 1;
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     E  E  E  E  E  E  E  E  E
            D  D  D  D  D  D  D
               C  C  C  C  C
                  B  B  B
                     A
**/
void Pattern66(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'E';

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile < 9 - ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar - 1;
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     *  *  *  *  *  *  *  *  *
            *  *  *  *  *  *  *
               *  *  *  *  *
                  *  *  *
                     *
**/
void Pattern67(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= ole && ile < 9 - ole)
			{
				printf("*  ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	                 A
                  C  C  C
               E  E  E  E  E
            G  G  G  G  G  G  G
         I  I  I  I  I  I  I  I  I
**/
void Pattern68(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body

		//inner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= 4 - ole && ile <= 4 + ole)
			{
				printf("%d  ", toPrintNum);
			}
			else
			{
				printf("   ");
			}
		}	
		toPrintNum = toPrintNum + 1;
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 A
                  A  B  C
               A  B  C  D  E
            A  B  C  D  E  F  G
         A  B  C  D  E  F  G  H  I
**/
void Pattern69(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
	printf("program execution started\n");

	//outer loop
	for(ole = 0; ole < 5; ++ole)
	{
		//outer loop body
		toPrintChar = 'A';

		//inner loop
		for(ile = 0; ile < 9; ++ile)
		{
			//inner loop body
			if(ile >= 4 - ole && ile <= 4 + ole)
			{
				printf("%c  ", toPrintChar);
				toPrintChar = toPrintChar + 1;
			}
			else
			{
				printf("   ");
			}
		}	
		printf("\n");
	}
	printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     I  I  I  I  I  I  I  I  I
            G  G  G  G  G  G  G
               E  E  E  E  E
                  C  C  C
                     A
**/
void Pattern70(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'I';

	 //code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile < 9 - ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar - 2;
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     *               *
           *           *
             *       *
               *   *
                 *
**/
void Pattern71(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0; 

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
        //outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
            //inner loop body
            if(ile == ole || ile == (2 * 5 - 2) - ole)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }  
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	             5
               4   4
             3       3
           2           2  
         1                1
**/
void Pattern72(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 5; 

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
    	//outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
        	//inner  loop body
            if(ile == 5 - 1 - ole || ile == 5 - 1 + ole)
            {
                printf("%d ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        toPrintNum = toPrintNum - 1;   
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	             E
               D   D
             C       C
           B           B  
         A                A
**/
void Pattern73(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'E'; 

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
    	//outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
        	//inner  loop body
            if(ile == 5 - 1 - ole || ile == 5 - 1 + ole)
            {
                printf("%c ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        toPrintChar = toPrintChar - 1;   
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     1               1
           2           2
             3       3
               4   4
                 5
**/
void Pattern74(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0; 
	int toPrintNum = 1;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
        //outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
            //inner loop body
            if(ile == ole || ile == (2 * 5 - 2) - ole)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }  
        printf("\n");
        toPrintNum = toPrintNum + 1;
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	             1
               2   2
             3       3
           4           4  
         5               5
**/
void Pattern75(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
    	//outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
        	//inner  loop body
            if(ile == 5 - 1 - ole || ile == 5 - 1 + ole)
            {
                printf("%d ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        toPrintNum = toPrintNum + 1;   
        printf("\n");
    }

    printf("program execution completed\n");  

}


/**
 * @Brief: Implementation of Following Pattern C
 	             A
               B   B
             C       C
           D           D  
         E               E
**/
void Pattern76(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
    	//outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
        	//inner  loop body
            if(ile == 5 - 1 - ole || ile == 5 - 1 + ole)
            {
                printf("%c ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        toPrintChar = toPrintChar + 1;   
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     A               A
           B           B
             C       C
               D   D
                 E
**/
void Pattern77(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0; 
	char toPrintChar = 'A';

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
        //outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
            //inner loop body
            if(ile == ole || ile == (2 * 5 - 2) - ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }  
        printf("\n");
        toPrintChar = toPrintChar + 1;
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	             *
               *   *
             *       *
           *           *  
         *               *
**/
void Pattern78(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	 //code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
    	//outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
        	//inner  loop body
            if(ile == 5 - 1 - ole || ile == 5 - 1 + ole)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }  
        printf("\n");
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     5               5
           4           4
             3       3
               2   2
                 1
**/
void Pattern79(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0; 
	int toPrintNum = 5; 

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
        //outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
            //inner loop body
            if(ile == ole || ile == (2 * 5 - 2) - ole)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }  
        printf("\n");
        toPrintNum = toPrintNum - 1;
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     E               E
           D           D
             C       C
               B   B
                 A
**/
void Pattern80(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0; 
	char toPrintChar = 'E';

	//code
    printf("program execution started\n");

    //outer loop
    for(ole = 0; ole < 5; ++ole)   
    {
        //outer loop body 

        //inner loop
        for(ile = 0; ile < 2 * 5 - 1; ++ile)
        {
            //inner loop body
            if(ile == ole || ile == (2 * 5 - 2) - ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }  
        printf("\n");
        toPrintChar = toPrintChar - 1;
    }

    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 A 
                  B     B
               C           C
            D                 D   
         E                       E
            D                 D
               C           C
                  B     B
                     A 
**/
void Pattern81(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
    printf("program execution started\n\n");
    
    //outer loop: upper half
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar + 1;    
    }

    //adjust character for lower half
    toPrintChar = toPrintChar - 2;

    //outer loop: lower half
    for(ole = 3; ole >= 0; --ole)
    {
    	//outer loop body

    	//inner loop 
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar - 1;    
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 1 
                  2     2
               3           3
            4                 4   
         5                       5
            4                 4
               3           3
                  2     2
                     1 
**/
void Pattern82(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
    printf("program execution started\n\n");
    
    //outer loop: upper half
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintNum = toPrintNum + 1;    
    }

    //adjust Numbers for lower half
    toPrintNum = toPrintNum - 2;

    //outer loop: lower half
    for(ole = 3; ole >= 0; --ole)
    {
    	//outer loop body

    	//inner loop 
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintNum = toPrintNum - 1;    
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 E 
                  D     D
               C           C
            B                 B   
         A                       A
            B                 B
               C           C
                  D     D
                     E 
**/
void Pattern83(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'E';

	//code
    printf("program execution started\n\n");
    
    //outer loop: upper half
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar - 1;    
    }

    //adjust character for lower half
    toPrintChar = toPrintChar + 2;

    //outer loop: lower half
    for(ole = 3; ole >= 0; --ole)
    {
    	//outer loop body

    	//inner loop 
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar + 1;    
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 5 
                  4     4
               3           3
            2                 2   
         1                       1
            2                 2
               3           3
                  4     4
                     5 
**/
void Pattern84(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum = 5;

	//code
    printf("program execution started\n\n");
    
    //outer loop: upper half
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintNum = toPrintNum - 1;    
    }

    //adjust Numbers for lower half
    toPrintNum = toPrintNum + 2;

    //outer loop: lower half
    for(ole = 3; ole >= 0; --ole)
    {
    	//outer loop body

    	//inner loop 
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintNum = toPrintNum + 1;    
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 * 
                  *     *
               *           *
            *                 *   
         *                       *
            *                 *
               *           *
                  *     *
                     * 
**/
void Pattern85(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;

	//code
    printf("program execution started\n\n");
    
    //outer loop: upper half
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                printf("*  ");         
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");    
    }

    //outer loop: lower half
    for(ole = 3; ole >= 0; --ole)
    {
    	//outer loop body

    	//inner loop 
        for(ile = 0; ile < 9; ++ile)
        {
        	//inner loop body
            if(ile == 4 - ole || ile == 4 + ole)
            {
                 printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");  
    }

    printf("\nprogram execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	                        1                                  
       			       2        2                             
      			   3        3        3                        
  		     4        4        4        4                   
		5        5        5        5        5 
**/
void Pattern86(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && ile % 2 == (4 - ole) % 2)
            {
                printf("%d    ", toPrintNum);  
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");
        toPrintNum = toPrintNum + 1;    
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	      E        E        E        E        E              
               D        D        D        D                   
                   C        C        C                        
                       B        B                             
                           A 
**/
void Pattern87(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'E';

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile <= 8 - ole && ile % 2 == ole % 2)
            {
                printf("%c    ", toPrintChar);
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");
        toPrintChar = toPrintChar - 1;  
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	       *        *        *        *        *              
               *        *        *        *                   
                   *        *        *                        
                       *        *                             
                           * 
**/ 
void Pattern88(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile <= 8 - ole && ile % 2 == ole % 2)
            {
                printf("*    "); 
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");  
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                       1                                  
       			       1        2                             
      			   1        2        3                        
  		     1        2        3        4                   
		1        2        3        4        5
**/
void Pattern89(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body
        toPrintNum = 1;

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && ile % 2 == (4 - ole) % 2)
            {
                printf("%d    ", toPrintNum);  
                toPrintNum = toPrintNum + 1;  
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");  
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	       E        D        C        B        A             
               D        C        B        A                    
                   C        B        A                         
                       B        A                              
                           A 
**/         
void Pattern90(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body
        toPrintChar = 'E' - ole;   // start from rightmost char for that row

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile <= 8 - ole && ile % 2 == ole % 2)
            {
                printf("%c    ", toPrintChar);
                toPrintChar = toPrintChar - 1;
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");  
    }
    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	      A        B        C        D        E            
               A        B        C        D                   
                   A        B        C                        
                       A        B                             
                           A  
**/
void Pattern91(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body
        toPrintChar = 'A';

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile <= 8 - ole && ile % 2 == ole % 2)
            {
                printf("%c    ", toPrintChar);
                toPrintChar = toPrintChar + 1;
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");  
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                        *                                  
       			       *        *                             
      			   *        *        *                        
  		     *        *        *        *                   
		*        *        *        *        *  
**/
void Pattern92(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && ile % 2 == (4 - ole) % 2)
            {
                printf("*    "); 
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");  
    }
    printf("program execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	       5        5        5        5        5         
               4        4        4        4                   
                   3        3        3                        
                       2        2                             
                           1 
**/
void Pattern93(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	int toPrintNum = 5;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile <= 8 - ole && ile % 2 == ole % 2)
            {
                printf("%d    ", toPrintNum);
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");
        toPrintNum = toPrintNum - 1;  
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	       5        4        3        2        1             
               4        3        2        1                    
                   3        2        1                         
                       2        1                              
                           1
**/
void Pattern94(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
        //outer loop body
        toPrintNum = 5 - ole;   // fixed: assign to toPrintNum

        //inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= ole && ile <= 8 - ole && ile % 2 == ole % 2)
            {
                printf("%d    ", toPrintNum);
                toPrintNum = toPrintNum - 1;
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");  
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                        A                                  
       			       B        B                             
      			   C        C        C                        
  		     D        D        D        D                   
		E        E        E        E        E
**/
void Pattern95(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && ile % 2 == (4 - ole) % 2)
            {
                printf("%c    ", toPrintChar);  
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");
        toPrintChar = toPrintChar + 1;    
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                        A                                  
       			       A        B                             
      			   A        B        C                        
  		     A        B        C        D                   
		A        B        C        D        E     
**/
void Pattern96(void)
{
	//global variable defination
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n");
    
    //outer loop
    for(ole = 0; ole < 5; ++ole)
    {
    	//outer loop body
        toPrintChar = 'A';

    	//inner loop
        for(ile = 0; ile < 9; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && ile % 2 == (4 - ole) % 2)
            {
                printf("%c    ", toPrintChar);
                toPrintChar = toPrintChar + 1;   
            }
            else
            {
                printf("    "); 
            }
        }
        printf("\n");   
    }
    printf("program execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 * 
                  *     *
               *     *     *
            *     *     *     *   
               *     *     *
                  *     *
                     * 
**/
void Pattern97(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;

	//code
    printf("program execution started\n\n");
    
    //outer loop: upper half
    for(ole = 0; ole < 4; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");    
    }

    //outer loop: lower half
    for(ole = 2; ole >= 0; --ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");   
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 A 
                  B     B
               C     C     C
            D     D     D     D   
               C     C     C
                  B     B
                     A  
**/
void Pattern98(void)
{
   //global variable definition
	int ole = 0;
	int ile = 0;
	char toPrintChar = 'A';

	//code
    printf("program execution started\n\n");
    
    //outer loop: upper half
    for(ole = 0; ole < 4; ++ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar + 1;    
    }

    //adjust character for lower half
    toPrintChar = toPrintChar - 2;

    //outer loop: lower half
    for(ole = 2; ole >= 0; --ole)
    {
        //outer loop body

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%c  ", toPrintChar);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintChar = toPrintChar - 1;    
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	       			 1 
                  1     2
               1     2     3
            1     2     3     4   
               2     3     4
                  3     4
                     4 
**/
void Pattern99(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
    printf("program execution started\n\n");
    
    //outer loop: Upper Half
    for(ole = 0; ole < 4; ++ole)
    {
    	//outer loop body
        toPrintNum = 1; 

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
        	//inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%d  ", toPrintNum);
                toPrintNum = toPrintNum + 1;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    //outer loop: lower half
    for(ole = 2; ole >= 0; --ole)
    {
    	//outer loop body
        toPrintNum = 4 - ole; 

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
        	//inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%d  ", toPrintNum);
                toPrintNum = toPrintNum + 1;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 1 
                  2     2
               3     3     3
            4     4     4     4   
               3     3     3
                  2     2
                     1 
**/
void Pattern100(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum = 1;

	//code
    printf("program execution started\n\n");
    
    //outer loop: Upper Half
    for(ole = 0; ole < 4; ++ole)
    {
        //outer loop body 

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        toPrintNum = toPrintNum + 1;
    }

    //outer loop: lower half
    for(ole = 2; ole >= 0; --ole)
    {
        //outer loop body
        toPrintNum = ole + 1;  

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%d  ", toPrintNum);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 A 
                  A     B
               A     B     C
            A     B     C     D   
               B     C     D
                  C     D
                     D 
**/
void Pattern101(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n\n");
    
    //outer loop: Upper Half
    for(ole = 0; ole < 4; ++ole)
    {
        //outer loop body
        toPrintChar = 'A';

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%c  ", toPrintChar);
                toPrintChar = toPrintChar + 1;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    //outer loop: lower half
    for(ole = 2; ole >= 0; --ole)
    {
        //outer loop body
        toPrintChar = 'A' + (4 - ole - 1); 

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%c  ", toPrintChar);
                toPrintChar = toPrintChar + 1;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	     A  B  C  D  E  F  G  F  E  D  C  B  A
         A  B  C  D  E  F     F  E  D  C  B  A
         A  B  C  D  E           E  D  C  B  A
         A  B  C  D                 D  C  B  A
         A  B  C                       C  B  A
         A  B                             B  A
         A                                   A
**/
void Pattern102(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	char toPrintChar;

	//code
    printf("program execution started\n");

    int n = 7; 

    //outer loop
    for(ole = 0; ole < n; ++ole)
    {
        //outer loop body

        //left letters
        for(toPrintChar = 'A'; toPrintChar <= 'A' + n - ole - 1; ++toPrintChar)
        {
            printf("%c  ", toPrintChar);
        }

        //spaces in middle
        if(ole != 0) 
        {
            for(ile = 0; ile < 2 * ole - 1; ++ile)
            {
                printf("   ");
            }
        }

        //right letters
        if(ole != 0)
        {
            
            for(toPrintChar = 'A' + n - ole - 1; toPrintChar >= 'A'; --toPrintChar)
            {
                printf("%c  ", toPrintChar);
            }
        }
        else 
        {
           
            for(toPrintChar = 'A' + n - 2; toPrintChar >= 'A'; --toPrintChar)
            {
                printf("%c  ", toPrintChar);
            }
        }

        printf("\n");
    }

    printf("\nprogram execution completed\n");
}


/**
 * @Brief: Implementation of Following Pattern C
 	                 1 
                  1     2
               1     2     3
            1     2     3     4   
               1     2     3
                  1     2
                     1  
**/
void Pattern103(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;
	int toPrintNum;

	//code
    printf("program execution started\n\n");
    
    //outer loop: Upper Half
    for(ole = 0; ole < 4; ++ole)
    {
        //outer loop body
        toPrintNum = 1; 

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%d  ", toPrintNum);
                toPrintNum = toPrintNum + 1;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    //outer loop: lower half
    for(ole = 2; ole >= 0; --ole)
    {
        //outer loop body
        toPrintNum = 1;  // <-- always restart from 1

        //inner loop
        for(ile = 0; ile <= 8; ++ile)
        {
            //inner loop body
            if(ile >= 4 - ole && ile <= 4 + ole && (ile - (4 - ole)) % 2 == 0)
            {
                printf("%d  ", toPrintNum);
                toPrintNum = toPrintNum + 1;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nprogram execution completed\n");

}


/**
 * @Brief: Implementation of Following Pattern C
 	     *  *  *  *  *  *  *  *  *  
         *  *  *  *     *  *  *  *
         *  *  *           *  *  *
         *  *                 *  *
         *                       *
**/
void Pattern104(void)
{
	//global variable definition
	int ole = 0;
	int ile = 0;

	//code
    printf("program execution started\n\n");

    int n = 5; // number of rows

    //outer loop 
    for(ole = 0; ole < n; ++ole)
    {
        //outer loop body

        //inner loop 
        for(ile = 0; ile < (2 * n - 1); ++ile)
        {
            //inner loop body
            if (ile < (n - ole) || ile >= (n - 1 + ole))
            {
                printf("*  ");
            }
            else
            {
                printf("   "); 
            }
        }
        printf("\n");
    }

    printf("\nprogram execution completed\n");
}