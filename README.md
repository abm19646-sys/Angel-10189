Problem : First Count number of digits using a loop.Then extract digits again.For each digit calculate digit^count using a loop.Add result and compare with original number.
How to approach the problem :
1. Firstly we take a number input from the user .
2. Then we count number of digits in the given number using a loop.
3. We will store the original number in a temporary variable.
4. After that ,each digit of the number is extracted one by one.
5. We will calculate the power based on the total number of digits using a loop ,for every extracted digit.
6. The result of each power calculation is added to a sum variable .
7. Once all digits are processed ,the calculated sum is compared with the original number . IF both the values are equal ,then the number will be Armstrong number , otherwise : not an Armstrong number.

   Detailed walkthrough :
   The program starts by taking an integer number from the user. To check whether the number is an Armstrong number ,the first task is to find total number of digits in a number ,using a loop
   by dividing  the number by 10 repeatedly until it becomes zero.After counting the digits ,the loop again processes the original number.Each digit is extracted using modulo operator .
   For every digit,its power is calculated by multiplication of the digit by itself as many times as the total digit count .

         All the calculated values are added together .Then the sum is compared with the original number . if the sum matches the original value , the number is declared an Armstrong number ,
   otherwise ,it is not an Armstrong number.
    Example :
        Input : 153
        Output : 153 is an Armstrong number
