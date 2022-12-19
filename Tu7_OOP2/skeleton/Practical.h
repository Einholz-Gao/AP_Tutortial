#ifndef PRACTICAL_H
#define PRACTICAL_H

#include "Course.h"

class Practical : public Course {
    private:
        const std::size_t _num_worksheets;
    public:
        // TODO: Add constructor and describe()
        Practical(std::string id, std::size_t num_worksheets);
        ~Practical();
        void discribe() const override;
        std::string type() const override;

};

#endif // PRACTICAL_H
