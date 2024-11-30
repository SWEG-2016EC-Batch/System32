# Automobile Fuel Tank Mileage Calculator

## Problem Analysis
**Goal**: To create a program that calculates how many miles an automobile can be driven without refueling based on the fuel tank capacity and miles per gallon (MPG).

### Inputs
- Capacity of the fuel tank (in gallons).
- Miles per gallon (MPG) that the automobile can drive.

### Processing
1. Prompt the user to enter the capacity of the fuel tank in gallons.
2. Prompt the user to enter the miles per gallon (MPG).
3. Calculate the total miles that can be driven using the formula:
   \[
   \text{Total Miles} = \text{Capacity Gallons} \times \text{Miles Per Gallon}
   \]

### Outputs
- Display the total number of miles the automobile can be driven without refueling.

## Algorithm
1. Start the program.
2. Initialize variables for fuel tank capacity and miles per gallon.
3. Prompt the user to enter the fuel tank capacity.
4. Prompt the user to enter the miles per gallon.
5. Calculate the total miles that can be driven.
6. Display the total miles.
7. End.
##Pseudocode
START
    DECLARE capacityGallons AS FLOAT
    DECLARE milesPerGallon AS FLOAT

    PROMPT "Enter the capacity of the fuel tank in gallons:"
    READ capacityGallons

    PROMPT "Enter the miles per gallon (MPG):"
    READ milesPerGallon

    totalMiles = capacityGallons * milesPerGallon

    PRINT "The automobile can be driven", totalMiles, "miles without refueling."

END
