/*
Library Book Overdue Fine Calculator  

Author: Mary Muthoni
Reg No: BSE-05-0185/2024
Date: 24/1/2025
Version 1
*/

#include <iostream>  
#include <string>  
#include <chrono>  

using namespace std;  

// Function to calculate the number of days between two dates  
int calculateDays(int dueDate, int returnDate) {  
    return returnDate - dueDate;  
}  

// Function to calculate the fine based on overdue days  
int calculateFine(int daysOverdue) {  
    if (daysOverdue >= 1 && daysOverdue <= 7) {  
        return daysOverdue * 20;  // Ksh. 20 per day for 1-7 days  
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {  
        return daysOverdue * 50;  // Ksh. 50 per day for 8-14 days  
    } else if (daysOverdue > 14) {  
        return daysOverdue * 100; // Ksh. 100 per day for 15 days or more  
    } else {  
        return 0; // No fine if not overdue  
    }  
}  

int main() {  
    string bookID;  
    int dueDate, returnDate;  

    // Taking user inputs  
    cout << "Enter Book ID: ";  
    cin >> bookID;  
    cout << "Enter Due Date : ";  
    cin >> dueDate; 
    cout << "Enter Return Date : ";  
    cin >> returnDate;
    // Calculate days overdue  
    int daysOverdue = calculateDays(dueDate, returnDate);  
    
    // Calculate fine  
    int fine = calculateFine(daysOverdue);  

    // Display results  
    cout << "\nLibrary Book Report:\n";  
    cout << "-----------------------------------\n";  
    cout << "Book ID: " << bookID << endl;  
    cout << "Due Date: " << dueDate << endl;  
    cout << "Return Date: " << returnDate << endl;  
    cout << "Days Overdue: " << daysOverdue << endl;  
    cout << "Fine: Ksh. " << fine << endl;  

    return 0;
}