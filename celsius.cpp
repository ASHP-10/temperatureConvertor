class Celsius {
    float C;

public:
    float getC() {
        return this -> C;
    }

    static float toF(float c) {
        return (c * 9/5) + 32;
    }
    static float toK(float c) {
        return (c + 273.15);
    }
};