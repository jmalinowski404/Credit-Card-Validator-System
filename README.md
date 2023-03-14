# Credit-Card-Validator-System
Credit card validation system written in C++ and explained.

This implementation uses the Luhn algorithm to validate the credit card number. The algorithm works by iterating through the digits of the credit card number 
from right to left and doubling every second digit. If the doubled digit is greater than 9, the digits of the product are summed. Then, the sum of all 
digits is computed, and if the sum is divisible by 10, the credit card number is considered valid.
