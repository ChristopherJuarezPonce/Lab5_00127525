#include <iostream>
using namespace std;

// Ejercicio a resolver del laboratorio 5 "pide al usario que ingrese dos numeros estos
// se tienen que sumar, restar, multiplicar y dividir y una opcion para salir del programa
// y mostrar un mensaje de despedida" ola profe

int main()
{
    // Declaration of the variables to be used in the program
    int Number1, Number2, Options, Result;

    // Ask the user to enter the first integer
    cout << "Enter the first number" << endl;
    cin >> Number1;

    // Ask the user to enter the second integer
    cout << "Enter the second number" << endl;
    cin >> Number2;

    // Create a menu of options so the user can decide what they want to do in the program
    cout << "Choose the operation you want to perform in the program (Select with numbers 1 to 5)" << endl;
    cout << "(1) Sum" << endl;
    cout << "(2) Subtract" << endl;
    cout << "(3) Multiply" << endl;
    cout << "(4) Divide" << endl;
    cout << "(5) Exit" << endl;
    cin >> Options;

    // Use a switch statement so that depending on the option the user selects,
    // the corresponding operation is performed
    switch (Options) // Use the "Options" variable so the correct operation is performed based on the users choice
    {
    case 1: // Case 1 is Sum
        Result = Number1 + Number2;
        break;
    case 2: // Case 2 is Subtraction
        Result = Number1 - Number2;
        break;
    case 3: // Case 3 is Multiplication
        Result = Number1 * Number2;
        break;
    case 4: // Case 4 is Division
        Result = Number1 / Number2;
        break;
    case 5: // Case 5 is to exit the program with a farewell message
        cout << "We wish you a great day, we hope to see you again soon" << endl;
        return 0;
        break;
    default: // This option is for when the user selects a number not allowed in the menu
        cout << "The selected option is invalid" << endl;
        return 1;
        break;
    }

    // Message that shows the result of the operation the user chose
    cout << "The result of your operation is: (" << Result << ")" << endl;

    return 0;
}