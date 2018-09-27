/*
 * Name: Dalton Melville
 * NetID: Drm143.
 * Date: 9/23/18
 *
 * Function Main: Create a stack and implement the features from myStack.h to create a mini
 * post fix calculator.
 */

#include <iostream>
#include <string>
#include "myStack.h"
#include <stdio.h>
#include <ctype.h>
#include <climits>


using namespace std;

int main()
{

  std::cout<<"***************************************************************** "<<std::endl;
  std::cout<<"*************** postfix mini calculator ************************* "<<std::endl;
  std::cout<<"***************************************************************** "<<std::endl;


	//Todo: Create your stack
    myStack<int> s;


	char inputItem;

	bool flag=true;
	while(true)
	{
        std::cout<<"Enter your input items. Then enter 'c' at the end of your input line!"<<std::endl;
        std::cout<<"Enter 'H' to halt the program at any time!"<<std::endl;

        while(flag)
        {
                std::cin>>inputItem;

                if(inputItem=='H')
                {
                    std::cout<<"***************************************************************** "<<std::endl;
                    std::cout<<"***************************************************************** "<<std::endl;
                    std::cout<<"***************************************************************** "<<std::endl;
                    return 0;
                }

                else if(inputItem=='c')
                {
                    //Todo:
                    //1) Check if the input line is in the correct format.
                    //2) If true, compute the results based on the algorithm and print for the user.
                    //3) Otherwise, print a meaningful error message and pop all items of the stack.
                    int answer;
                    answer = s.pop();
                    std::cout << "Answer is: " << answer << std::endl;
                    flag=false;
                }


                else if(isspace(inputItem))
                {
                                continue;
                }

                else if((inputItem=='+')||(inputItem=='/')||(inputItem=='-')||(inputItem=='*'))

                {
                    int x = 0;
                    //int first, second;
//                    first_Stack.push(first);
//                    first_Stack.push(second);

                    int first = 0;
                    int second = 0;
                    second = s.pop();
                    first = s.pop();


                        //Follow the steps mentioned in the algorithm for operators.
                        switch(inputItem) {
                            case '+':
                                x = first + second;
                                s.push(x);
                                break;

                            case '/':
                                x = second / first;
                                s.push(x);
                                break;


                            case '-':
                                x = second - first;
                                s.push(x);
                                break;


                            case '*':
                                x = second * first;
                                s.push(x);
                                break;
                        }


                }

                else
                {

                    int num = inputItem - '0';
                    if((num >= 0)&&(num <= 9))
                    {
                        //Follow the steps mentioned in the algorithm for integer values.
                        s.push(num);
                    }
                    else
                    {
                            std::cout<<"Invalid input line!!!"<<std::endl;
                            flag=false;
                            //Pop all input items
                            while ((getchar() != '\n'));

                    }
                }

            }
        flag=true;

        }
}

