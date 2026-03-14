//to convert infix to prefix, we need to follow the below steps-
// 1. initially reverse the string
// 2. in the reversed string, replace '(' to ')' and vice-versa
// 3. infix to postfix conversion (in controlled condition) - the only difference is:
//         else {
//             if (isOperator(char_stack.top())) {
//                 if (infix[i] == '^') {
//                     while (getPriority(infix[i]) <= getPriority(char_stack.top())) {
//                         output += char_stack.top();
//                         char_stack.pop();
//                     }
//                 } else {
//                     while (getPriority(infix[i]) < getPriority(char_stack.top())) {
//                         output += char_stack.top();
//                         char_stack.pop();
//                     }
//                 }
//                 // Push current operator on stack
//                 char_stack.push(infix[i]);
//             }
//         }
// 4. again reverse the resultant string

//time complexity: O(3N); space complexity: O(N)