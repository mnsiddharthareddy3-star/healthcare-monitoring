# 🏥 Healthcare Monitoring System in C

## 📖 Project Overview

The **Healthcare Monitoring System** is a menu-driven application developed using the C programming language.
It is designed to manage patient records and monitor essential health parameters such as temperature, heart rate, and blood pressure.

This project demonstrates the use of **structures, arrays, functions, and control statements** in C while solving a real-world healthcare problem.

---

## 🎯 Objectives

* To store and manage patient information efficiently
* To monitor basic health parameters
* To provide a simple interface for healthcare data handling
* To practice structured programming in C

---

## ⚙️ Features

### 1. Add Patient

Allows the user to enter:

* Patient ID
* Name
* Age
* Temperature
* Heart Rate
* Blood Pressure

---

### 2. Display Patients

Displays all stored patient records in a readable format.

---

### 3. Search Patient

Searches for a patient using a unique **Patient ID**.

---

### 4. Update Patient Data

Updates:

* Temperature
* Heart Rate
* Blood Pressure

---

### 5. Health Status Check

Analyzes patient health:

* Detects fever
* Identifies abnormal heart rate
* Checks high blood pressure

---

## 🛠️ Technologies Used

* **Programming Language:** C
* **Libraries:**

  * `stdio.h` (input/output operations)
  * `string.h` (string handling)

---

## 🧱 System Design

### Data Structure Used

```id="c6ph7a"
struct Patient {
    int id;
    char name[50];
    int age;
    float temperature;
    int heartRate;
    int systolicBP;
    int diastolicBP;
};
```

* Data is stored using an **array of structures**
* Maximum number of patients is predefined

---

## ▶️ How to Run the Program

### Step 1: Compile the Code

```id="v1gb2l"
gcc healthcare.c -o healthcare
```

### Step 2: Execute the Program

```id="lkhc0d"
./healthcare
```

---

## 🖥️ Program Flow

1. Display menu
2. User selects an option
3. Corresponding function is executed
4. Menu repeats until user exits

---

## 📸 Sample Output

```id="tvkj1s"
--- Healthcare Monitoring System ---
1. Add Patient
2. Display Patients
3. Search Patient
4. Update Patient Data
5. Check Health Status
6. Exit
Enter your choice:
```

---

## 📊 Health Analysis Logic

* **Temperature**

  * > 37.5°C → Fever
  * ≤ 37.5°C → Normal

* **Heart Rate**

  * < 60 or > 100 → Abnormal
  * 60–100 → Normal

* **Blood Pressure**

  * > 140/90 → High BP
  * Otherwise → Normal

---

## 🚀 Future Enhancements

* 💾 File handling to store data permanently
* 📱 GUI-based application
* 📊 Additional metrics (BMI, Oxygen Level)
* 🔐 Login and authentication system
* ☁️ Integration with cloud/database

---

## ✅ Advantages

* Simple and easy to use
* Demonstrates core C concepts
* Can be extended into real applications

---

## ⚠️ Limitations

* Data is not stored permanently
* Limited number of patients
* Basic health analysis only

---

## 📌 Conclusion

This project provides a foundational understanding of how programming can be used in healthcare systems.
It can be further enhanced to build advanced real-time health monitoring applications.

---

## Screenshots

https://1drv.ms/i/c/aaf57452cf2e00bc/IQBLRxz-Q50QTa_ddXnWOhm6AXEG0PSlipNmQaTjJtPpu9A?e=LpBcMv
