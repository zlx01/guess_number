package _java;

import java.util.Scanner;

public class GuessNumber {
    public static void main(String[] args) {
        int secretNumber = (int) (Math.floor(Math.random() * 100)) + 1;
        int number = -1;
        Scanner sc = new Scanner(System.in);
        while (true) {
            System.out.print("Guess a number: ");
            number = sc.nextInt();
            if (number == secretNumber) {
                System.out.println("Congratulations!");
                return;
            } else if (number < secretNumber) {
                System.out.println("Too small!");
            } else {
                System.out.println("Too big!");
            }
        }
    }
}