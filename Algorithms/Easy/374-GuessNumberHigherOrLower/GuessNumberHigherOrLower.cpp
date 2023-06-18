/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       long begin = 1, end = n;
       while (true)
       {
           const long middle = (begin + end) / 2;
           const int predict = guess(middle);
           if (predict == 1) {
               begin = middle + 1;
           }
           else if (predict == -1)   {
               end = middle - 1;
           }
           else {
            return middle;
           }
       }
    }  
};