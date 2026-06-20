# kaprekar_project
This mini-project is designed based on Kaprekar's Constant (6174).  The program takes any 4-digit number as input and processes it through the Kaprekar routine until it reaches either 6174 or 0.

## 📖 About

This program takes any **4-digit number** (with at least two different digits) and applies the **Kaprekar routine** to transform it into **6174**, also known as **Kaprekar's Constant**.

The algorithm was discovered by Indian mathematician **Dattatreya Ramachandra Kaprekar** in 1949.

🔢 Kaprekar Constant Processor

This program takes a 4-digit number and applies the **Kaprekar routine** to reach **6174** (Kaprekar's Constant) or **0**.

[![C++](https://img.shields.io/badge/C++-17-blue)](https://isocpp.org/)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow)](https://opensource.org/licenses/MIT)

## 🚀 How to Run

1. Clone the repository:
```bash
git clone https://github.com/your-username/kaprekar-project.git
g++ kaprekar.cpp -o kaprekar
./kaprekar


## 📸 Example Output
Enter Your number: 3524
You entered: 3524

📊 Kaprekar Steps:
Level 1: 3087
Level 2: 8352
Level 3: 6174

✅ Reached Kaprekar's Constant (6174)!
🎉 Number of steps: 3


## 🧠 How It Works

1. **Extract digits** from the 4-digit number.
2. **Sort digits** in descending order (to form the largest number).
3. **Sort digits** in ascending order (to form the smallest number).
4. **Subtract** the smaller number from the larger number.
5. Repeat until reaching **6174** or **0**.

## 🛠️ Technologies
- **C++** (Standard Library)
- No external dependencies

## 📚 References
- [Kaprekar's Constant on Wikipedia](https://en.wikipedia.org/wiki/Kaprekar%27s_constant)
- [Numberphile - 6174](https://www.youtube.com/watch?v=d8bG6TqXbLM)

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## 📖 درباره پروژه
این برنامه هر عدد ۴ رقمی را گرفته و با الگوریتم کاپرکار به عدد 6174 یا 0 میرساند