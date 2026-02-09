# Daily Coding Labs

This repository contains my **daily coding practice**, implemented using a **modular and structured approach** instead of writing single standalone programs.

The purpose of this repository is to build **clean coding habits**, understand **basic testing concepts**, and maintain **daily coding consistency** using Git and GitHub.

---

## 📁 Folder Description

### problems/
- Contains only **core logic and function definitions**
- No `main()` function
- No user input or output
- Functions are written to be reusable and testable

---

### tests/
- Contains **predefined test cases**
- Each test file validates logic from the `problems/` folder
- Helps verify correctness without manual input

---

### runner/
- Acts as a **single entry point**
- Calls test functions from different test files
- Keeps execution clean and organized

---

### docs/
- Stores short daily notes or learnings
- Used to track conceptual understanding

---

## ▶️ How to Run the Code

Compile and run from the project root directory:

```bash
g++ runner/main.cpp -o run
./run
