# include <marks2.h.h>
# include <iostream>
# include <iomanip>

class student_marks_2b : public student_marks_2 {

public:
    void initialise();

    void get_identities();

    void display_grade();

    void get_practical_mark();

    void get_exam_mark();

    void do_calculations();

private:
    void display_message(const char *message);

    int get_practical_component_mark(const char *title);

    int get_exam_question_mark(int question_no, int &mark);
};

void student_marks_2b::display_message(const char *message) {
    std::cout << "Well done " << student_identity
              << " you have obtained a grade "
              << grade_letter << std::endl;
    std::cout << "This is a " << message << " result"
              << std::endl;
}

void student_marks_2b::display_grade() {
    switch (grade_letter) {
        case 'A':
            display_message("superb");
            break;
        case 'B':
            display_message("very good");
            break;
        case 'C':
            display_message("reasonable");
            break;
        default:
            display_message("weak");
    }
}

int student_marks_2b::get_practical_component_mark(const char *title) {
    int mark;
    do {
        std::cout << "Enter " << title
                  << " practical mark (or 999) ";
        std::cin >> mark;
    } while (!((mark >= 0) && (mark <= 100)
               || (mark == 999)));
    return mark;
}

void student_marks_2b::get_practical_mark() {
    char terminator;
    int component_mark;
    int no_of_marks;
    int total_practical_mark = 0;
    component_mark = get_practical_component_mark("first");
    while (component_mark != 999) {
        total_practical_mark += component_mark;
        ++no_of_marks;
        component_mark = get_practical_component_mark("next");
    }
    std::cin.get(terminator);
    if (no_of_marks > 0)
        practical_mark = total_practical_mark / no_of_marks;
    else practical_mark = 0;
}

int student_marks_2b::get_exam_question_mark(int question_no, int &mark) {
    char character;
    int error_indicator = 0;
    mark = 0;
    std::cout << "Enter examination mark no. "
              << question_no << " ";
    std::cin.get(character);
    while (character != '\n') {
        if ((character >= '0') && (character <= '9')) {
            mark += 10;
            mark += character - 48;
        } else
            error_indicator = 1;
        std::cin.get(character);
    }
    if ((mark > 20) || (error_indicator == 1)) {
        mark = 0;
        return 0;
    } else return 1;
}
void student_marks_2b::get_exam_mark() {
    int question_mark;
    int valid_mark;
    exam_mark = 0;
    for (int question_number = 1; question_number <= 5; ++ question_number) {
        do {
            valid_mark = get_exam_question_mark(question_number, question_mark);
        }
        while (valid_mark == 0);
        exam_mark += question_mark;
    }
}