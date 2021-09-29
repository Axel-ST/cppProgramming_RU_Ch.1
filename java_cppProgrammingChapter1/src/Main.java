/*
 * Created by Axel_ST on 22.09.2021
 */

import java.util.Scanner;

public class Main {
   
   public static Scanner scanner = new Scanner(System.in);
   
   //пользователь вводит номер задачи
   public static int numberOfExercise() {
      int number;
      do {
         System.out.print("Insert a number of exercise, that you want to check (1 - 20) : ");
         number = scanner.nextInt();
      } while (number > 20 || number < 1);
      System.out.println();
      return number;
   }
   
   //метод пользовательского ввода double
   public static double receiveData(String str) {
      double result;
      System.out.print(str);
      result = scanner.nextDouble();
      return result;
   }
   
   // первое задание
   public static void firstExercise() {
      int i = 0, upperThreshold = 10;
      while (i++ < upperThreshold)
         System.out.print(i + " ");
      System.out.println();
   }
   
   // второе задание
   public static void secondExercise() {
      int number, i = 0;
      number = (int) receiveData("Insert first checking number: ");
      System.out.println();
      while (i < 5) {
         if (number % 2 == 1 || number % 2 == -1) {
            System.out.print(number + " ");
            i++;
         }
         number++;
      }
      System.out.println();
   }
   
   //третье задание
   public static void thirdExercise() {
      int number, amount = 0, i = 0;
      number = (int) receiveData("Insert first checking number: ");
      while (amount <= 0)
         amount = (int) receiveData("Insert total amount of numbers (more then zero): ");
      System.out.println();
      while (i < amount) {
         if (number % 4 == 3 || number % 4 == -3) {
            System.out.print(number + " ");
            i++;
         }
         number++;
      }
      System.out.println();
   }
   
   //четвертое задание
   public static void fourthExercise() {
      int amount = 0, firstNumber = 0, secondNumber = 1;
      while (amount <= 2)
         amount = (int) receiveData("Insert total amount of numbers (more then two): ");
      System.out.println();
      while (amount-- > 0) {
         System.out.print(firstNumber + " ");
         secondNumber += firstNumber;
         firstNumber = secondNumber - firstNumber;
      }
      System.out.println();
   }
   
   //пятое задание
   public static void fifthExercise() {
      int i = 0, number = 0, coefficient = 1;
      while (number < 1)
         number = (int) receiveData("Insert number of coefficients (more then zero): ");
      System.out.println();
      System.out.print(coefficient + " ");
      while (i < number) {
         coefficient = coefficient * (number - i) / (i + 1);
         System.out.print(coefficient + " ");
         i++;
      }
      System.out.println();
   }
   
   //метод перевода значений умножением и делением
   public static double transferSmthIntoSmth(double in, double coefficient, char typeOfTransfer) {
      if (typeOfTransfer == 'm')
         return in * coefficient;
      if (typeOfTransfer == 'd')
         return in / coefficient;
      return 0;
   }
   
   //шестое задание
   public static void sixthExercise() {
      double kilometers = 0, kmInMiles = 1.609344;
      System.out.println("Kilometers to miles \n");
      while (kilometers <= 0)
         kilometers = receiveData("Insert number of kilometers to transfer into miles (more then zero): ");
      System.out.println();
      System.out.println(kilometers + " kilometers is "
              + transferSmthIntoSmth(kilometers, kmInMiles, 'd') + " miles.");
   }
   
   //седьмое задание
   public static void seventhExercise() {
      double kilometers = -1, meters = -1, miles, feet;
      final double kmInMiles = 1.609344, feetInMile = 5280, metersInKm = 1000;
      System.out.println("Kilometers & meters into miles & feet\n");
      while (kilometers < 0)
         kilometers = receiveData("Insert number of kilometers: ");
      while (meters < 0)
         meters = receiveData("Insert number of meters: ");
      miles = transferSmthIntoSmth((kilometers + meters / metersInKm), kmInMiles, 'd');
      feet = (miles - (int) miles) * feetInMile;
      miles = (int) miles;
      System.out.println();
      System.out.println(kilometers + " kilometers & " + meters + " meters is " + miles + " miles & "
              + feet + " feet.");
   }
   
