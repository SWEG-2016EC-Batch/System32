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
2. Initialize a variable for fuel tank capacity (`capacityGallons`).
3. Initialize a variable for miles per gallon (`milesPerGallon`).
4. Prompt the user to enter the fuel tank capacity and read `capacityGallons`.
5. Prompt the user to enter the miles per gallon and read `milesPerGallon`.
6. Calculate `totalMiles` using the formula: 
   \[
   \text{totalMiles} = \text{capacityGallons} \times \text{milesPerGallon}
   \]
7. Display the total miles using the message: "The automobile can be driven X miles without refueling."
8. End the program.

## Pseudocode
START
DECLARE capacityGallons AS FLOAT
DECLARE milesPerGallon AS FLOAT
DECLARE totalMiles AS FLOAT



PROMPT "Enter the capacity of the fuel tank in gallons:"
READ capacityGallons

PROMPT "Enter the miles per gallon (MPG):"
READ milesPerGallon

totalMiles = capacityGallons * milesPerGallon

PRINT "The automobile can be driven", totalMiles, "miles without refueling."
END
