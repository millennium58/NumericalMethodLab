//C++ program to find solution of a quadratic function using regula falsi method
#include <iostream>

using namespace std;
double a, b, c, xr, es, fxr;

//Function to find the value of the function
double funcEvaluation (double x)
{
    double fx = (a * x * x) + (b * x) + c;
    return fx;
}

//Using a certain number of iteration process to exit the program in this function
void withIteration(double x1, double x2, int n)
{
    int i = 1;
    cout << showpoint;

    cout << endl << "----------------------------------------------------------------------------" << endl;
    cout << "\t" << "i" << "          " << "x1"
         << "              " << "x2" << "              " << "xr"
         << "              " << "fxr" << endl;
    cout << endl << "----------------------------------------------------------------------------" << endl;

    do
    {
        cout << "\t" << i << "\t" << x1 << "\t" << x2;
        xr = x2 - (funcEvaluation(x2) * (x2 - x1)) / (funcEvaluation(x2) - funcEvaluation(x1));
        fxr = funcEvaluation(xr);


        if(fxr * funcEvaluation (x2) < 0)
        {
            x1 = xr;
        }
        else
        {
            x2 = xr;
        }

        cout << "\t" << xr << "\t" << fxr;

        cout << endl;

        i++;
    }
    while(i <= n);
}

//Checking error to exit the program in this function
void withError(double x1, double x2)
{
    int i = 1;
    cout << showpoint;

    cout << endl << "----------------------------------------------------------------------------" << endl;
    cout << "\t" << "i" << "          " << "x1"
         << "              " << "x2" << "              " << "xr"
         << "              " << "fxr" << endl;
    cout << endl << "----------------------------------------------------------------------------" << endl;

    do
    {
        cout << "\t" << i << "\t" << x1 << "\t" << x2;
        xr = x2 - (funcEvaluation(x2) * (x2 - x1)) / (funcEvaluation(x2) - funcEvaluation(x1));
        fxr = funcEvaluation(xr);


        if(fxr == 0)
        {
            cout << "\t" << xr << "\t" << fxr;
            break;
        }

        else if(fxr * funcEvaluation (x2) < 0)
        {
            x1 = xr;
        }
        else
        {
            x2 = xr;
        }

        cout << "\t" << xr << "\t" << fxr;

        cout << endl;

        i++;
    }
    while(abs(fxr) > es);
}

//Driver program
int main ()
{
    int i = 1, n;
    double x1, x2;

    cout << "Enter the coefficients a, b and c of the ideal equation ax^2 + bx + c = 0: " << endl;
    cin >> a >> b >> c;
    cout << endl << "Enter the initial guess values x1 and x2:" << endl;
    cin >> x1 >> x2;
    cout << endl << "Enter the number of iteration you want: " << endl;
    cin >> n;
    cout << endl << "Enter the stopping criterion error: " << endl;
    cin >> es;


    if ((funcEvaluation (x1) * funcEvaluation (x2)) >= 0)
    {
        cout << "You have not assumed right initial values.";
        return 0;
    }

    cout << endl << endl << "Finding solution of the given quadratic equation using iteration." << endl;
    withIteration(x1, x2, n);
    cout << endl << "Finding solution of the given quadratic equation using criterion error." << endl;
    withError(x1, x2);
}
