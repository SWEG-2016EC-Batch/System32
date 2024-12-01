# Problem Analysis

The program calculates the total distance an automobile can travel without refueling based on the fuel tank capacity and the car's fuel efficiency. This helps the user understand how far the vehicle can be driven on a full tank.

## 1. **Input:**
   - **tankCapacity**: The capacity of the fuel tank in gallons (input by the user).
   - **miles**: The number of miles the car can be driven per gallon (input by the user).

## 2. **Process:**
   - The program calculates the total distance that the automobile can travel without refueling using the formula:
     ```
     totalDistance = tankCapacity * miles
     ```
   - This step involves multiplying the fuel tank capacity by the fuel efficiency (miles per gallon).

## 3. **Output:**
   - **totalDistance**: The calculated number of miles the automobile can be driven on a full tank, displayed to the user with a message:
     ```
     "The automobile can be driven <totalDistance> miles without refueling."
     ```\
# Pseudocode
1. **Start**
2. **Declare** `tankCapacity`, `miles`, `totalDistance` as float
3. **Output** "Enter the capacity of the fuel tank in gallons:"
4. **Input** `tankCapacity`
5. **Output** "Enter the miles per gallon the automobile can be driven:"
6. **Input** `miles`
7. **Calculate** `totalDistance` as `tankCapacity * miles`
8. **Output** "The automobile can be driven", `totalDistance`, "miles without refueling."
9. **End**
    ```mermaid
flowchart TD
    id1([Start]) --> id2[/Enter the capacity of the fuel tank in gallons/]
    id2 --> id3[/Enter the miles per gallon the automobile can be driven/]
    id3 --> id4[Process "Calculate totalDistance = tankCapacity * miles"]
    id4 --> id5[/Display "The automobile can be driven totalDistance miles without refueling"/]
    id5 --> id6([End])
```
