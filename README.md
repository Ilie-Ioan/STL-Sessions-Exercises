# Session Exercises

## Overview
This repository provides a collection of exercises designed to help you understand and apply the C++ Standard Template Library (STL). The exercises are organized into study sessions, focusing on different STL containers and algorithms. Each session includes several problems aimed at reinforcing essential STL concepts.

## Structure
The exercises are grouped into the following categories:

### Session 1: 2 hours of work
**Vector and List**

1. **Exercise 1: Insertion and Deletion in Vector**
   - Create a `std::vector<int>` and insert integers from 1 to 20.
   - Write a function that iterates through the vector and removes all even elements.
   - Display the vector before and after deletion.

2. **Exercise 2: Sorting and Searching in Vector**
   - Create a `std::vector<int>` with 10 elements initialized with values read from the keyboard.
   - Sort the vector in descending order using `std::sort` and display it.
   - Search for a specific number (entered by the user) in the vector using `std::binary_search`.
   - Display a message indicating whether the number was found or not.

3. **Exercise 3: Finding Maximum in Vector**
   - Create a `std::vector<int>` with 10 random integers.
   - Write a function to find and display the maximum value in the vector.

4. **Exercise 4: Insertion and Display in List**
   - Create a `std::list<std::string>` and insert at least 5 names of friends.
   - Display the list of names in the order they were added using an iterator.
   - Display the list of names in reverse order using the reverse function or a `reverse_iterator`.

5. **Exercise 5: Merging Two Lists**
   - Create two `std::list<int>` and populate them with distinct integers.
   - Write a function to merge both lists into a third list and display the result.

6. **Exercise 6: Removing Duplicates from List**
   - Create a `std::list<int>` with some duplicate integers.
   - Write a function to remove duplicates from the list and display the cleaned list.

**Break: 30 minutes**

### Session 2: 2 hours of work
**Set and Map**

7. **Exercise 7: Set Operations**
   - Create two sets (`std::set<int>`) and add some integers to each.
     - Set 1: contains numbers {1, 2, 3, 4, 5, 6}
     - Set 2: contains numbers {4, 5, 6, 7, 8, 9}
   - Using `std::set_intersection` and `std::set_union`, find the intersection and union of the two sets.
   - Display the results.

8. **Exercise 8: Duplicate Check in Set**
   - Create a `std::set<int>`.
   - Add elements from a list that contains duplicate values (e.g., {1, 2, 3, 2, 1, 4, 5}).
   - Display the set and note that duplicates are automatically eliminated.

9. **Exercise 9: Using Map**
   - Create a `std::map<std::string, float>`, where the key is a student's name and the value is their average.
   - Insert at least 5 different (name, average) pairs.
   - Display all pairs ordered alphabetically by name.

10. **Exercise 10: Search and Update in Map**
    - Search for a specific student's name in the map (name entered by the user).
    - If the student exists in the map, update their average with a new value.
    - If the student does not exist, add a new pair to the map with the student's name and respective average.
    - Display the map after updating.

**Break: 30 minutes**

### Session 3: 1 hour of work
**Deque and STL Algorithms**

11. **Exercise 11: Implement Double-Ended Queue with Deque**
    - Create a `std::deque<int>`.
    - Insert elements at both the beginning and the end of the deque using `push_front` and `push_back` (e.g., insert 10 and 20 at the beginning, and 30 and 40 at the end).
    - Remove elements from both the front and the back using `pop_front` and `pop_back`.
    - Display the contents of the deque after each operation.

12. **Exercise 12: Transformation and Calculation**
    - Create a `std::vector<int>` and initialize it with values between 1 and 10.
    - Use the `std::transform` algorithm to increase each element of the vector by 5.
    - Display the transformed vector.
    - Use `std::accumulate` to calculate the sum of all elements in the vector and display the result.

13. **Exercise 13: Implement Priority Queue**
    - Create a `std::priority_queue<int>`.
    - Insert random elements into the priority queue (e.g., 10, 5, 20, 15).
    - Extract and display elements from the priority queue until it is empty (the element with the highest priority is extracted first).

## How to Use
1. Clone the repository:
    ```bash
    git clone https://github.com/Ilie-Ioan/Session-Exercises.git
    ```
2. Navigate to the session folder:
    ```bash
    cd Session-Exercises/sessions
    ```
3. Follow the instructions provided in the exercises.
4. Implement your solution in your preferred IDE or text editor.

## Contribution
Feel free to contribute by:
- Adding more exercises or challenges.
- Providing alternative solutions to existing problems.
- Reporting any issues or improvements.

## License
This repository is licensed under the MIT License.

---

Happy coding! 😄
