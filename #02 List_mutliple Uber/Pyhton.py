def test(temp):
     new_list = list()
     total = 1
     for i in temp:
          total*=i
     for j in temp:
          new_list.append(total/j)
     return new_list


def main():
     my_list = [1,2,3,4,5]
     print("Before: ", my_list, "\nAfter: ", test(my_list))
if __name__ == '__main__':
     main()
