#include <iostream>
#include <stdlib.h>

//пользователь вводит номер задачи
int numberOfExercise() {
    int number;
    do {
        std::cout << "Insert a number of exercise, that you want to check (1 - 20) : ";
        std::cin >> number;
    } while (number > 20 || number < 1);
    std::cout << "\n";
    return number;
}

//метод пользовательского ввода double
double receiveData(std::string str) {
    double result;
    std::cout << str;
    std::cin >> result;
    return result;
}

// первое задание
void firstExercise() { 
    int i = 0, upperThreshold = 10;
    while (i++ < upperThreshold)
        std::cout << i << " ";
    std::cout << "\n";
}

// второе задание
void secondExercise() { 
    int number, i = 0;
    number = (int) receiveData("Insert first checking number: ");
    std::cout << "\n";
    while (i < 5) {
        if (number % 2 == 1 || number % 2 == -1) {
            std::cout << number << " ";
            i++;
        }
        number++;
    }
    std::cout << "\n";
}

//третье задание
void thirdExercise() {
    int number, amount = 0, i = 0;
    number = (int) receiveData("Insert first checking number: ");
    while (amount <= 0)
        amount = (int) receiveData("Insert total amount of numbers (more then zero): ");
    std::cout << "\n";
    while (i < amount) {
        if (number % 4 == 3 || number % 4 == -3) {
            std::cout << number << " ";
            i++;
        }
        number++;
    }
    std::cout << "\n";
}

//четвертое задание
void fourthExercise() {
    int amount = 0, firstNumber = 1, secondNumber = 1;
    while (amount <= 2)
        amount = (int) receiveData("Insert total amount of numbers (more then two): ");
    std::cout << "\n";
    std::cout << firstNumber << " ";
    while (amount-- > 1) {
        std::cout << secondNumber << " ";
        secondNumber += firstNumber;
        firstNumber = secondNumber - firstNumber;
    }
    std::cout << "\n";
}

//пятое задание
void fifthExercise() {
    int i = 0, number = 0, coefficient = 1;
    while (number < 1)
        number = (int) receiveData("Insert number of coefficients (more then zero): ");
    std::cout << "\n";
    std::cout << coefficient << " ";
    while (i < number) {
        coefficient = coefficient * (number - i) / (i + 1);
        std::cout << coefficient << " ";
        i++;
    }
    std::cout << "\n";
}

//метод перевода значений умножением и делением
double transferSmthIntoSmth(double in, double coefficient, char typeOfTransfer) {
    if (typeOfTransfer == 'm')
        return in * coefficient;
    if (typeOfTransfer == 'd')
        return in / coefficient;
    return 0;
}

//шестое задание
void sixthExercise() {
    double kilometers = 0, kmInMiles = 1.609344;
    std::cout << "Kilometers to miles" << std::endl;
    std::cout << "\n";
    while (kilometers <= 0)
        kilometers = receiveData("Insert number of kilometers to transfer into miles (more then zero): ");
    std::cout << "\n";
    std::cout << kilometers << " kilometers is " << transferSmthIntoSmth(kilometers, kmInMiles, 'd') << " miles." << std::endl;
}

//седьмое задание
void seventhExercise() {
    double kilometers = -1, meters = -1, miles, feet; 
    const double kmInMiles = 1.609344, feetInMile = 5280, metersInKm = 1000;
    std::cout << "Kilometers & meters into miles & feet" << std::endl;
    std::cout << "\n";
    while (kilometers < 0)
        kilometers = receiveData("Insert number of kilometers: ");
    while (meters < 0)
        meters = receiveData("Insert number of meters: ");
    miles = transferSmthIntoSmth((kilometers + meters / metersInKm), kmInMiles, 'd');
    feet = (miles - (int) miles) * feetInMile;
    miles = (int) miles;
    std::cout << "\n";
    std::cout << kilometers << " kilometers & " << meters << " meters is " << miles << " miles & " << feet << " feet." << std::endl;
}

//восьмое задание
void eighthExercise() {
    double fathom = 0, metersInFathom = 2.16;
    std::cout << "Fathoms into meters" << std::endl;
    std::cout << "\n";
    while (fathom <= 0)
        fathom = receiveData("Insert number of fathoms to transfer into meters (more then zero): ");
    std::cout << "\n";
    std::cout << fathom << " fathoms is " << transferSmthIntoSmth(fathom, metersInFathom, 'm') << " meters." << std::endl;
}

