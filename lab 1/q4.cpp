// Question 4

#include <iostream>

class BankAccount
{
    private:
        std::string m_accountNumber{"NULL"};
        float m_balance{0};

    public:
        // BankAccount() = default;
        BankAccount(std::string accNo, float balance);
        void deposit(float amount);
        void withdraw(float amount);
};

BankAccount::BankAccount(std::string accNo, float balance)
{
    m_accountNumber = accNo;
    m_balance = balance;
}

void BankAccount::deposit(float amount)
{
    m_balance = m_balance + amount;
}

void BankAccount::withdraw(float amount)
{
    if( (m_balance - amount) < 0 )
    {
        std::cerr << "Insufficient credits" << std::endl;
    }
    else
    {
        m_balance -= amount;
    }
}

int main()
{
    BankAccount b1("429847760038", 20000);
    

    return 0;
}