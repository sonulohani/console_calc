#include "MathHelper.hpp"

std::vector<uint8_t> MathHelper::decimal2Binary(uint32_t decimalNumber) {
  std::vector<uint8_t> binaryNumber;
  binaryNumber.reserve(64);

  while (decimalNumber > 0) {
    binaryNumber.push_back(decimalNumber % 2);
    decimalNumber /= 2;
  }
  std::reverse(binaryNumber.begin(), binaryNumber.end());
  return binaryNumber;
}

std::vector<uint8_t> MathHelper::decimal2Hex(uint32_t decimalNumber) {
  std::vector<uint8_t> hexNumber;
  hexNumber.reserve(16);

  while (decimalNumber > 0) {
    int temp = decimalNumber % 16;
    if (temp < 10) {
      hexNumber.push_back(static_cast<uint8_t>(temp + 48));
    } else {
      hexNumber.push_back(static_cast<uint8_t>(temp + 55));
    }
    decimalNumber /= 16;
  }
  std::reverse(hexNumber.begin(), hexNumber.end());
  return hexNumber;
}

std::vector<uint8_t> MathHelper::decimal2Octal(uint32_t decimalNumber) {
  std::vector<uint8_t> octalNumber;
  octalNumber.reserve(22);

  while (decimalNumber > 0) {
    octalNumber.push_back(decimalNumber % 8);
    decimalNumber /= 8;
  }

  std::reverse(octalNumber.begin(), octalNumber.end());
  return octalNumber;
}
