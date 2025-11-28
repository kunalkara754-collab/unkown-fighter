# 💱 Currency Converter (C Program)

A simple and beginner-friendly **Currency Converter** program written in
**C**. This program allows the user to convert an entered amount in
**USD** into one of four other currencies using fixed exchange rates.

------------------------------------------------------------------------

## 📌 **Features**

-   Converts **USD** to:
    -   🇮🇳 **INR (Indian Rupee)**
    -   🇪🇺 **EUR (Euro)**
    -   🇬🇧 **GBP (British Pound)**
    -   🇯🇵 **JPY (Japanese Yen)**
-   Uses fixed sample exchange rates.
-   Simple console-based interface.
-   Clean and easy-to-understand logic.

------------------------------------------------------------------------

## 🧠 **How It Works**

1.  The program displays a menu of available currencies.
2.  The user selects one option (1--5).
3.  If the user chooses **Exit (5)**, the program ends.
4.  Otherwise, the user enters an amount in USD.
5.  Using the respective exchange rate, the program converts the amount
    and prints the result.

------------------------------------------------------------------------

## 🔢 **Fixed Exchange Rates (Example Values)**

-   **1 USD = 83.20 INR**
-   **1 USD = 0.92 EUR**
-   **1 USD = 0.78 GBP**
-   **1 USD = 151.10 JPY**

These values can be changed in the code to update conversion accuracy.

------------------------------------------------------------------------

## 🧩 **Code Explanation**

### ✔️ Variable Declarations

-   `choice` → stores the option selected by the user.
-   `amount` → USD amount input.
-   `converted` → stores the converted value.
-   Exchange rate variables store fixed conversion rates.

### ✔️ Menu Display

A user-friendly menu guides the user to select which currency they want
to convert to.

### ✔️ Input Handling

Uses `scanf()` to collect user input for both choice and amount.

### ✔️ Conversion Logic

A `switch` statement matches the selected option and applies the
appropriate conversion formula:

    converted = amount * USD_to_INR; // Example

### ✔️ Output

The result is printed in a formatted manner with two decimal places.

------------------------------------------------------------------------

## 📺 **Sample Output**

    ==============================
           CURRENCY CONVERTER     
    ==============================

    Convert USD to:
    1. INR (Indian Rupee)
    2. EUR (Euro)
    3. GBP (British Pound)
    4. JPY (Japanese Yen)
    5. Exit

    Enter your choice: 1
    Enter amount in USD: 10
    10.00 USD = 832.00 INR

------------------------------------------------------------------------

## ⚙️ **How to Compile & Run**

### ▶ Compile

``` bash
gcc converter.c -o converter
```

### ▶ Run

``` bash
./converter
```

------------------------------------------------------------------------

## 📝 **Improvements You Can Add**

-   Real-time exchange rates using APIs
-   Multi-currency conversion (both directions)
-   Loop the menu until user exits
-   Error handling for invalid input
-   GUI using GTK or Qt

------------------------------------------------------------------------

## 🎯 **Conclusion**

This currency converter project is perfect for beginners learning **C
programming basics**, including input/output, menu-driven programs,
switch statements, and arithmetic operations.

Feel free to enhance or customize the program! 🚀
