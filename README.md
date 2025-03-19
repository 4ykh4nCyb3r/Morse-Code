# Latin-Morse Converter

## Description
This program converts text from Latin characters to Morse code.

## Features
- **Encoding Mode:** Converts Latin characters (A-Z, 0-9) to Morse code.
- **Menu-driven Interface:** Users can choose operations by entering specific commands.
- **Memory Management:** Uses `malloc` to handle large input text dynamically.

## How to Use
1. Run the program.
2. Choose an option from the menu:
   - `'e'` → Encode (Latin to Morse)
   - `' '` → Exit
3. Follow the prompts to enter text and receive the Morse code output.

## Compilation & Execution
To compile the program using `gcc`:
```sh
gcc -o latin_morse_converter main.c
```
To run the compiled program:
```sh
./latin_morse_converter
```

## Future Improvements
- Implement Morse-to-Latin decoding.
- Improve memory handling and error handling.

## License
This project is open-source and available for modification and improvement.

