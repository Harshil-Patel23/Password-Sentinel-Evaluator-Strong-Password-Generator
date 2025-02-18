# Password Checker using Greedy Approach

## Overview
This project evaluates and improves password strength using a greedy approach. The program checks user-input passwords, identifies weaknesses, and applies minimal modifications to make them stronger.

## Features
- Evaluates password strength based on length, character variety, and common patterns.
- Detects and fixes weak passwords using a greedy algorithm.
- Suggests stronger passwords with minimal changes.
- Provides statistics about password improvements.
- Asks users whether they want to keep the generated password or enter a new one.

## Installation

### Prerequisites
- C Compiler (GCC or any other)
- Makefile (optional, if you want to compile using `make`)

### Steps
1. Clone this repository:
   ```sh
   git clone https://github.com/yourusername/password-checker.git
   cd password-checker
   ```

2. Compile the program:
   ```sh
   gcc password_checker.c -o password_checker
   ```

3. Run the program:
   ```sh
   ./password_checker
   ```

## Usage
1. Enter a password when prompted.
2. The program evaluates its strength and suggests improvements.
3. The user can choose to keep the suggested password or enter a new one.
4. The process repeats until a strong password is confirmed.

## Example Output
```sh
Enter your password: weak123
Weakness detected: Missing special characters
Suggested password: weak123@
Do you want to keep this password? (y/n): y
Password saved successfully!
```

## Contributing
Feel free to contribute to this project! Submit issues or pull requests for improvements.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
