# Flowchart
``` mermaid
flowchart TD
    A[Start] --> B[Enter weight (w) in kg]
    B --> C[Enter height (h) in meters]
    C --> D[Calculate BMI = w / (h * h)]
    D --> E{Is BMI < 18.5?}
    E -->|Yes| F[Display "Underweight"]
    E -->|No| G{Is BMI >= 18.5 and BMI < 24.9?}
    G -->|Yes| H[Display "Normal weight"]
    G -->|No| I[Display "Overweight"]
    F --> J[Ask if another person (Y/N)]
    H --> J
    I --> J
    J -->|Yes| B
    J -->|No| K[End]
