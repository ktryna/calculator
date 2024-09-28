#include "calculator.h"
#include <stdexcept> // Для використання стандартних виключень

int Calculator::Add(double a, double b)
{
    return a + b;
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}

int Calculator::Mul(double a, double b)
{
    // Додаємо валідацію для перевірки на NaN
    if (std::isnan(a) || std::isnan(b)) {
        throw std::invalid_argument("Arguments must be valid numbers.");
    }
    return a * b; // Використання простого множення без додавання 0.5
}

// Додаємо нову функцію для ділення
double Calculator::Div(double a, double b)
{
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}
