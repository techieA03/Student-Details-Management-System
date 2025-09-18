# 🧑‍🎓 **Student Details Program in C**

A **menu-driven, console-based program** written in **C** that allows users to manage student records interactively. This project demonstrates control flow, arrays, `switch-case` logic, and user-driven input loops—all with clean output formatting and a focus on user experience.

---

## **🚀 Features**

📥 **Enter Multiple Student Records**  
→ Input name, roll number, class, and marks for each student  
→ Continue entering data interactively until the user chooses to stop

📋 **Display Student Data**  
→ View all stored student records in a clean, formatted layout

📊 **Calculate Total & Average Marks**  
→ Automatically computes and displays total and average marks of all students

🔁 **Menu-Driven Workflow**  
→ Loop-based interface lets users choose actions repeatedly until they exit

🧼 **Minimal & Clear Output Formatting**  
→ Easy-to-read structure with separators and labels

---

## **📋 How It Works**

1. **Main Menu**  
   → User selects from four options: Enter Data, Display Data, Show Marks Summary, Exit

2. **Student Data Entry**  
   → Program asks for name, roll number, class, and marks  
   → User decides whether to continue entering more students

3. **Display Student Records**  
   → Shows all entered data with proper formatting

4. **Marks Summary**  
   → Calculates and displays total and average marks

5. **Exit Option**  
   → Ends the program gracefully

---

## **🛠️ Code Highlights**

- Uses arrays to store up to 100 student records  
- Employs `do-while` and `switch-case` for menu control  
- Boolean flag (`continue_entry`) for interactive input loop  
- Clean separation of logic for input, display, and calculations  
- Output formatting designed for clarity and comfort

---

## **📦 Sample Output**

```text
Welcome to Student Details Program

Choose an option:
1. Enter Student Data
2. Display Student Data
3. Average & Total Marks
4. Exit
Enter your choice: 1

Student no.1:
Name: Riya
Roll No.: 101
Class: 10
Marks: 87
Do you want to enter another student? (1 for Yes / 0 for No): 1
...
```

---

## **📁 File Structure**

```
student_details.c   // Main source file
README.md           // Project documentation
```

---

## **✅ How to Run**

1. **Save the code** in a file named `student_details.c`  
2. **Compile using GCC** or any standard C compiler:  
   ```bash
   gcc student_details.c -o student_details
   ```
3. **Run the program** in your terminal:  
   ```bash
   ./student_details
   ```

---

## **🧠 Author Notes**

This project is part of my hands-on learning journey in **C programming**, focusing on:

- Menu-driven logic and interactive workflows  
- Output formatting and user experience  
- Clean, minimal code with clear structure  
- Applying programming logic to real-world scenarios

Feel free to **fork**, **modify**, or **suggest improvements**. Let’s keep building and learning together!
