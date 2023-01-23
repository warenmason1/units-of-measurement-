#include <iostream>
#include <string>
#include <cmath>

double convert(double value, std::string fromUnit, std::string toUnit) {
    double result = 0.0;
    if (fromUnit == "meters") {
        if (toUnit == "meters") {
            result = value;
        } else if (toUnit == "feet") {
            result = value * 3.2808;
        } else if (toUnit == "inches") {
            result = value * 39.3701;
        } else if (toUnit == "yards") {
            result = value * 1.0936;
        } else if (toUnit == "miles") {
            result = value * 0.000621371;
        } else {
            result = NAN;
        }
    } else if (fromUnit == "feet") {
        if (toUnit == "meters") {
            result = value * 0.3048;
        } else if (toUnit == "feet") {
            result = value;
        } else if (toUnit == "inches") {
            result = value * 12;
        } else if (toUnit == "yards") {
            result = value * 0.3333;
        } else if (toUnit == "miles") {
            result = value * 0.000189394;
        } else {
            result = NAN;
        }
    } else if (fromUnit == "inches") {
        if (toUnit == "meters") {
            result = value * 0.0254;
        } else if (toUnit == "feet") {
            result = value * 0.0833333;
        } else if (toUnit == "inches") {
            result = value;
        } else if (toUnit == "yards") {
            result = value * 0.0277778;
        } else if (toUnit == "miles") {
            result = value * 0.0000157828;
        } else {
            result = NAN;
        }
    } else if (fromUnit == "yards") {
        if (toUnit == "meters") {
            result = value * 0.9144;
        } else if (toUnit == "feet") {
            result = value * 3;
        } else if (toUnit == "inches") {
            result = value * 36;
        } else if (toUnit == "yards") {
            result = value;
        } else if (toUnit == "miles") {
            result = value * 0.000568182;
        } else {
            result = NAN;
        }
    } else if (fromUnit == "miles") {
        if (toUnit == "meters") {
            result = value * 1609.34;
        } else if (toUnit == "feet") {
            result = value * 5280;
        } else if (toUnit == "inches") {
            result = value * 63360;
        } else if (toUnit == "yards") {
            result = value * 1760;
        } else if (toUnit == "miles") {
            result = value;
        } else {
            result = NAN;
        }
    } else {
