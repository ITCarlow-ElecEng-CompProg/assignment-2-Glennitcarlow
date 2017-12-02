 /*
    Glenn Ahearne
    06/11/17
    Exercise 2
    Factorial Calculator
  */

#include <iostream>

using namespace std;

/**Function declarations*/
int main()
{
    /**Variable declarations*/
    int n,x;
    double fact, fact2;

    /**Assigning values to variable*/
    fact = 1;
    n = 0;

    /**title*/
        cout<<"\n\t\tFactorial Calculator\n\n";

    /**while loop to ensure value is great than zero*/
    while (n<=0)

    {
        /**Read out Instruction to user*/
        cout<<"Enter Value Greater than Zero :\t";

        /**Read in value for N*/
        cin >> n;
    }

        /**New Line*/
        cout<<"\n\n\n"<<endl;

    /**For Loop for factorial calculation*/
    for (x=n; x>0; x--)

    {
        fact = fact * x;
    }

    /**Read out For Loop Result*/
    cout << "Factorial For Loop Result :\t" << fact <<endl;

    /**Assigning value to variable*/
    fact2 = 1;

            cout<<"\n\n\n"<<endl;

        /**While Loop for factorial 2*/
        while (n>0)

    {
        fact2 = fact2 * n;

        n--;
    }

    /**Read out result to user*/
    cout<<"Factorial While Loop Result :\t" << fact2 <<endl;

    return 0;
}
