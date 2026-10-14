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
