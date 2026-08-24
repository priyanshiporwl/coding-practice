#include <stdio.h>

int main() {

    int lostId[50], foundId[50];
    int lostItem[50], foundItem[50];
    int lostLocation[50], foundLocation[50];

    int lostCount = 0;
    int foundCount = 0;

    int choice;
    int id, item, location;
    int i, searchId, found;

    do {

        
        printf("       LOST & FOUND MANAGEMENT\n");
        

        printf("1. Report Lost Item\n");
        printf("2. Report Found Item\n");
        printf("3. Display Lost Items\n");
        printf("4. Display Found Items\n");
        printf("5. Search Lost Item\n");
        printf("6. Search Found Item\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

            // REPORT LOST ITEM
            case 1:

                if(lostCount >= 50) {
                    printf("Lost item storage is full!\n");
                    break;
                }

                printf("\nEnter Item ID: ");
                scanf("%d", &id);

                printf("Enter Item Number: ");
                printf("\n1. Wallet");
                printf("\n2. Mobile");
                printf("\n3. Bag");
                printf("\n4. Bottle");
                printf("\n5. Other");

                printf("\nEnter choice: ");
                scanf("%d", &item);

                printf("\nEnter Location Number: ");
                printf("\n1. Library");
                printf("\n2. Canteen");
                printf("\n3. Classroom");
                printf("\n4. Playground");
                printf("\n5. Other");

                printf("\nEnter choice: ");
                scanf("%d", &location);

                lostId[lostCount] = id;
                lostItem[lostCount] = item;
                lostLocation[lostCount] = location;

                lostCount++;

                printf("\nLost item reported successfully!\n");

                break;


            // REPORT FOUND ITEM
            case 2:

                if(foundCount >= 50) {
                    printf("Found item storage is full!\n");
                    break;
                }

                printf("\nEnter Item ID: ");
                scanf("%d", &id);

                printf("Enter Item Number: ");
                printf("\n1. Wallet");
                printf("\n2. Mobile");
                printf("\n3. Bag");
                printf("\n4. Bottle");
                printf("\n5. Other");

                printf("\nEnter choice: ");
                scanf("%d", &item);

                printf("\nEnter Location Number: ");
                printf("\n1. Library");
                printf("\n2. Canteen");
                printf("\n3. Classroom");
                printf("\n4. Playground");
                printf("\n5. Other");

                printf("\nEnter choice: ");
                scanf("%d", &location);

                foundId[foundCount] = id;
                foundItem[foundCount] = item;
                foundLocation[foundCount] = location;

                foundCount++;

                printf("\nFound item added successfully!\n");

                break;


            // DISPLAY LOST ITEMS
            case 3:

                printf("\n========== LOST ITEMS ==========\n");

                if(lostCount == 0) {
                    printf("No lost items available.\n");
                }
                else {

                    for(i = 0; i < lostCount; i++) {

                        printf("\nItem ID: %d", lostId[i]);

                        printf("\nItem: ");

                        if(lostItem[i] == 1)
                            printf("Wallet");
                        else if(lostItem[i] == 2)
                            printf("Mobile");
                        else if(lostItem[i] == 3)
                            printf("Bag");
                        else if(lostItem[i] == 4)
                            printf("Bottle");
                        else
                            printf("Other");

                        printf("\nLocation: ");

                        if(lostLocation[i] == 1)
                            printf("Library");
                        else if(lostLocation[i] == 2)
                            printf("Canteen");
                        else if(lostLocation[i] == 3)
                            printf("Classroom");
                        else if(lostLocation[i] == 4)
                            printf("Playground");
                        else
                            printf("Other");

                        printf("\n");
                    }
                }

                break;


            // DISPLAY FOUND ITEMS
            case 4:

                printf("\n========== FOUND ITEMS ==========\n");

                if(foundCount == 0) {
                    printf("No found items available.\n");
                }
                else {

                    for(i = 0; i < foundCount; i++) {

                        printf("\nItem ID: %d", foundId[i]);

                        printf("\nItem: ");

                        if(foundItem[i] == 1)
                            printf("Wallet");
                        else if(foundItem[i] == 2)
                            printf("Mobile");
                        else if(foundItem[i] == 3)
                            printf("Bag");
                        else if(foundItem[i] == 4)
                            printf("Bottle");
                        else
                            printf("Other");

                        printf("\nLocation: ");

                        if(foundLocation[i] == 1)
                            printf("Library");
                        else if(foundLocation[i] == 2)
                            printf("Canteen");
                        else if(foundLocation[i] == 3)
                            printf("Classroom");
                        else if(foundLocation[i] == 4)
                            printf("Playground");
                        else
                            printf("Other");

                        printf("\n");
                    }
                }

                break;


            // SEARCH LOST ITEM
            case 5:

                printf("\nEnter Lost Item ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < lostCount; i++) {

                    if(lostId[i] == searchId) {

                        printf("\nLost item found!");

                        printf("\nItem ID: %d", lostId[i]);

                        printf("\nItem: ");

                        if(lostItem[i] == 1)
                            printf("Wallet");
                        else if(lostItem[i] == 2)
                            printf("Mobile");
                        else if(lostItem[i] == 3)
                            printf("Bag");
                        else if(lostItem[i] == 4)
                            printf("Bottle");
                        else
                            printf("Other");

                        printf("\n");

                        found = 1;
                    }
                }

                if(found == 0) {
                    printf("\nLost item not found.\n");
                }

                break;


            // SEARCH FOUND ITEM
            case 6:

                printf("\nEnter Found Item ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < foundCount; i++) {

                    if(foundId[i] == searchId) {

                        printf("\nFound item exists!");

                        printf("\nItem ID: %d", foundId[i]);

                        printf("\nItem: ");

                        if(foundItem[i] == 1)
                            printf("Wallet");
                        else if(foundItem[i] == 2)
                            printf("Mobile");
                        else if(foundItem[i] == 3)
                            printf("Bag");
                        else if(foundItem[i] == 4)
                            printf("Bottle");
                        else
                            printf("Other");

                        printf("\n");

                        found = 1;
                    }
                }

                if(found == 0) {
                    printf("\nFound item not found.\n");
                }

                break;


            // EXIT
            case 7:

                printf("\nThank you for using Lost & Found Management System!\n");

                break;


            default:

                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 7);


    return 0;
}
