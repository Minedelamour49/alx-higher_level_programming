def roman_to_int(roman_string):
    if roman_string is None or not isinstance(roman_string, str):
        return 0

    roman_values = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    result = 0
    prev_value = 0

    for char in roman_string:
        if char not in roman_values:
            return 0

        value = roman_values[char]

        if value > prev_value:
            result += value - 2 * prev_value
        else:
            result += value

        prev_value = value

    return result

