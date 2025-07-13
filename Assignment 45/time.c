#include <stdio.h>

// ===========================================
// 🔸 Structure: Time
// Purpose: Ek time ko represent karta hai hours, minutes, seconds ke form me
// ===========================================
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// ===========================================
// 🔸 Function: inputTime
// Purpose: User se ek time input lena
// Return: filled Time structure
// ===========================================
struct Time inputTime()
{
    struct Time t;
    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);
    return t;
}

// ===========================================
// 🔸 Function: calculateDifference
// Purpose: Do time ke beech ka difference nikalna
// Params: t1 - first time, t2 - second time
// Return: Time structure representing difference
// ===========================================
struct Time calculateDifference(struct Time t1, struct Time t2)
{
    struct Time diff;

    // Step 1: Seconds handle karna
    if (t2.seconds < t1.seconds)
    {
        t2.minutes--;
        t2.seconds += 60;
    }
    diff.seconds = t2.seconds - t1.seconds;

    // Step 2: Minutes handle karna
    if (t2.minutes < t1.minutes)
    {
        t2.hours--;
        t2.minutes += 60;
    }
    diff.minutes = t2.minutes - t1.minutes;

    // Step 3: Hours difference
    diff.hours = t2.hours - t1.hours;

    return diff;
}

// ===========================================
// 🔸 Function: displayTime
// Purpose: Time structure ko HH:MM:SS format me print karna
// Params: Time structure
// ===========================================
void displayTime(struct Time t)
{
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

// ===========================================
// 🔸 Main Function
// ===========================================
int main()
{
    struct Time startTime, endTime, difference;

    printf("Enter Start Time:\n");
    startTime = inputTime();

    printf("Enter End Time:\n");
    endTime = inputTime();

    difference = calculateDifference(startTime, endTime);

    printf("\nDifference between the two times: ");
    displayTime(difference);

    return 0;
}
