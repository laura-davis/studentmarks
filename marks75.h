# include <iostream>
# include <iomanip>
# include "marks2.h"

class student_marks_75 : public student_marks_2 {
public:
    void display_average();
}

void student_marks_75::display_average() {
    if (sum != 0)
        std::cout << "Average mark is " << sum / 2 << std::endl;
    else
        std::cout << "Sum of marks is zero" << std::endl;
}