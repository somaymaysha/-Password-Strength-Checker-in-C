# 🔐 Password Strength Checker in C

This is a simple C program that checks the strength of a password entered by the user.  
It evaluates the password based on basic rules such as length, and the presence of uppercase letters, lowercase letters, and digits.

---

## ✅ Features

- Checks if the password is at least **8 characters** long
- Verifies the presence of:
  - At least one **uppercase** letter
  - At least one **lowercase** letter
  - At least one **number**
- Displays the result as either **"Strong"** or **"Weak"**

---

## 🧠 How It Works

The program reads a password from the user, analyzes each character, and sets flags to track the presence of uppercase, lowercase, and numeric characters. It then uses simple logic to decide if the password is strong or weak based on these rules.

---

## 🛠️ Getting Started

### 📌 Requirements

- GCC compiler (or any C compiler)
- Terminal or command prompt

### 💻 Compilation and Execution

```bash
gcc password_checker.c -o password_checker
./password_checker
