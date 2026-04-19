#include <stdio.h>
#include <string.h>

#define MAX 100

struct Patient {
    int id;
    char name[50];
    int age;
    float temperature;
    int heartRate;
    int systolicBP;
    int diastolicBP;
};

struct Patient patients[MAX];
int count = 0;

// Function to add patient
void addPatient() {
    if (count >= MAX) {
        printf("Patient limit reached!\n");
        return;
    }

    printf("\nEnter Patient ID: ");
    scanf("%d", &patients[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", patients[count].name);

    printf("Enter Age: ");
    scanf("%d", &patients[count].age);

    printf("Enter Temperature: ");
    scanf("%f", &patients[count].temperature);

    printf("Enter Heart Rate: ");
    scanf("%d", &patients[count].heartRate);

    printf("Enter Systolic BP: ");
    scanf("%d", &patients[count].systolicBP);

    printf("Enter Diastolic BP: ");
    scanf("%d", &patients[count].diastolicBP);

    count++;
    printf("Patient added successfully!\n");
}

// Function to display patients
void displayPatients() {
    if (count == 0) {
        printf("\nNo patients found.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nID: %d", patients[i].id);
        printf("\nName: %s", patients[i].name);
        printf("\nAge: %d", patients[i].age);
        printf("\nTemperature: %.2f", patients[i].temperature);
        printf("\nHeart Rate: %d", patients[i].heartRate);
        printf("\nBP: %d/%d\n", patients[i].systolicBP, patients[i].diastolicBP);
    }
}

// Function to search patient
void searchPatient() {
    int id, found = 0;
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (patients[i].id == id) {
            printf("\nPatient Found:\n");
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            printf("Temperature: %.2f\n", patients[i].temperature);
            printf("Heart Rate: %d\n", patients[i].heartRate);
            printf("BP: %d/%d\n", patients[i].systolicBP, patients[i].diastolicBP);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient not found!\n");
}

// Function to update patient
void updatePatient() {
    int id, found = 0;
    printf("\nEnter Patient ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (patients[i].id == id) {
            printf("Enter new Temperature: ");
            scanf("%f", &patients[i].temperature);

            printf("Enter new Heart Rate: ");
            scanf("%d", &patients[i].heartRate);

            printf("Enter new BP (Systolic Diastolic): ");
            scanf("%d %d", &patients[i].systolicBP, &patients[i].diastolicBP);

            printf("Updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient not found!\n");
}

// Function to check health status
void healthStatus() {
    int id, found = 0;
    printf("\nEnter Patient ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (patients[i].id == id) {
            printf("\nHealth Status:\n");

            if (patients[i].temperature > 37.5)
                printf("Fever detected\n");
            else
                printf("Temperature normal\n");

            if (patients[i].heartRate < 60 || patients[i].heartRate > 100)
                printf("Abnormal Heart Rate\n");
            else
                printf("Heart Rate normal\n");

            if (patients[i].systolicBP > 140 || patients[i].diastolicBP > 90)
                printf("High Blood Pressure\n");
            else
                printf("Blood Pressure normal\n");

            found = 1;
            break;
        }
    }

    if (!found)
        printf("Patient not found!\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n--- Healthcare Monitoring System ---\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient Data\n");
        printf("5. Check Health Status\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPatient(); break;
            case 2: displayPatients(); break;
            case 3: searchPatient(); break;
            case 4: updatePatient(); break;
            case 5: healthStatus(); break;
            case 6: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice!\n");
        }
    }
}