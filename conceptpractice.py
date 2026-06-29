class Account:

    def __init__(self, account_no, holder_name, pin):
        self.account_no = account_no
        self.holder_name = holder_name
        self.pin = pin
        self.balance = 0
        self.transactions = []

    def deposit(self, amount):
        self.balance += amount
        self.transactions.append(f"Deposited ₹{amount}")
        print("Money Deposited Successfully.")

    def withdraw(self, amount):

        if amount > self.balance:
            print("Insufficient Balance.")
            return

        self.balance -= amount
        self.transactions.append(f"Withdrawn ₹{amount}")
        print("Withdrawal Successful.")

    def show_balance(self):
        print(f"Current Balance : ₹{self.balance}")

    def show_transactions(self):

        print("\nTransaction History")

        if len(self.transactions) == 0:
            print("No Transactions Yet.")

        else:
            for transaction in self.transactions:
                print(transaction)