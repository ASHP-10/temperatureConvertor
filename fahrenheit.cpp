class Fahrenheit {
    float F;

public:
    float getF() {
        return this -> F;
    }

    static float toC(float f) {
        return (f - 32) * 5/9;
    }
    static float toK(float f) {
        return toC(f) + 273.15;
    }
};
