# include <marks.h>
# include <iostream>
# include <iomanip>

class student_marks_2 : public student_marks {

public:
    void initialise();

    void test_zeros();

    void display_grade();

protected:
    char grade_letter;
};

void student_marks_2::initialise() {
    student_marks::initialise()
    switch (int(weighted_average + 0.5) / 10) {
        case 10:;
        case 9:;
        case 8:;
        case 7:
            grade_letter = 'A';
            break;
        case 6:
            grade_letter = 'B';
            break;
        case 5:
            grade_letter = 'C';
            break;
        case 4:
            grade_letter = 'D';
            break;
        default:
            grade_letter = 'E';
    }

    void student_marks_2::test_zeros() {
        if ((exam_mark == 0) && (practical_mark == 0)) {
            display_identities();
            std::cout << "Both marks are zero" << std::endl;
            std::cout << std::endl;
        }
        if ((exam_mark == 0) || (practical_mark == 0)) {
            display_identities();
            std::cout << "At least one mark is zero" << std::endl;
            if (exam_mark != 0)
                std::cout << "The exam mark is not zero" << std::endl;
            if (!(practical_mark == 0))
                std::cout << "The practical mark is not zero" << std::endl;
            std::cout << std::endl;
        }
    }

    void student_marks_2::display_grade() {
        display_identities();
        std::cout << "The grade is " << grade_letter << " ";
        switch (grade_letter) {
            case 'A':
                std::cout << "Excellent";
                break;
            case 'B':
                std::cout << "Very good";
                break;
            case 'C':
                std::cout << "Pass, but you ";
            default:
                std::cout << "must try harder";
        }
        std::cout << std::endl;
    }


}