   //восьмое задание
   public static void eighthExercise() {
      double fathom = 0, metersInFathom = 2.16;
      System.out.println("Fathoms into meters \n");
      while (fathom <= 0)
         fathom = receiveData("Insert number of fathoms to transfer into meters (more then zero): ");
      System.out.println();
      System.out.println(fathom + " fathoms is "
              + transferSmthIntoSmth(fathom, metersInFathom, 'm') + " meters.");
   }
   
   //девятое задание
   public static void ninthExercise() {
      double fathom = -1, arshine = -1, meters, centimeters;
      final double metersInFathom = 2.16, arshinesInFathom = 3, smInMeters = 100;
      System.out.println("Fathoms & arshines into meters & centimeters \n");
      while (fathom < 0)
         fathom = receiveData("Insert number of fathom: ");
      while (arshine < 0)
         arshine = receiveData("Insert number of arshines: ");
      meters = transferSmthIntoSmth((fathom + arshine / arshinesInFathom), metersInFathom, 'm');
      centimeters = (meters - (int) meters) * smInMeters;
      meters = (int) meters;
      System.out.println();
      System.out.println(fathom + " fathoms & " + arshine + " arshine is " + meters
              + " meters & " + centimeters + " centimeters.");
   }
   
   //десятое задание
   public static void tenthExercise() {
      double kmPerHour = -1;
      final double metersInKm = 1000, secondsInHour = 3600;
      System.out.println("Speed at kilometers per hour into meters per second \n");
      while (kmPerHour < 0)
         kmPerHour = receiveData("Insert speed at kilometers per hour: ");
      System.out.println();
      System.out.println("Speed " + kmPerHour + " km/h is "
              + transferSmthIntoSmth(kmPerHour, metersInKm / secondsInHour, 'm')
              + " m/s.");
   }
   
   //одиннадцатое задание
   public static void eleventhExercise() {
      double metersPerSecond = -1;
      final double metersInKm = 1000, secondsInHour = 3600;
      System.out.println("Speed at meters per second into kilometers per hour \n");
      while (metersPerSecond < 0)
         metersPerSecond = receiveData("Insert speed at meters per second: ");
      System.out.println();
      System.out.println("Speed " + metersPerSecond + " m/s is "
              + transferSmthIntoSmth(metersPerSecond, metersInKm / secondsInHour, 'd')
              + " km/h.");
   }
   
   //двенадцатое задание
   public static void twelfthExercise() {
      int firstNumber, secondNumber;
      System.out.println("Sum of natural numbers \n");
      firstNumber = (int) receiveData("Insert first number: ");
      System.out.println();
      secondNumber = (int) receiveData("Insert second number: ");
      System.out.println();
      System.out.println(" " + firstNumber + " + " + secondNumber + " = "
              + (firstNumber + secondNumber));
   }
   
   //тринадцатое задание
   public static void thirteenthExercise() {
      int firstNumber = 0, secondNumber = 0;
      System.out.println("Sum of natural odd numbers \n");
      while (firstNumber % 2 == 0)
         firstNumber = (int) receiveData("Insert first number: ");
      System.out.println();
      while (secondNumber % 2 == 0)
         secondNumber = (int) receiveData("Insert second number: ");
      System.out.println();
      System.out.println(" " + firstNumber + " + " + secondNumber + " = "
              + (firstNumber + secondNumber));
   }
   
   //четырнадцатое упражнение
   public static void fourteenthExercise() {
      int i = 0;
      System.out.println("Array of even numbers \n");
      int[] evenNumbersArray = new int[(int) receiveData("Insert length of array: ")];
      while (i < evenNumbersArray.length) {
         System.out.print("Insert " + (i + 1) + " number of array: ");
         evenNumbersArray[i] = scanner.nextInt();
         if (evenNumbersArray[i] % 2 == 0) {
            i++;
         }
      }
      i = 0;
      System.out.println();
      while (i < evenNumbersArray.length) {
         System.out.print(" " + evenNumbersArray[i]);
         i++;
      }
      System.out.println();
   }
   
   //пятнадцатое упражнение
   public static void fifteenthExercise() {
      int i = 0;
      System.out.println("Array of odd numbers\n");
      int[] evenNumbersArray = new int[(int) receiveData("Insert length of array: ")];
      while (i < evenNumbersArray.length) {
         System.out.print("Insert " + (i + 1) + " number of array: ");
         evenNumbersArray[i] = scanner.nextInt();
         if (evenNumbersArray[i] % 2 == 1 || evenNumbersArray[i] % 2 == -1) {
            i++;
         }
      }
      i = 0;
      System.out.println();
      while (i < evenNumbersArray.length)
         System.out.print(" " + evenNumbersArray[i++]);
      System.out.println();
   }
   