//девятое задание
void ninthExetcise() {
    double fathom = -1, arshine = -1, meters, centimeters;
    const double metersInFathom = 2.16, arshinesInFathom = 3, smInMeters = 100;
    std::cout << "Fathoms & arshines into meters & centimeters" << std::endl;
    std::cout << "\n";
    while (fathom < 0)
        fathom = receiveData("Insert number of fathom: ");
    while (arshine < 0)
        arshine = receiveData("Insert number of arshines: ");
    meters = transferSmthIntoSmth((fathom + arshine / arshinesInFathom), metersInFathom, 'm');
    centimeters = (meters - (int) meters) * smInMeters;
    meters = (int) meters;
    std::cout << "\n";
    std::cout << fathom << " fathoms & " << arshine << " arshine is " << meters << " meters & " << centimeters << " centimeters." << std::endl;
}

//десятое задание
void tenthExercise() {
    double kmPerHour = -1;
    const double metersInKm = 1000, secondsInHour = 3600;
    std::cout << "Speed at kilometers per hour into meters per second" << std::endl;
    std::cout << "\n";
    while (kmPerHour < 0)
        kmPerHour = receiveData("Insert speed at kilometers per hour: ");
    std::cout << "\n";
    std::cout << "Speed " << kmPerHour << " km/h is " << transferSmthIntoSmth(kmPerHour, metersInKm / secondsInHour, 'm') << " m/s." << std::endl;
}

//одиннадцатое задание
void eleventhExercise() {
    double metersPerSecond = -1;
    const double metersInKm = 1000, secondsInHour = 3600;
    std::cout << "Speed at meters per second into kilometers per hour" << std::endl;
    std::cout << "\n";
    while (metersPerSecond < 0)
        metersPerSecond = receiveData("Insert speed at meters per second: ");
    std::cout << "\n";
    std::cout << "Speed " << metersPerSecond << " m/s is " << transferSmthIntoSmth(metersPerSecond, metersInKm / secondsInHour, 'd') << " km/h." << std::endl;
}

//двенадцатое задание
void twelfthExercise() {
    int firstNumber, secondNumber;
    std::cout << "Sum of natural numbers" << std::endl;
    std::cout << "\n";
    firstNumber = (int) receiveData("Insert first number: ");
    std::cout << "\n";
    secondNumber = (int) receiveData("Insert second number: ");
    std::cout << "\n";
    std::cout << " " << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << std::endl;
}

//тринадцатое задание
void thirteenthExercise() {
    int firstNumber = 0, secondNumber = 0;
    std::cout << "Sum of natural odd numbers" << std::endl;
    std::cout << "\n";
    while (firstNumber % 2 == 0)
        firstNumber = (int) receiveData("Insert first number: ");
    std::cout << "\n";
    while (secondNumber % 2 == 0)
        secondNumber = (int) receiveData("Insert second number: ");
    std::cout << "\n";
    std::cout << " " << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << std::endl;
}

//четырнадцатое упражнение
void fourteenthExercise() { 
    int i = 0;
    std::cout << "Array of 10 even numbers" <<std::endl;
    std::cout << "\n";
    const int arrayLength = 10;
    int evenNumbersArray [arrayLength];
    while (i < arrayLength) {
        std::cout << "Insert " << i + 1 << " number of array: ";
        std::cin >> evenNumbersArray[i];
        if (evenNumbersArray[i] % 2 == 0) {
            i++;
        }
    }
    i = 0;
    std::cout << "\n";
    while (i < arrayLength) {
        std::cout << " " << evenNumbersArray[i];
        i++;
    }
    std::cout << "\n";
}

//пятнадцатое упражнение
void fifteenthExercise() {
    int i = 0;
    std::cout << "Array of 10 odd numbers" << std::endl;
    std::cout << "\n";
    const int arrayLength = 10;
    int evenNumbersArray[arrayLength];
    while (i < arrayLength) {
        std::cout << "Insert " << i + 1 << " number of array: ";
        std::cin >> evenNumbersArray[i];
        if (evenNumbersArray[i] % 2 == 1 || evenNumbersArray[i] % 2 == -1) {
            i++;
        }
    }
    i = 0;
    std::cout << "\n";
    while (i < arrayLength)
        std::cout << " " << evenNumbersArray[i++];
    std::cout << "\n";
}

