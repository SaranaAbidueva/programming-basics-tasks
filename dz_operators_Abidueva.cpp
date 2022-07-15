1 задание

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;
    
    Rational& operator+=(Rational const& r){
        this->add(r);
        return *this;
    }
    Rational& operator-=(Rational const& r){
        this->sub(r);
        return *this;
    }
    Rational& operator*=(Rational const& r){
        this->mul(r);
        return *this;
    }
    Rational& operator/=(Rational const& r){
        this->div(r);
        return *this;
    }
    Rational operator-() const{
        Rational r(numerator_, denominator_);
        r.neg();
        return r;
    }
    Rational operator+() const{
        Rational r(numerator_, denominator_);
        return r;
    }

private:
    int numerator_;
    int denominator_;
};


2 задание

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;

    Rational& operator+=(Rational rational);
    Rational& operator-=(Rational rational);
    Rational& operator*=(Rational rational);
    Rational& operator/=(Rational rational);

    Rational operator-() const;
    Rational operator+() const;

private:
    int numerator_;
    int denominator_;
};
Rational operator+(Rational r1, Rational const& r2){
    return r1+=r2;
}
Rational operator-(Rational r1, Rational const& r2){
    return r1-=r2;
}
Rational operator*(Rational r1, Rational const& r2){
    return r1*=r2;
}
Rational operator/(Rational r1, Rational const& r2){
    return r1/=r2;
}