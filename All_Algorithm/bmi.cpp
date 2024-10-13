#include <stdio.h>

#define MAX_MEMBERS 100

struct Member {
    int ID;
    float Height;
    float Weight;
};

struct Member gymMembers[MAX_MEMBERS];
int numMembers = 0;

void addMember() {
    if (numMembers >= MAX_MEMBERS) {
        printf("Maximum number of members reached.\n");
        return;
    }

    struct Member newMember;
    printf("Enter ID: ");
    scanf("%d", &newMember.ID);
    printf("Enter Height (in meters): ");
    scanf("%f", &newMember.Height);
    printf("Enter Weight (in kg): ");
    scanf("%f", &newMember.Weight);

    gymMembers[numMembers] = newMember;
    numMembers++;

    printf("Member added successfully.\n");
}

void removeMember() {
    if (numMembers <= 0) {
        printf("No members to remove.\n");
        return;
    }

    int removeID, found = 0;
    printf("Enter the ID of the member to remove: ");
    scanf("%d", &removeID);

    for (int i = 0; i < numMembers; i++) {
        if (gymMembers[i].ID == removeID) {
            found = 1;
            for (int j = i; j < numMembers - 1; j++) {
                gymMembers[j] = gymMembers[j + 1];
            }
            numMembers--;
            printf("Member removed successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Member with ID %d not found.\n", removeID);
    }
}

void updateMember() {
    if (numMembers <= 0) {
        printf("No members to update.\n");
        return;
    }

    int updateID, found = 0;
    printf("Enter the ID of the member to update: ");
    scanf("%d", &updateID);

    for (int i = 0; i < numMembers; i++) {
        if (gymMembers[i].ID == updateID) {
            found = 1;
            printf("Enter new Height (in meters): ");
            scanf("%f", &gymMembers[i].Height);
            printf("Enter new Weight (in kg): ");
            scanf("%f", &gymMembers[i].Weight);
            printf("Member updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Member with ID %d not found.\n", updateID);
    }
}

void calculateAverages() {
    if (numMembers <= 0) {
        printf("No members found.\n");
        return;
    }

    float totalHeight = 0, totalWeight = 0;
    for (int i = 0; i < numMembers; i++) {
        totalHeight += gymMembers[i].Height;
        totalWeight += gymMembers[i].Weight;
    }

    float avgHeight = totalHeight / numMembers;
    float avgWeight = totalWeight / numMembers;

    printf("Average Height: %.2f meters\n", avgHeight);
    printf("Average Weight: %.2f kg\n", avgWeight);
}

void calculateMax() {
    if (numMembers <= 0) {
        printf("No members found.\n");
        return;
    }

    float maxHeight = gymMembers[0].Height;
    float maxWeight = gymMembers[0].Weight;

    for (int i = 1; i < numMembers; i++) {
        if (gymMembers[i].Height > maxHeight) {
            maxHeight = gymMembers[i].Height;
        }
        if (gymMembers[i].Weight > maxWeight) {
            maxWeight = gymMembers[i].Weight;
        }
    }

    printf("Max Height: %.2f meters\n", maxHeight);
    printf("Max Weight: %.2f kg\n", maxWeight);
}

void calculateMin() {
    if (numMembers <= 0) {
        printf("No members found.\n");
        return;
    }

    float minHeight = gymMembers[0].Height;
    float minWeight = gymMembers[0].Weight;

    for (int i = 1; i < numMembers; i++) {
        if (gymMembers[i].Height < minHeight) {
            minHeight = gymMembers[i].Height;
        }
        if (gymMembers[i].Weight < minWeight) {
            minWeight = gymMembers[i].Weight;
        }
    }

    printf("Min Height: %.2f meters\n", minHeight);
    printf("Min Weight: %.2f kg\n", minWeight);
}

void displayBMIClassification() {
    if (numMembers <= 0) {
        printf("No members found.\n");
        return;
    }

    int memberID, found = 0;
    printf("Enter the ID of the member: ");
    scanf("%d", &memberID);

    for (int i = 0; i < numMembers; i++) {
        if (gymMembers[i].ID == memberID) {
            found = 1;
            float bmi = gymMembers[i].Weight / (gymMembers[i].Height * gymMembers[i].Height);

        printf("BMI Classification:\n");
            printf("BMI: %.2f\n", bmi);

            if (bmi < 18.5) {
                printf("Underweight\n");
            } else if (bmi >= 18.5 && bmi < 25) {
                printf("Normal weight\n");
            } else if (bmi >= 25 && bmi < 30) {
                printf("Overweight\n");
            } else {
                printf("Obese\n");
            }

            break;
        }
    }

    if (!found) {
        printf("Member with ID %d not found.\n", memberID);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Gym Data Processing Menu ---\n");
        printf("1. Add Member\n");
        printf("2. Remove Member\n");
        printf("3. Update Member\n");
        printf("4. Calculate Averages\n");
        printf("5. Calculate Max Height and Weight\n");
        printf("6. Calculate Min Height and Weight\n");
        printf("7. Display BMI Classification\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMember();
                break;
            case 2:
                removeMember();
                break;
            case 3:
                updateMember();
                break;
            case 4:
                calculateAverages();
                break;
            case 5:
                calculateMax();
                break;
            case 6:
                calculateMin();
                break;
            case 7:
                displayBMIClassification();
                break;
            case 8:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}