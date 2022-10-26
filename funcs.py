def is_simple_number(x):
    """Определяет, является ли число простым
       x - целое положительное число.
       Если простое, то возращает True,
       a иначе - False
    """
    divisor = 2
    while divisor < x**0.5 + 1:
        if x % divisor == 0:
            return False
        divisor += 1
    return True


def factorize_number(x):
    """Раскладывает число на множители.
       печатает их на экран
       х - целое положительное
    """
    divisor = 2
    while x > 1:
        if x % divisor == 0:
            print(divisor, end=", ")
            x //= divisor
        else:
            divisor += 1