   //шестнадцатое задание
   public static void sixteenthExercise() {
      int i = 0;
      System.out.println("Array of squares of natural numbers \n");
      int[] squareArray = new int[(int) receiveData("Insert length of array: ")];
      while (i < squareArray.length) {
         squareArray[i] = (i + 1) * (i + 1);
         i++;
      }
      i = 0;
      while (i < squareArray.length)
         System.out.print(" " + squareArray[i++]);
      System.out.println();
   }
   
   //семнадцатое задание
   public static void seventeenthExercise() {
      int i = 1, j = 1, buffer;
      System.out.println("Array of squares of 2 \n");
      int [] squareArray = new int[(int) receiveData("Insert length of array: ")];
      squareArray[0] = 1;
      while (i < squareArray.length) {
         buffer = 2;
         while (j++ < i) {
            buffer *= 2;
         }
         j = 1;
         squareArray[i] = buffer;
         i++;
      }
      i = 0;
      while (i < squareArray.length)
         System.out.print(" " + squareArray[i++]);
      System.out.println();
   }
   
   //восемнадцатое задание
   public static void eighteenthExercise() {
      int firstNumber = 0, secondNumber = 1, i = 0;
      System.out.println("Array of Fibonacci's numbers \n");
      int[] fibonacciArray = new int[(int) receiveData("Insert length of array: ")];
      while (i < fibonacciArray.length) {
         fibonacciArray[i] = firstNumber;
         secondNumber += firstNumber;
         firstNumber = secondNumber - firstNumber;
         i++;
      }
      i = 0;
      System.out.println();
      while (i < fibonacciArray.length)
         System.out.print(" " + fibonacciArray[i++]);
      System.out.println();
   }
   
   //девятнадцатое задание
   public static void nineteenthExercise() {
      int i = 0;
      System.out.println("Array of numbers \n");
      int[] strangeArray = new int[(int) receiveData("Insert length of array: ")];
      while (i < strangeArray.length) {
         if (i % 2 == 1)
            strangeArray[i] = i * i;
         else
            strangeArray[i] = i;
         i++;
      }
      i = 0;
      System.out.println();
      while (i < strangeArray.length)
         System.out.print(" " + strangeArray[i++]);
      System.out.println();
   }
   
   //двадцатое задание
   public static void twentiethExercise() {
      int i = 0;
      System.out.println("Array of user's numbers \n");
      int[] strangeArray = new int[(int) receiveData("Insert length of array: ")];
      while (i < strangeArray.length) {
         System.out.print("Insert " + (i + 1) + " number: ");
         strangeArray[i++] = scanner.nextInt();
      }
      i = 0;
      System.out.println();
      while (i < strangeArray.length)
         System.out.print(" " + strangeArray[i++]);
      System.out.println();
   }
   
   public static void main(String[] args) {
      boolean loop = true;
      char flag;
      while (loop) {
         switch (numberOfExercise()) {
            case 1 -> firstExercise();
            case 2 -> secondExercise();
            case 3 -> thirdExercise();
            case 4 -> fourthExercise();
            case 5 -> fifthExercise();
            case 6 -> sixthExercise();
            case 7 -> seventhExercise();
            case 8 -> eighthExercise();
            case 9 -> ninthExercise();
            case 10 -> tenthExercise();
            case 11 -> eleventhExercise();
            case 12 -> twelfthExercise();
            case 13 -> thirteenthExercise();
            case 14 -> fourteenthExercise();
            case 15 -> fifteenthExercise();
            case 16 -> sixteenthExercise();
            case 17 -> seventeenthExercise();
            case 18 -> eighteenthExercise();
            case 19 -> nineteenthExercise();
            case 20 -> twentiethExercise();
            default -> System.out.println("Something wrong, we working on it..");
         }
         System.out.println();
         System.out.print("Another exercise? (y/n): ");
         flag = scanner.next().charAt(0);
         if (flag != 'y')
            loop = false;
         System.out.println();
      }
   }
}
