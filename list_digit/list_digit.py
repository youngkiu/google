
def digitizing(given_array):
    digit = 0
    for i, value in enumerate(given_array[::-1]):
        digit += (value * pow(10, i))

    return digit

def listing(digit):
    digit_to_list = []
    while (digit):
        remaining = digit % 10
        digit = digit // 10

        digit_to_list.append(remaining)

    return digit_to_list[::-1]

def add_one(given_array):
    digit = digitizing(given_array)
    digit += 1
    print(digit)
    digit_to_list = listing(digit)
    return digit_to_list

if __name__ == '__main__':
    _given_array = [1, 3, 4]
    _result_array = add_one(_given_array)
    print(_result_array)

    _given_array = [9, 9, 9]
    _result_array = add_one(_given_array)
    print(_result_array)