//шестнадцатое задание
void sixteenthExercise() {
    const int arrayLength = 15;
    int squareArray[arrayLength];
    int i = 0;
    std::cout << "Array of squares 15 natural numbers" << std::endl;
    std::cout << "\n";
    while (i < arrayLength) {
        squareArray[i] = (i + 1) * (i + 1);
        i++;
    }
    i = 0;
    while (i < arrayLength)
        std::cout << " " << squareArray[i++];
    std::cout << "\n";
}

//семнадцатое задание
void seventeenthExercise() {
    const int arrayLength = 15;
    int squareArray[arrayLength];
    int i = 1, j = 1, boofer;
    std::cout << "Array of 15 squares of 2" << std::endl;
    std::cout << "\n";
    squareArray[0] = 1;
    while (i < arrayLength) {
        boofer = 2;
        while (j++ < i) {
            boofer *= 2;
        }
        j = 1;
        squareArray[i] = boofer;
        i++;
    }
    i = 0;
    while (i < arrayLength)
        std::cout << " " << squareArray[i++];
    std::cout << "\n";
}

//восемнадцатое задание
void eighteenthExercise() {
    const int arrayLength = 15;
    int fibonacciArray[arrayLength];
    int firstNumber = 0, secondNumber = 1, i = 0;
    std::cout << "Array of 15 Fibonacci's numbers" << std::endl;
    while (i < arrayLength) {
        fibonacciArray[i] = firstNumber;
        secondNumber += firstNumber;
        firstNumber = secondNumber - firstNumber;
        i++;
    }
    i = 0;
    std::cout << "\n";
    while (i < arrayLength)
        std::cout << " " << fibonacciArray[i++];
    std::cout << "\n";
}

//девятнадцатое задание
void nineteenthExercise() {
    const int arrayLength = 15;
    int i = 0;
    int strangeArray[arrayLength];
    std::cout << "Array of 15 numbers" << std::endl;
    while (i < arrayLength) {
        if (i % 2 == 1)
            strangeArray[i] = i * i;
        else
            strangeArray[i] = i;
        i++;
    }
    i = 0;
    std::cout << "\n";
    while (i < arrayLength)
        std::cout << " " << strangeArray[i++];
    std::cout << "\n";
}

//двадцатое задание
void twentiethExercise() {
    const int arrayLength = 5;
    int i = 0;
    int strangeArray[arrayLength];
    std::cout << "Array of 5 user's numbers" << std::endl;
    std::cout << "\n";
    while (i < arrayLength) {
        std::cout << "Insert " << i + 1 << " number: ";
        std::cin >> strangeArray[i++];
    }
    i = 0;
    std::cout << "\n";
    while (i < arrayLength)
        std::cout << " " << strangeArray[i++];
    std::cout << "\n";
}

int main() {
    bool loop = true;
    char flag;
    while (loop) {
        switch (numberOfExercise()) {
        case 1:
            firstExercise();
            break;
        case 2:
            secondExercise();
            break;
        case 3:
            thirdExercise();
            break;
        case 4:
            fourthExercise();
            break;
        case 5:
            fifthExercise();
            break;
        case 6:
            sixthExercise();
            break;
        case 7:
            seventhExercise();
            break;
        case 8:
            eighthExercise();
            break;
        case 9:
            ninthExetcise();            
            break;
        case 10:
            tenthExercise();
            break;
        case 11:
            eleventhExercise();
            break;
        case 12:
            twelfthExercise();
            break;
        case 13:
            thirteenthExercise();
            break;
        case 14:
            fourteenthExercise();
            break;
        case 15:
            fifteenthExercise();
            break;
        case 16:
            sixteenthExercise();
            break;
        case 17:
            seventeenthExercise();
            break;
        case 18:
            eighteenthExercise();
            break;
        case 19:
            nineteenthExercise();
            break;
        case 20:
            twentiethExercise();
            break;
        default:
            std::cout << "Something wrong, we working on it.." << std::endl;
        }
        std::cout << "\n";
        std::cout << "Another exercise? (y/n): ";
        std::cin >> flag;
        if (flag != 'y')
            loop = false;
        std::cout << "\n";
    }
    return 0;
}
