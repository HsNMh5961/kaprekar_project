
# kaprekar_project [![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://isocpp.org/)
This mini-project is designed based on Kaprekar's Constant (6174).  The program takes any 4-digit number as input and processes it through the Kaprekar routine until it reaches either 6174 or 0.

## 📖 About

This program is an interactive implementation of the **Kaprekar routine**, a fascinating mathematical curiosity that always leads to the mysterious number **6174** in at most 7 steps.

**The Kaprekar Routine:**
1. Take any 4-digit number with at least two different digits.
2. Arrange its digits in descending and ascending order to create two new numbers.
3. Subtract the smaller number from the larger one.
4. Repeat the process with the result.

Discovered by Indian mathematician **Dattatreya Ramachandra Kaprekar** in 1949, this simple algorithm demonstrates an intriguing property of our decimal number system. This project brings that mathematical wonder to life with clear, step-by-step output.

> **Fun Fact:** No matter which 4-digit number you start with (as long as all digits aren't the same), you'll always reach **6174** – and it never takes more than 7 iterations!

## 🔢 Kaprekar Constant Processor

This program takes a 4-digit number and applies the **Kaprekar routine** to reach **6174** (Kaprekar's Constant) or **0**.

[![C++](https://img.shields.io/badge/C++-17-blue)](https://isocpp.org/)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow)](https://opensource.org/licenses/MIT)

## 🚀 How to Run
1. Clone the repository
2. Compile: `g++ main.cpp -o kaprekar`
3. Run: `./kaprekar`

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

## 👨‍💻 Author

**Hasan Mahmoodi**  
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/hasan-mahmoodi-19a109376)  
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/HsNMh5961)

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## 📖 درباره پروژه
این برنامه هر عدد ۴ رقمی را گرفته و با الگوریتم کاپرکار به عدد 6174 یا 0 میرساند