// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_SIZE 100


// int data[MAX_SIZE];
// int next[MAX_SIZE];
// int freeList = 0;


// void initializeList() {
//     for (int i = 0; i < MAX_SIZE-1;i++) {
//         next[i] = i + 1;
//     }
//     next[MAX_SIZE - 1] = -1;  
// }



// void displayList() {
//     int current = 0;
//     printf("Linked List: ");

//     for(current;current<MAX_SIZE-1;current++){
//         printf("%d\t",data[current]);
//     }
// }


// void insertEnd(int value) {
//     if (freeList == -1) {
//         printf("Error: Linked list is full, cannot insert more elements.\n");
//         return;
//     }

//     int newNode = freeList;
//     //newnode =0
//     freeList = next[freeList];
//     // next[0]=1

//     data[newNode] = value;
//     // data[0]=4;//pass gareko value so current value is 4 if i insert it 
//     next[newNode] = -1;
//     // next[0]=-1


//     printf("Element %d inserted at the end.\n", value);
// }

// void deleteNode(int value) {
//     int current = 0, prev = -1;

//     while (current != -1 && data[current] != value) {
//         prev = current;
//         //prev=0
//         current = next[current];
//         //current=-1
//         //when i send similar value this will not work
//     }

//     if (current == -1) {
//         printf("Element %d not found in the list.\n", value);
//         return;
//     }

//     if (prev == -1) {
//         freeList = next[current];
//         // freelist=-1
//     } else {
//         next[prev] = next[current];
//     }

//     next[current] = freeList;
//     // next[0]=-1;
//     freeList = current;
//     //0

//     printf("Element %d deleted.\n", value);
// }


// int main() {
//     initializeList();
//     int choice, value;

//     do {
//         printf("1.Insert 2.Delete 3.dispaly 4.exit");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter the element to insert: ");
//                 scanf("%d", &value);
//                 insertEnd(value);
//                 break;
//             case 2:
//                 printf("Enter the element to delete: ");
//                 scanf("%d", &value);
//                 deleteNode(value);
//                 break;
//             case 3:
//                 displayList();
//                 break;
//             case 4:
//                 printf("Exiting the program.\n");
//                 break;
//             default:
//                 printf("Invalid choice! Please enter a valid option.\n");
//         }
//     } while (choice != 4);

//     return 0;
// }
