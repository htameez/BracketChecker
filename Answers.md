# Assignment 3: Answers

**Complete this document, commit your changes to Github and submit the repository URL to Canvas.** Keep your answers short and precise.

Your Name: Hamna Tameez

Used free extension: [ ] 24 hrs or [x] 48 hrs

[ ] Early submission (48 hrs)

[x] Bonus work. Describe: Took into account single line comments

Place [x] for what applies.


## Answers
1. How long did the program take to check all three test files with each version?  Describe what differences in run time you expect for your implementation (use Big-O notation).

   > 13604 milliseconds for the array implementation and 27798 for the list implementation. Because the good file has no errors, it never has to push to or pop from the stack, so its run time and complexity will be less. However, because the difficult and bad files have errors, the run time is longer. Also, because the array pops and pushes elements faster than a list, usually with O(1) time complexity, then its run time will be less overall. However, lists pop and push elements slower due to the need to traverse the list to find the last element which needs to be popped. So, it will have a time complexity of O(n).

2. Discuss the difference in memory usage based on **your** implementation.

   > In my implementation, linked lists use more memory as they must allocate a new node in memory for each element pushed onto the stack. This is especially seen in the push_back() and push_front() functions in DSList and its usage of the new keyword. The array uses less memory because it does not need to allocate more memory for a new element (seen in lack of new keyword anywhere).

3. Which version would you use in practice. Why?

   > The array version because it can be easily manipulated (operator[]) and runs faster compared to a list.

4. Make sure that your stack implementations does not have memory leaks.
   
   No memory leaks.

   ```
   Paste the output of valgrind for running your tests for `DSStack_array` and `DSStack_list` here. 

   DSStack_array:
   ==36087== 
   ==36087== HEAP SUMMARY:
   ==36087==     in use at exit: 0 bytes in 0 blocks
   ==36087==   total heap usage: 22 allocs, 22 frees, 99,893 bytes allocated
   ==36087== 
   ==36087== All heap blocks were freed -- no leaks are possible
   ==36087== 
   ==36087== For lists of detected and suppressed errors, rerun with: -s
   ==36087== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

   DSStack_list:
   ==35950== 
   ==35950== HEAP SUMMARY:
   ==35950==     in use at exit: 0 bytes in 0 blocks
   ==35950==   total heap usage: 626 allocs, 626 frees, 109,383 bytes allocated
   ==35950== 
   ==35950== All heap blocks were freed -- no leaks are possible
   ==35950== 
   ==35950== For lists of detected and suppressed errors, rerun with: -s
   ==35950== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

5. Did you attempt any bonuses? If so, please give a brief description of what you did.

   > Yes, I ignored single-line comments while reading in the file, so as to attain a better accuracy for the algorithm.
