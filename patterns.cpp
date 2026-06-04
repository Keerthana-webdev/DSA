#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n = 5;

    // Problem 1 - Square Pattern
    cout << "\nProblem 1 - Square Pattern\n";
    for(i=1; i<=n; i++) //outer loop for rows
    {
        for(j=1; j<=n; j++) //inner loop for columns
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 2 - Number Square Pattern
    cout << "\nProblem 2 - Number Square Pattern\n";
    for(i=1; i<=n; i++) //outer loop for rows
    {
        for(j=1; j<=n; j++) //inner loop for columns
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Problem 3 - Alphabet Square Pattern
    cout << "\nProblem 3 - Alphabet Square Pattern\n";
    for(i=1; i<=n; i++) //outer loop for rows
    {
        for(char ch='A'; ch<'A'+n; ch++) //inner loop for columns
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    // Problem 4 - Right Triangle Star Pattern
    cout << "\nProblem 4 - Right Triangle Star Pattern\n";
    for(i=1; i<=n; i++) //outer loop for rows
    {
        for(j=1; j<=i; j++) //inner loop for columns
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 5 - Number Triangle Pattern
    cout << "\nProblem 5 - Number Triangle Pattern\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Problem 6 - Triangle Pattern
    cout << "\nProblem 6 - Triangle Pattern\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // Problem 7 - Character Triangle
    cout << "\nProblem 7 - Character Triangle\n";
    for(i=1; i<=n; i++)
    {
        char ch='A';
        for(j=1; j<=i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // Problem 8 - Continuous Character Triangle
    cout << "\nProblem 8 - Continuous Character Triangle\n";
    char ch='A';
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    // Problem 9 - Reverse Number Triangle
    cout << "\nProblem 9 - Reverse Number Triangle\n";
    for(i=1; i<=n; i++)
    {
        for(j=i; j>=1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Problem 10 - Reverse Triangle Pattern
    cout << "\nProblem 10 - Reverse Triangle Pattern\n";
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Problem 11 - Floyd's Triangle
    cout << "\nProblem 11 - Floyd's Triangle\n";
    int num=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Problem 12 - 0-1 Triangle Pattern
    cout << "\nProblem 12 - 0-1 Triangle Pattern\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if((i+j)%2==0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    // Problem 13 - Inverted Triangle Pattern
    cout << "\nProblem 13 - Inverted Triangle Pattern\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout << "  ";
        }

        for(k=1; k<=i; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // Problem 14 - Pyramid Pattern
    cout << "\nProblem 14 - Pyramid Pattern\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout << " ";
        }

        for(k=1; k<=2*i-1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Problem 15 - Hollow Diamond Pattern
    cout << "\nProblem 15 - Hollow Diamond Pattern\n";

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout << " ";
        }

        cout << "*";

        if(i!=1)
        {
            for(j=1; j<=2*i-3; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            cout << " ";
        }

        cout << "*";

        if(i!=1)
        {
            for(j=1; j<=2*i-3; j++)
            {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    // Problem 16 - Butterfly Pattern
    cout << "\nProblem 16 - Butterfly Pattern\n";

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }

        for(j=1; j<=2*(n-i); j++)
        {
            cout << " ";
        }

        for(j=1; j<=i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout << "*";
        }

        for(j=1; j<=2*(n-i); j++)
        {
            cout << " ";
        }

        for(j=1; j<=i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}