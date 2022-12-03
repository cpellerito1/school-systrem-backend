#ifndef COURSE_H
#define COURSE_H

#include "SchoolSystem.h"

#include "Section.h"

// Forward Declarations
class Section;

class Course {
    std::string name;
    char department;
    int course_id;
    u_int8_t credits;
    std::string description;
    std::vector<Course*> prerequisites;
    std::vector<section_id_t> sections;

    public:
        std::string get_name(void);
        void set_name(std::string);
        int get_course_id(void) const;
        void set_course_id(int);
        char get_department(void);
        void set_department(char);
        u_int8_t get_credits(void);
        void set_credits(u_int8_t);
        std::string get_desciption(void);
        void set_description(std::string);
        void print_description(void);
        std::vector<Course*> get_prerequisites(void);
        void add_prerequisite(Course*);
        void remove_prerequisite(Course*);
        void set_prerequisities(std::vector<Course*>);
        std::vector<section_id_t> get_sections(void);
        void add_section(section_id_t);
        void remove_section(section_id_t);
        void set_sections(std::vector<section_id_t>);

        bool operator==(const Course&) const;
        friend std::ostream& operator<<(std::ostream&, const Course&);


};

#endif // COURSE_H