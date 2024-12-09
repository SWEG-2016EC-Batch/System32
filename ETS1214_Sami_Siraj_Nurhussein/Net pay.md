# Flowchart
``` mermaid
graph TD
    A[Start] --> B[Input basic salary, worked hours, bonus rate]
    B --> C{Worked hours > 40?}
    C -->|Yes| D[Input overtime bonus rate per hour]
    C -->|No| E[Input tax rate]
    D --> E
    E --> F[Calculate gross pay]
    F --> G{Worked hours > 40?}
    G -->|Yes| H[Add overtime bonus to gross pay]
    G -->|No| I[Calculate pension deduction]
    H --> I
    I --> J[Calculate tax deduction]
    J --> K[Calculate net pay]
    K --> L[Output net pay]
    L --> M[End]

```
