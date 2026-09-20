#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int mark;
};

int main() {
    int count = 0;
    if (!(std::cin >> count) || count < 1 || count > 100) {
        std::cout << "Invalid student count\n";
        return 1;
    }
    std::vector<Student> students;
    int total = 0, passing = 0;
    for (int i = 0; i < count; ++i) {
        Student s{};
        if (!(std::cin >> s.name >> s.mark) ||
            s.mark < 0 || s.mark > 100) {
            std::cout << "Invalid student record\n";
            return 1;
        }
        total += s.mark;
        if (s.mark >= 50) ++passing;
        students.push_back(s);
    }
    std::sort(students.begin(), students.end(),
              [](const Student& a, const Student& b) {
                  if (a.mark != b.mark) return a.mark > b.mark;
                  return a.name < b.name;
              });
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Mean = " << double(total) / count << '\n';
    std::cout << "Pass count = " << passing << '\n';
    std::cout << "Highest = " << students.front().name << ' '
              << students.front().mark << '\n';
    std::cout << "Ranking:\n";
    for (const Student& s : students)
        std::cout << s.name << ' ' << s.mark << '\n';
    return 0;
}
