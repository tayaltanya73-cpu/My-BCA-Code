# Student Grade System Project - BCA
def show_grades():
    name = input("Enter Student Name: ")
    marks = float(input("Enter marks obtained (0-100): "))

    if marks >= 90:
        grade = "A+ (Excellent)"
    elif marks >= 75:
        grade = "A (Very Good)"
    elif marks >= 60:
        grade = "B (Good)"
    elif marks >= 33:
        grade = "C (Pass)"
    else:
        grade = "F (Fail)"

    print(f"\nStudent: {name}")
    print(f"Result: {grade}")

show_grades()
