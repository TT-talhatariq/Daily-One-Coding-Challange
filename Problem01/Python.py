
def check_sums(array, number):
    new_list = []
    for i in array:

        if number - i in new_list:
            return True
        else:
            new_list.append(i)

    return False

if __name__ == '__main__':
    assert check_sums([10, 15, 3, 7], 17)
