# Assignment 12: Implementation virtual function.
 
## Overview
 
This assignment is intended to use the virtual function that is defined in `physicalProperties.cpp` and displays the information about the area. 

## Function Definition
 
1. **File location**.
 
    `src\physcialProperties.cpp`

    `src\physcialProperties.h`

## Implementation Steps 

1. **Declare virtual void display()**
```
   virtual void display(float area);
```
 
2. **Define display() function**.
    - Make a function called display in `src/physicalProperties.cpp`.
    - Useing `std::cout` to display the information about the area.
    - Pass the floating value called `area` as a parameter to function.
    ```
    void Properties:: display(float area)
    {
        std::cout << "Area: " << area << std::endl;
    }
    ```
3. **Call to display function**
    - From `get_surface_area()` call display function.
    - Pass the value of area as in display function.

4. **Output**
    - Output will be `Area : 6`;
    