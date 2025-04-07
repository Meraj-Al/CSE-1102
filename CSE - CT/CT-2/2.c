Q2. C Program to Read Date in Two Formats
📝 Given Date: 12th March 2025

We need to display it in both dd/mm/yyyy and dd-mm-yyyy format.

c
Copy
Edit
#include <stdio.h>

int main() {
    int day = 12, year = 2025;
    char month[] = "March";

    // Display in format dd/mm/yyyy
    printf("Date in dd/mm/yyyy format: %02d/03/%d\n", day, year);

    // Display in format dd-mm-yyyy
    printf("Date in dd-mm-yyyy format: %02d-03-%d\n", day, year);

    return 0;
}
✅ Explanation:

We used 03 as the month number for March.

%02d ensures day is printed as 2-digit with leading zero if needed.


