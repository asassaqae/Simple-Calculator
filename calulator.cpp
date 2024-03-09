#include <iostream>
#include <limits>

std::pair<int, std::string> calculate(int a, std::string oper, int b);

int main()
{
    using namespace std;
    int first_number, last_number;
    std::string oper;

    cout << "Welcome to calculator\n";

    cout << "\nEnter first number: ";
    cin >> first_number;

    cout << "\nEnter Operator: ";
    cin >> oper;

    cout << "\nEnter last number: ";
    cin >> last_number;

    auto [result, errorMessage] = calculate(first_number, oper, last_number);
    if (!errorMessage.empty()) {
        cout << errorMessage << endl;
    } else {
        cout << result << endl;
    }


}

std::pair<int, std::string> calculate(int a, std::string oper, int b) {

    if (oper == "+")
        return {a + b, ""};
    else if (oper == "-")
        return {a - b, ""};
    else if (oper == "*")
        return {a * b, ""};
    else if (oper == "/")
        return {a / b, ""};
    else {
        return {0, "Invalid operator Try Again"};
    }

}