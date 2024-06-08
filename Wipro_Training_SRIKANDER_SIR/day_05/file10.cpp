/******************************************************************************
Input: 
Infix : a + b * c  :   a b + 

Stack : +*
Output
Suffix : abc*+ 

*******************************************************************************/
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string infix = "a*b+c";
    string suffix = "";
    stack<char> stk;
    for(char c : infix)
    {
        if(isalpha(c))
        {
            suffix.push_back(c);
        }
        else
        {
            if(stk.empty() == true)
            stk.push(c);
            else
            {
            	//if the stack is not empty and try to insert
            	// + and - then pop the top from stack and then insert this element
            	
            	if(c == '+' || c == '-')
            	{
            		suffix.push_back(stk.top());
            		stk.pop();
            		stk.push(c);
            	}
            	// * and / then and top of the stack is also * and / pop and insert
            	// * and / and top of stack is + and - insert
            }
         }
    }
    while(stk.empty() == false)
    {
        suffix.push_back(stk.top());
        stk.pop();
    }
    cout << suffix;
    return 0;
}

