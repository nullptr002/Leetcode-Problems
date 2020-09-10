#include <vector>
#include <iostream>
#include <stdio.h> 

using namespace std;

class Solution {
public:
  int execute() {
    for (int i = 1; i <= 100; i++) { 
        if (i % 15 == 0)         
            printf ("FizzBuzz\t");     
        else if (i % 3 == 0)     
            printf("Fizz\t");                  
        else if (i % 5 == 0)    
            printf("Buzz\t");                             
        else         
            printf("%d\t", i);
    } 
     return 0;
  }
};

int main() {
  Solution fizzBuzz;

  fizzBuzz.execute();

  return 0;
}
