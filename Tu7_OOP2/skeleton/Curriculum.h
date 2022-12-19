#ifndef CURRICULUM_H
#define CURRICULUM_H

#include <vector>
#include <memory>
#include "Course.h"

class Curriculum {
    private:
        std::vector<std::unique_ptr<Course>> _available_courses;
    public:
        Curriculum();

        void print_courses() const;

        // We return a pointer to const Course (shared_ptr, as many users may need it, and to simplify copying)
        // to make clear that the object should not be modifed by the caller
        std::shared_ptr<const Course> request(std::string id) const;
};

#endif // CURRICULUM_H
