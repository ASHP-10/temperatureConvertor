class Kelvin {
    float K;

public:
    float getK() {
        return this -> K;
    }

    static float toC(float k) {
        return k - 273.15;
    }
    static float toF(float k) {
        return toC(k) * 9/5 + 32;
    }
};