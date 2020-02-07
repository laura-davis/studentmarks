# include <marks.h>
# include <iostream>
# include <iomanip>

class student_marks_1 : public student_marks {
public:
    void test_same_mark();

    void test_first_class_mark();

    void test_marks();
};

void student_marks_1::initialise() {
    display_identities();
    if (exam_mark == practical_mark) {
        std::cout << "The marks are the same";
        std::cout << " both are " << exam_mark << std::endl;
    } else if (exam_mark > practical_mark) {
        std::cout << "The exam mark is better" << endl;
        std::cout << "The exam mark is " << exam_mark;
        std::cout << " the practical mark is " << practical_mark << std::endl;
    } else {
        std::cout << " The practical mark is better" << std::endl;
        std::cout << " the exam mark is " << exam_mark << std::endl;
    }
    std::cout << std::endl;
}

void student_marks_1::test_same_mark() {
    display_identities();
    display_marks();
    if (exam_mark == practical_mark)
        std::cout << "The marks are the same" << std::endl;
    std::cout << std::endl;
}

void student_marks_1::test_first_class_mark() {
    display_identities();
    display_marks();
    if (exam_mark >= 70)
        std::cout << "First class exam mark" << std::endl;
    else
        std::cout << "Not a first class exam mark" << std::endl;
    std::cout << std::endl;
}

void student_marks_1::test_marks() {
    display_identities();
    display_marks();
    if (exam_mark == practical_mark)
        std::cout << "The marks are the same" << std::endl;
    else if (exam_mark > practical_mark)
        std::cout << "Exam mark is better" << std::endl;
    else
        std::cout << "Practical mark is better" << std::endl;
    std::cout << std::endl;
}

void student_marks_1::test_marks() {
    display_identities();
    if (exam_mark == practical_mark) {
        std::cout << "The marks are the same";
        std::cout << " both are " << exam_mark << std::endl;
    } else if (exam_mark > practical_mark) {
        std::cout << "The exam mark is better" << std::endl;
        std::cout << "The exam mark is " << exam_mark;
        std::cout << " the practical mark is " << practical_mark << std::endl;
    } else {
        std::cout << "The practical mark is better" << std::endl;
        std::cout << "The practical mark is " << practical_mark;
        std::cout << " the exam mark is " << exam_mark << std::endl;
    }
    std::cout << std::endl;
}