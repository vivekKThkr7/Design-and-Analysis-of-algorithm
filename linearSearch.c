/*
WAP in C to implement simple linear search algorithm to find the position(s) of a given elements(key) in a array.
*/

#include<stdio.h> //standard I/O library, which is necessary for using function like printf, scanf.

void linear_search(int a[], int n, int key){ //here a function named "linear_search" is declared, which takes three parameters.
/*
a[] : an array of integers
n : the number of elements in the array
key : the element to be searched in the array.
*/
    int i, count=0; // 'i' is used as a loop variable and 'count' will keeep track of the numbers of occurrences of the key in the array

    for(i=0;i<n;i++){ //starting for loop from o to n-1.

        if(a[i]==key){ // checks if the current element of the array (a[i]) is equal to the key being searched for.

            printf("The element is found at %d position\n", i+1); // if condition is true print that the element [i] is found at a specific position.

            count+=1; // increment by 1. 
        }
    }
    if(count==0) // checks if the 'count' variable is still 0, meaning that the key was not found in the array.

        printf("\nThe element is not present in the array"); // print the output 
}
/*
starts the main function 
declare integer variable i,n,key. 
Initializes 'n' with the value 6 and declares an array 'a' with 10 elements, initialize it with specific values
*/
int main(){
    int i, n, key;
    n=6; 
    int a[10]={12, 44,32, 18, 4, 10};

    key =18; // sets the value of 'key' to 18.

    linear_search(a,n,key); //calls the 'linear_search' function with the array 'a' the size n, and the key '18'

    key=23;
    linear_search(a,n,key); //calls the 'linear_search' function with the array 'a' the size n, and the key '18'

    return 0;
}