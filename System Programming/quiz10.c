#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 12
#define NAME_LEN 50
#define PHONE_LEN 15

typedef struct {
    char firstName[NAME_LEN];
    char lastName[NAME_LEN];
    char phoneNumber[PHONE_LEN];
} Contact;

Contact contactList[MAX_CONTACTS];
int contactCount = 0;

void addContact(char *firstName, char *lastName, char *phoneNumber) {
    if (contactCount >= MAX_CONTACTS) {
        printf("Contact list is full.\n");
        return;
    }
    strncpy(contactList[contactCount].firstName, firstName, NAME_LEN);
    strncpy(contactList[contactCount].lastName, lastName, NAME_LEN);
    strncpy(contactList[contactCount].phoneNumber, phoneNumber, PHONE_LEN);
    contactCount++;
    printf("Contact added successfully.\n");
}

void deleteContact(int index) {
    if (index < 0 || index >= contactCount) {
        printf("Invalid index.\n");
        return;
    }
    for (int i = index; i < contactCount - 1; i++) {
        contactList[i] = contactList[i + 1];
    }
    contactCount--;
    printf("Contact deleted successfully.\n");
}

void updateContact(int index, char *firstName, char *lastName, char *phoneNumber) {
    if (index < 0 || index >= contactCount) {
        printf("Invalid index.\n");
        return;
    }
    strncpy(contactList[index].firstName, firstName, NAME_LEN);
    strncpy(contactList[index].lastName, lastName, NAME_LEN);
    strncpy(contactList[index].phoneNumber, phoneNumber, PHONE_LEN);
    printf("Contact updated successfully.\n");
}

void displayContacts() {
    for (int i = 0; i < contactCount; i++) {
        printf("Contact %d: %s %s %s\n", i + 1, contactList[i].firstName, contactList[i].lastName, contactList[i].phoneNumber);
    }
}

void menu() {
    int choice;
    char firstName[NAME_LEN], lastName[NAME_LEN], phoneNumber[PHONE_LEN];
    int index;

    do {
        printf("\nMenu:\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Update Contact\n");
        printf("4. Display Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first name: ");
                scanf("%s", firstName);
                printf("Enter last name: ");
                scanf("%s", lastName);
                printf("Enter phone number: ");
                scanf("%s", phoneNumber);
                addContact(firstName, lastName, phoneNumber);
                break;
            case 2:
                printf("Enter the index of the contact to delete: ");
                scanf("%d", &index);
                deleteContact(index - 1);
                break;
            case 3:
                printf("Enter the index of the contact to update: ");
                scanf("%d", &index);
                printf("Enter new first name: ");
                scanf("%s", firstName);
                printf("Enter new last name: ");
                scanf("%s", lastName);
                printf("Enter new phone number: ");
                scanf("%s", phoneNumber);
                updateContact(index - 1, firstName, lastName, phoneNumber);
                break;
            case 4:
                displayContacts();
                break;
            case 5:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);
}

int main() {
    menu();
    return 0;
}
