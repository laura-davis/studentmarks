# include <iostream>
# include <iomanip>

class student_marks {
public:
    void initialise();

    void display_identities();

    void display_marks();

    void display_sum();

    void display_weighted_average();

protected:
    char student_identity[9];
    char module_identity[6];
    int exam_mark;
    int practical_mark;
    int sum;
    float weighted_average;
};

void student_marks::initialise() {
    const float exam_weight = 0.75;
    const float practical_weight = 0.25;
    char terminator;
    std::cout << "Enter module identity code ";
    std::cin.get(module_identity, 6);
    std::cin.get(terminator);
    std::cout << "Enter student identity code ";
    std::cin.get(student_identity, 9);
    std::cout << "Enter examination mark ";
    std::cin >> exam_mark;
    std::cout << "Enter practical mark ";
    std::cin >> practical_mark;
    std::cin.get(terminator);
    sum = exam_mark * exam_weight + practical_mark * practical_weight;
}

void student_marks::display_identities() {
    std::cout << "Student identity: " << student_identity
              << " for Module: " << module_identity << std::endl;
}

void student_marks::display_marks() {
    std::cout << "Exam mark is " << exam_mark <<
              " Practical mark is " << practical_mark << std::endl;
}

void student_marks::display_sum() {
    display_identities();
    display_marks();
    std::cout << "The sum of the marks is " << sum << std::endl;
}

void student_marks::display_weighted_average() {
    display_identities();
    display_marks();
    std::cout << "The weighted average of the marks is "
              << std::setprecision(1) << weighted_average << std::endl;
}