/*
* math.c
* Author: Jordan Alberico
* Created on: 9/8/18
* Last edited: 9/8/18
*/


#include<math.h>

int main()
{
  //Switches condition based on the input Operator. Returns the result of the selected operation.  
  switch(Operator)
  {
    case '+': return(num1 + num2);
      break;
    case '-': return(num1 - num2);
      break;
    case '*': return(num1 * num2);
      break;
    case '/': return(num1 / num2);
      break;
    case '%': return(num1 % num2);
      break;
    case '<': return(num1 < num2);
      break;
    case '>': return(num1 > num2);
      break;
    case '&': return(num1 & num2);
      break;
    case '|': return(num1 | num2);
      break;
    case '^': return(num1 ^ num2);
      break;
    case '~': return(~num1);
      break;
    default: printf("Invalid Operator");
      break;
  }
 
  return 0;
}
