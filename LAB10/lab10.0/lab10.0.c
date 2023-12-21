#include <stdio.h>
#include <string.h>


// Structure to represent contact information
struct Contact {
    char firstName[30];
    char lastName[30];
    char phoneNumber[11];
    char emailAddress[50];
};


int addContact(struct Contact [], int);
void displayContacts(struct Contact [], int);

int main() {
    struct Contact addressBook[100];  // Maximum capacity of 100 contacts
    int contactCount = 0;
    int choice;

    do {
        // Display menu
        printf("\nAddress Book Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Call function to add contact
                contactCount = addContact(addressBook, contactCount) == 1 ? contactCount + 1 : contactCount;

                break;
            case 2:
                // Call function to display contacts
                displayContacts(addressBook, contactCount);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}


// Function to add a new contact to the address book
int addContact(struct Contact addressBook[], int contactCount) {
    if (contactCount < 100) {
        struct Contact newContact;

        printf("Enter First Name: ");
        scanf("%s", newContact.firstName);

        printf("Enter Last Name: ");
        scanf("%s", newContact.lastName);

        printf("Enter Phone Number: ");
        scanf("%s", newContact.phoneNumber);

        printf("Enter Email Address: ");
        scanf("%s", newContact.emailAddress);

        // Add the new contact to the address book
        addressBook[contactCount] = newContact;

        printf("Contact added successfully!\n");
        return 1;
    } else {
        printf("Address book is full. Cannot add more contacts.\n");
        return 0;
    }
}

// Function to display the list of contacts in the address book
void displayContacts(struct Contact addressBook[], int contactCount) {
    if (contactCount > 0) {
        printf("\nContacts in the Address Book:\n");
        printf("%-15s %-15s %-15s %-30s\n", "First Name", "Last Name", "Phone Number", "Email Address");

        for (int i = 0; i < contactCount; i++) {
            printf("%-15s %-15s %-15s %-30s\n",
                   addressBook[i].firstName,
                   addressBook[i].lastName,
                   addressBook[i].phoneNumber,
                   addressBook[i].emailAddress);
        }
    } else {
        printf("Address book is empty. No contacts to display.\n");
    }
}
