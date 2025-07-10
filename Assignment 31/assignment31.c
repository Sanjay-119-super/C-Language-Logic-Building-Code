#include <stdio.h>

/*
    Function Name: rotate
    Purpose: Array ko d positions tak left me rotate karna
    Parameters:
        nums[] → Input array jisko rotate karna hai
        size   → Total number of elements array me
        d      → Kitni baar left rotate karna hai

    Internal Working:
        - Ek rotation ka matlab: pehla element hatao aur last me daal do
        - Har rotation ke liye:
            1. First element ko temp me store karo
            2. Baaki elements ko ek-ek place left me shift karo
            3. Last index pe temp value daal do

    Real-World Use Case:
        - Playlist me next song play karne ke liye
        - Operating system me Round-Robin process scheduling
        - UI sliders ya rotating banners ke liye
*/
void rotate(int nums[], int size, int d)
{
    for(int rotationCounter = 0; rotationCounter < d; rotationCounter++)
    {
        // rotationCounter → count karta hai kitni baar rotate ho chuka
        int temp = nums[0];  // temp → pehla element ko temporarily hold karta hai

        // Array ke sab elements ko ek step left me shift karo
        for(int shiftElement = 0; shiftElement < size - 1; shiftElement++)
        {
            nums[shiftElement] = nums[shiftElement + 1];
        }

        nums[size - 1] = temp;  // temp ko last position pe daal diya
    }

    // Final rotated array print karo
    printf("After rotation: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

/*
    Function Name: findAdjecentDuplicate
    Purpose: Array me pehla aisa element dhoondhna jo adjacent (side-by-side) repeat ho raha ho
    Parameters:
        nums[] → Input array
        size   → Kitne elements array me hain

    Internal Working:
        - Loop chalao 0 se size-2 tak (kyunki hum arr[i] aur arr[i+1] compare kar rahe hain)
        - Agar koi 2 consecutive elements same mil jaaye, to return karo unki value

    Real-World Use Case:
        - Agar user ne accidentally same form field 2 baar bhara
        - Log file me same event back-to-back ho raha ho
        - Sensor ya signal processing me glitch detect karna
*/
int findAdjecentDuplicate(int nums[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        // i → current index
        // nums[i] aur nums[i+1] ko compare kar rahe hain
        if(nums[i] == nums[i + 1])
        {
            return nums[i];  // Pehla adjacent duplicate mil gaya
        }
    }

    return -1;  // Agar koi adjacent duplicate nahi mila
}

int main()
{
    // Use Case 1: Rotate Array Example

    int size1 = 5;  // size1 → array ka size
    int d = 2;      // d → kitni baar rotate karna hai
    int arr1[] = {32, 29, 40, 12, 70};  // arr1 → input array

    // Rotation se pehle array print karte hain
    printf("Before rotation: ");
    for(int i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    rotate(arr1, size1, d);  // Array ko d baar left rotate karo

    printf("\n");

    // Use Case 2: Find Adjacent Duplicate Example

    int size2 = 6;  // size2 → dusra array ka size
    int arr2[] = {10, 20, 30, 30, 40, 50};  // arr2 → input array for checking duplicates

    // Function ko call karke result store kar rahe hain
    int foundDuplicate = findAdjecentDuplicate(arr2, size2);  // foundDuplicate → result hold karega

    // Result print
    if (foundDuplicate != -1)
    {
        printf("First adjacent duplicate value: %d\n", foundDuplicate);
    }
    else
    {
        printf("No adjacent duplicates found\n");
    }

    return 0;
}
