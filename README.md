# The-second-largest-number
## Student Information 
- **Name**: Natnael Girma
- **Student ID**: 0425/23
- **Course**: DSA
 
## Algorithm
1. Initialize two variables, largest and secondLargest, with the smallest possible integer value (e.g., INT_MIN).
2. Iterate through the array.
3. For each element:
   - If the element is greater than largest, update secondLargest to the old largest, and then update largest to the current element.
   - If the element is less than largest but greater than secondLargest, update secondLargest.
4. Return secondLargest after iterating through the entire array.
