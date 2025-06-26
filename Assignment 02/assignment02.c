#include <stdio.h>

/**
 * Function: averageCalculate
 * Purpose : 3 positive integers ka average calculate karta hai
 * @return  Average (int), ya -1 agar input invalid ho
 */
int averageCalculate() {
    int a, b, c;

    printf("Enter 3 positive numbers for calculating average: ");
    scanf("%d %d %d", &a, &b, &c);

    // Validation: sab numbers positive hone chahiye
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Error: All numbers must be positive integers.\n");
        return -1;
    }

    return (a + b + c) / 3;
}


/**
 * Function: circumferenceOfCircle
 * Purpose : Circle ka circumference calculate karta hai using 2 * π * r
 * @return  Circumference (float), ya -1 agar radius invalid ho
 */
float circumferenceOfCircle() {
    float radius;

    printf("Enter positive radius of the circle: ");
    scanf("%f", &radius);

    // Validation
    if (radius <= 0) {
        printf("Error: Radius must be a positive value.\n");
        return -1;
    }

    return 2 * 3.14f * radius;
}


/**
 * Function: simpleInterest
 * Purpose : SI = (P × R × T) / 100 formula ka use karke simple interest calculate karta hai
 * @return  Interest amount (double), ya -1 agar input invalid ho
 */
double simpleInterest() {
    double principal, rate, time;

    printf("Enter Principal, Rate and Time (all must be positive): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    // Validation
    if (principal <= 0 || rate <= 0 || time <= 0) {
        printf("Error: Principal, Rate and Time must be positive.\n");
        return -1;
    }

    return (principal * rate * time) / 100;
}


/**
 * Function: volumeOfCuboid
 * Purpose : Volume = length × width × height
 * @return  Volume (float), ya -1 agar input invalid ho
 */
float volumeOfCuboid() {
    float length, width, height;

    printf("Enter Length, Width, Height of cuboid (positive values): ");
    scanf("%f %f %f", &length, &width, &height);

    // Validation
    if (length <= 0 || width <= 0 || height <= 0) {
        printf("Error: All dimensions must be positive.\n");
        return -1;
    }

    return length * width * height;
}


/**
 * Function: calculateLossProfit
 * Purpose : 12 bananas ke cost & selling price se, 25 bananas ka profit/loss calculate karta hai
 * Output  : Proper message deta hai profit/loss ka
 */
void calculateLossProfit() {
    int costPrice12, sellingPrice12;

    printf("Enter the cost price of 12 bananas: ");
    scanf("%d", &costPrice12);

    printf("Enter the selling price of 12 bananas: ");
    scanf("%d", &sellingPrice12);

    // Validation
    if (costPrice12 <= 0 || sellingPrice12 <= 0) {
        printf("Error: Prices must be positive integers.\n");
        return;
    }

    // 1 banana ka price
    int cpPerBanana = costPrice12 / 12;
    int spPerBanana = sellingPrice12 / 12;

    int profitLoss = (spPerBanana - cpPerBanana) * 25;

    // Output based on value
    if (profitLoss > 0) {
        printf("Profit: %d rupees on 25 bananas.\n", profitLoss);
    } else if (profitLoss < 0) {
        printf("Loss: %d rupees on 25 bananas.\n", -profitLoss);
    } else {
        printf("No Profit, No Loss on 25 bananas.\n");
    }
}


// ===============================
//            Main Function
// ===============================
int main() {
    int avg = averageCalculate();
    if (avg != -1)
        printf("Average of 3 numbers = %d\n", avg);

    float circ = circumferenceOfCircle();
    if (circ != -1)
        printf("Circumference of Circle = %.2f\n", circ);

    double si = simpleInterest();
    if (si != -1)
        printf("Simple Interest = ₹%.2lf\n", si);

    float vol = volumeOfCuboid();
    if (vol != -1)
        printf("Volume of Cuboid = %.2f\n", vol);

    calculateLossProfit();

    return 0;
}
