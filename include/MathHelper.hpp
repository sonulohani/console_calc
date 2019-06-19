#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <numeric>
#include <optional>
#include <vector>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class MathHelper final {
public:
  static inline double degToRad(double deg) { return deg * (M_PI / 180.0); }

  static inline double radToDeg(double rad) { return rad * (180.0 / M_PI); }

  static inline double add(const std::vector<double> &numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0);
  }

  static inline double sub(const std::vector<double> &numbers) {
    std::optional<double> result = {};

    std::for_each(numbers.begin(), numbers.end(), [&result](auto number) {
      if (!result.has_value()) {
        result = number;
      } else {
        result = result.value() - number;
      }
    });

    return result.value();
  }

  static inline double mul(const std::vector<double> &numbers) {
    double result = 1;
    std::for_each(numbers.begin(), numbers.end(),
                  [&result](auto number) { result *= number; });
    return result;
  }

  static inline double div(const std::vector<double> &numbers) {
    double result = 1;
    std::for_each(numbers.begin(), numbers.end(), [&result](auto number) {
      if (!result.has_value()) {
        result = number;
      } else {
        result = result.value() / number;
      }
    });
    return result;
  }

  static inline double sin(double rad) { return std::sin(rad); }

  static inline double sind(double deg) {
    return radToDeg(std::sin(degToRad(deg)));
  }

  static inline double sinr(double rad) { return std::sin(rad); }

  static inline double cos(double rad) { return std::cos(rad); }

  static inline double cosd(double deg) {
    return radToDeg(std::cos(degToRad(deg)));
  }

  static inline double cosr(double rad) { return std::cos(rad); }

  static inline double sqrt(double value) { return std::sqrt(value); }

  static inline double square(double value) { return value * value; }

  static inline double cube(double value) { return value * value * value; }

  static inline int not(int number) { return ~number; }

  static inline int or (int n1, int n2) { return n1 | n2; }

  static inline int and (int n1, int n2) { return n1 & n2; }

  static inline int and (int n1, int n2) { return n1 & n2; }

  static std::vector<uint8_t> decimal2Binary(uint32_t decimalNumber);

  static std::vector<uint8_t> decimal2Hex(uint32_t decimalNumber);

  static std::vector<uint8_t> decimal2Octal(uint32_t decimalNumber);
};
