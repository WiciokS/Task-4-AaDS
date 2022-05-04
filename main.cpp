#include <iostream>

using namespace std;

//Factorial function
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

//Factorial activate
void fact()
{
  //n= factorial number
  int n=5, result;

    cout << "Your number : " << n << endl;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result << endl;
}

//  Fibonacci function
int fib(int n){
    if (n <= 1){
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

//Fibo activate
void fibo()
{
  int a=10;
  cout << "Entered number : " << a << endl;
  cout << "Fibonacci of : " << a << " = ";
  for(int i = 0; i < a ; i++) cout << fib(i) << " ";
  cout << endl;
}

int main() 
{
  cout << "Okey, What Is Recursion?\n\n Recursion is a method that calls itself directly or indirectly until a suitable condition is met.\n In this method, we repeatedly call the function within the same function, and it has a base case and a recursive condition.\n\nEx: 5! = 5*4*3*2*1\n";
  fact();
    cout << "\nFactorial is usually used in math and also in-game dev there are situations then using this function, for example, to find out how many possible combinations exist between certain quantities, so is really very helpful"<<endl;
    cout << "\nSecond example is a Fibonacci function, In the Fibonacci, each number is the sum of its previous two numbers."<<endl;
  fibo();
  cout << "\n Example of using Fibonacci in game dev is character leveling when you calculate needed experience to next level using a Fibonacci function or to increasing HP/DMG of enemies. Looking at this function, in my opinion, is one of the most helpful functions, really.";
  cout << "\n\nSo I hope this information was helpful and maybe you will use it in future)))";
}
