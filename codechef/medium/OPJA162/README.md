# OPJA162

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Banking System with User-Defined Exceptions

You are tasked with designing a simple banking system. Implement the following components using Java classes and user-defined exceptions:

- Create a BankAccount class to represent a bank account. Each account should have the following attributes: Account Number (an integer) Account Holder Name (a string) Balance (a floating-point value) Additionally, include a method withdraw that allows an account holder to withdraw money. If the withdrawal amount exceeds the account balance, throw a InsufficientFundsException with an appropriate error message.
- Create a InsufficientFundsException class that is derived from Exception class. This class should include a constructor that takes an error message as a parameter.
- In the main function: Create several BankAccount objects. Deposit and withdraw money from these accounts. Catch and handle the InsufficientFundsException when a withdrawal exceeds the account balance.
### Task

Complete the `InsufficientFundsException` and `BankAccount` class to observe how user-defined exceptions can be used in Java.

This problem helps you practice creating user-defined exceptions and using them in real-world scenarios, such as a banking system, to handle specific error conditions gracefully.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T06:57:00.916Z  

```java
class InsufficientFundsException extends Exception {
    public InsufficientFundsException(String message) {
        super(message);
    }
}

class BankAccount {
    private int accountNumber;
    private String accountHolder;
    private double balance;

    public BankAccount(int accountNumber, String accountHolder, double balance) {
        this.accountNumber = accountNumber;
        this.accountHolder = accountHolder;
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public void withdraw(double amount) throws InsufficientFundsException {
        if (amount > balance) {
            throw new InsufficientFundsException("Insufficient funds. Withdrawal not allowed.");
        }
        balance -= amount;
    }
}

class Codechef {
    public static void main(String[] args) {
        try {
            BankAccount account1 = new BankAccount(1001, "Alice", 1000.0);

            account1.withdraw(2000.0); // Successful withdrawal

            // Print updated balances
            System.out.println("Account 1 Balance: " + account1.getBalance());
        } catch (InsufficientFundsException ex) {
            System.out.println("Exception: " + ex.getMessage());
        }
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPJA162)