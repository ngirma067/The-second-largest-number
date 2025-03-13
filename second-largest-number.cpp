#include <iostream>
#include <climits> // For INT_MIN

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        throw std::invalid_argument("No second largest element found.");
    }

    return secondLargest;
}

int main() {
    try {
        int arr[] = {10, 20, 30, 40, 50};
        int size = sizeof(arr) / sizeof(arr[0]);
        int secondLargest = findSecondLargest(arr, size);
        std::cout << "The second largest number in the array is: " << secondLargest << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}