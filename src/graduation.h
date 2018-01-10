#ifndef _graduation_h_
#define _graduation_h_

typedef struct TRESULT {
    double val;
    const char *err;

    explicit TRESULT(double val) {
        this->val = val;
        this->err = nullptr;
    }

    explicit TRESULT(const char *err) {
        this->val = 0.0;
        this->err = err;
    }
} TRESULT;

class Graduation {
public:
    virtual ~Graduation() = default;

    virtual double temp(double) = 0;

    virtual double value(double) = 0;

    virtual const char *ed() = 0;

    virtual const char *name() = 0;

    virtual const char *description() = 0;

    TRESULT *temp0(double value) {
        try {
            double t = temp(value);
            return new TRESULT(t);
        } catch (const char *err) {
            return new TRESULT(err);
        }
    }

    TRESULT *value0(double temp) {
        try {
            double v = value(temp);
            return new TRESULT(v);
        } catch (const char *err) {
            return new TRESULT(err);
        }
    }
};

#endif
