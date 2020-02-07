# include <iostream>
# include <iomanip>
# include "marks2.h"

class student_marks_76 : public student_marks_2 {
public:
    void initialise();
}

void student_marks_76::initialise() {
   student_marks::initialise();
   if((exam_mark > 74) && (practical_mark > 74))
       grade_letter = 'A';
   else if ((exam_mark > 49) && (practical_mark > 49))
       grade_letter = 'B';
   else
       grade_letter = 'C';
}