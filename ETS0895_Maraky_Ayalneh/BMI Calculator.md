
flowchart TD
    ID-1[Start] --> ID-2[Enter weight (w) in kg]
    ID-2 --> ID-3[Enter height (h) in meters]
    ID-3 --> ID-4[Calculate BMI = w / (h * h)]
    ID-4 --> ID-5{Is BMI < 18.5?}
